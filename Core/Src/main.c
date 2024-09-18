/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "usbd_cdc_if.h"
#include "usb_device.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "main_config.h"
#include "module_bzk_manager.h"
#include "modbus_library.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* Фильтр на получаемые сообщения */
#define FDCAN_FILTER_FIRST_ID_Z_0 0x00010200UL
#define FDCAN_FILTER_SECOND_ID_Z_0 0x00006810UL
#define FDCAN_FILTER_FIRST_ID_Z_1 0x00010210UL
#define FDCAN_FILTER_SECOND_ID_Z_1 0x00006811UL

/* Максимальное количество попыток на включение или отключение драйвера */
#define MAX_ENABLE_ATTEMPTS 3
#define MAX_DISABLE_ATTEMPTS 3

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
FDCAN_HandleTypeDef hfdcan1;

IWDG_HandleTypeDef hiwdg;

TIM_HandleTypeDef htim6;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_FDCAN1_Init(void);
static void MX_IWDG_Init(void);
static void MX_TIM6_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
/******************************************************************************
 *     Globals
 ******************************************************************************/
extern uint8_t ui8_StringSerial[26U];

/* Инициализация*/
static bool_t bl_Init_End;
static bool_t bl_TP_Init_End;
static TP_t TP_Init_End_DATA;

/* Блок переменных для обработки CAN*/
static FDCAN_TxHeaderTypeDef FDCAN_TX_Header[3U];
static FDCAN_RxHeaderTypeDef FDCAN_RX_Header[3U];
static uint8_t ui8_FDCAN_RX_Data[3U][64U], ui8_FDCAN_TX_Data[3U][64U];
extern MODULE_BZK_RX_t MODULE_BZK_RX;
extern MODULE_BZK_TX_t MODULE_BZK_TX;
uint32_t ui32_CAN_TX_Mailbox;
static uint32_t ui32_CAN_ErrorCode[3U];
static bool_t bl_CAN_Transmit_Run[3U]; // Флаг того, что в фоновом цикле была запущена очередь отправки и отправка ещё не завершена
static bool_t bl_HAL_CAN_Transmit_IT_Run[3U]; // Флаг того, что выполняется передача одного сообщения при помощи функции HAL_CAN_Transmit_IT
static int8_t i8_CAN_Error_Counter[3U];
CAN_BUFFER_RX_t CANRxBuffer[3U];
CAN_BUFFER_TX_t CANTxBuffer[3U];
FDCAN_FilterTypeDef FDCANFilterConfig;

/* Массивы данных комманд*/
static uint32_t ui32_Input_Value;
static bool_t bl_Output_Value[64U];

/* Блок переменных таймеров*/
static bool_t bl_TIMER_LED;
static bool_t bl_TIMER_USB;
static TIMER_t TIMER_USB_Data;
static TIMER_t TIMER_LED_Data;
static TIMER_t TIMER_CAN_Data;
static bool_t bl_TIMER_CAN;

/* Переменные для обработки времени между сообщениями по CAN*/
static uint32_t ui32_lastMsgTime = 0;
const uint32_t ui32_timeout = 1000;

/* Блок переменных для обработки индикации*/
static bool_t  bl_Warning_LED, bl_BusOff_LED, bl_PreoperationalMode_LED, bl_Operational;
static uint8_t ui8_Index_LED;

/* Блок переменных для работы с первым отключенем при подаче питания на плату*/
static uint8_t ui8_Disabling_After_Power_Supply_0;
static uint8_t ui8_Disabling_After_Power_Supply_1;
static uint8_t ui8_Disabling_After_Power_Supply_2;
static uint8_t ui8_Disabling_After_Power_Supply_3;
static uint32_t ui32_Disabling_After_Power_Supply_Time_0;
static uint32_t ui32_Disabling_After_Power_Supply_Time_1;
static uint32_t ui32_Disabling_After_Power_Supply_Time_2;
static uint32_t ui32_Disabling_After_Power_Supply_Time_3;
static uint32_t ui32_After_Power_Supply_Protection_Enabling_Time_0;
static uint32_t ui32_After_Power_Supply_Protection_Enabling_Time_1;
static uint32_t ui32_After_Power_Supply_Protection_Enabling_Time_2;
static uint32_t ui32_After_Power_Supply_Protection_Enabling_Time_3;
static uint32_t ui32_After_Power_Supply_Protection_Disabling_Time_0;
static uint32_t ui32_After_Power_Supply_Protection_Disabling_Time_1;
static uint32_t ui32_After_Power_Supply_Protection_Disabling_Time_2;
static uint32_t ui32_After_Power_Supply_Protection_Disabling_Time_3;

/* Блок переменных для обработки Modbus*/
#if (bl_Modbus_Slave_Use_USB != 0)
static bool_t bl_USB_Ready, bl_USB_Mode_OLD;
#endif
#if (bl_Modbus_Slave_Use_USB != 0)
extern uint16_t ui16_Modbus_Holding_Registers_Data_USB[Modbus_Slave_Holding_Registers_Count_USB];
uint8_t ui8_Modbus_Slave_Buffer_Data_USB[Modbus_Slave_Buffer_Size_USB];
static uint16_t ui16_Modbus_Slave_Buffer_Transmit_Count_USB;
static uint16_t ui16_Modbus_Slave_CRC_USB;
static uint8_t ui8_Modbus_Slave_CRC_Error_USB, ui8_Modbus_Slave_Function_Error_USB;
static uint8_t ui8_Modbus_Slave_Packet_Count_USB, ui8_Modbus_Slave_Packet_Count_USB_OLD;
static bool_t bl_Modbus_Slave_CRC_Error_Flag_USB;
uint8_t ui8_Modbus_Slave_Buffer_Receive_USB;
static MODBUS_ERROR_t Modbus_Slave_Result_USB;
bool_t bl_USB_Poll_Flag;
uint8_t ui8_USB_Bootloader_Mode;

#define Modbus_Slave_CRC16_USB(ui8_Byte_Count) {\
    uint8_t ui8_i, ui8_n;\
    \
    ui16_Modbus_Slave_CRC_USB = 0xFFFF;\
    for (ui8_n = 0U; ui8_n < ui8_Byte_Count; ui8_n++)\
    {\
      ui16_Modbus_Slave_CRC_USB ^= INT_TO_UINT16(ui8_Modbus_Slave_Buffer_Data_USB[ui8_n]);\
      for (ui8_i = 0U; ui8_i < 8U; ui8_i++)\
      {\
        if ((ui16_Modbus_Slave_CRC_USB & 1) != 0) ui16_Modbus_Slave_CRC_USB = ((ui16_Modbus_Slave_CRC_USB >> 1) ^ 0xA001);\
        else ui16_Modbus_Slave_CRC_USB = (ui16_Modbus_Slave_CRC_USB >> 1);\
      }\
    }\
}
#endif

/* Структура и переменные для обработки управления драйверами*/
typedef struct
{
  uint32_t ui32_Start_Time;
  uint32_t ui32_Protection_Start_Enabling_Time;
  uint32_t ui32_Protection_Finish_Enabling_Time;
  uint32_t ui32_Protection_Start_Disabling_Time;
  uint32_t ui32_Protection_Finish_Disabling_Time;
  uint32_t ui32_Reset_Enable_Driver_Time;
  uint32_t ui32_Reset_Disable_Driver_Time;
  uint8_t ui8_Enable_Attempts;
  uint8_t ui8_Disable_Attempts;
  uint32_t ui32_Time_Attempt_Enabling;
  uint32_t ui32_Time_Attempt_Disabling;
  bool_t bl_State;
  bool_t bl_Protection_Was_Enabled;
  bool_t bl_Protection_Was_Disabled;
  bool_t bl_In_Process_Enabling;
  bool_t bl_In_Process_Disabling;
  bool_t bl_Not_Opened_At_First_Attempt;
  bool_t bl_Waiting_Process_Driver_Enabling;
  bool_t bl_Waiting_Process_Driver_Disabling;
  bool_t bl_First_Disabling;
}DRIVER_t;


DRIVER_t Drivers[4] =
{
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

bool_t bl_Driver_Command[4U];
bool bl_In_Loop_Attempts_Enabling, bl_In_Loop_Attempts_Disabling;
uint8_t ui8_current_Driver_In_Loop;
static bool_t bl_step_1_enabling, bl_step_2_enabling, bl_step_3_enabling, bl_step_1_disabling, bl_step_2_disabling, bl_step_3_disabling;
static bool_t bl_step_1_first_disabling, bl_step_2_first_disabling, bl_step_3_first_disabling;
static bool_t bl_First_Disabling_End;
/******************************************************************************
 *     Function Prototypes
 ******************************************************************************/
void Main_Init(void);
void Modbus_Poll_USB(void);
/******************************************************************************
 * Function Name: Main_Init
 * Description: Начальная настройка
 ******************************************************************************/
void Main_Init(void)
{
  // Формируем строку серийного номера микроконтроллера
  GET_SERIAL_NUM();

  // Настройка фильтров CAN на приём соответствующих сообщений
  HAL_FDCAN_ConfigGlobalFilter(&hfdcan1, FDCAN_REJECT, FDCAN_REJECT, FDCAN_REJECT_REMOTE, FDCAN_FILTER_REMOTE);

  FDCANFilterConfig.IdType = FDCAN_EXTENDED_ID;
  FDCANFilterConfig.FilterIndex = 0;
  FDCANFilterConfig.FilterType = FDCAN_FILTER_DUAL;
  FDCANFilterConfig.FilterConfig = FDCAN_FILTER_TO_RXFIFO0;
  FDCANFilterConfig.FilterID1 = FDCAN_FILTER_FIRST_ID_Z_0;
  FDCANFilterConfig.FilterID2 = FDCAN_FILTER_SECOND_ID_Z_0;

  if (HAL_FDCAN_ConfigFilter(&hfdcan1, &FDCANFilterConfig) != HAL_OK)
  {
    Error_Handler();
  }

  // Включаем модуль CAN
  if (HAL_FDCAN_Start(&hfdcan1) != HAL_OK)
  {
    Error_Handler();
  }

  // Включаем прерывания приёма данных по CAN для очередей FIFO0 (очередь FIFO1 использовать не будем)
  if (HAL_FDCAN_ActivateNotification(&hfdcan1, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, FDCAN_TX_BUFFER0) != HAL_OK)
  {
    Error_Handler();
  }
}


void HAL_FDCAN_RxFifo0Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs)
{
  if((RxFifo0ITs & FDCAN_IT_RX_FIFO0_NEW_MESSAGE) != RESET)
  {
    int16_t i16_TEMP = 0, i16_Index;

    HAL_FDCAN_GetRxMessage(hfdcan, FDCAN_RX_FIFO0, &FDCAN_RX_Header[i16_TEMP], ui8_FDCAN_RX_Data[i16_TEMP]);

    if (FDCAN_RX_Header[i16_TEMP].FDFormat == FDCAN_CLASSIC_CAN)
    {
      // i16_Index - количество ячеек в буфере доступных для записи.
      // (PROJECT_CAN_BUFFER_RX_SIZE - 1) <= одна ячейка в буфере остаётся не доступной для записи, что бы после записи (ui16_Buffer_End != ui16_Buffer_Start).
      if (CANRxBuffer[i16_TEMP].ui16_Buffer_End >= CANRxBuffer[i16_TEMP].ui16_Buffer_Start)
      {
        i16_Index = (PROJECT_CAN_BUFFER_RX_SIZE - 1 - (CANRxBuffer[i16_TEMP].ui16_Buffer_End - CANRxBuffer[i16_TEMP].ui16_Buffer_Start));
      }
      else
      {
        i16_Index = (PROJECT_CAN_BUFFER_RX_SIZE - 1 - (CANRxBuffer[i16_TEMP].ui16_Buffer_End - CANRxBuffer[i16_TEMP].ui16_Buffer_Start + PROJECT_CAN_BUFFER_RX_SIZE));
      }
      if (i16_Index >= 1)
      {
        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui32_ID = FDCAN_RX_Header[i16_TEMP].Identifier;
        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].bl_IDE = (FDCAN_RX_Header[i16_TEMP].IdType == FDCAN_EXTENDED_ID);
        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].bl_RTR = (FDCAN_RX_Header[i16_TEMP].RxFrameType == FDCAN_REMOTE_FRAME);

        switch (FDCAN_RX_Header[i16_TEMP].DataLength)
        {
          case FDCAN_DLC_BYTES_0:
            CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_DLC = 0;
            break;
          case FDCAN_DLC_BYTES_1:
            CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_DLC = 1;
            break;
          case FDCAN_DLC_BYTES_2:
            CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_DLC = 2;
            break;
          case FDCAN_DLC_BYTES_3:
            CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_DLC = 3;
            break;
          case FDCAN_DLC_BYTES_4:
            CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_DLC = 4;
            break;
          case FDCAN_DLC_BYTES_5:
            CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_DLC = 5;
            break;
          case FDCAN_DLC_BYTES_6:
            CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_DLC = 6;
            break;
          case FDCAN_DLC_BYTES_7:
            CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_DLC = 7;
            break;
          default:
            CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_DLC = 8;
            break;
        }

        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_Data[0U] = ui8_FDCAN_RX_Data[i16_TEMP][0U];
        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_Data[1U] = ui8_FDCAN_RX_Data[i16_TEMP][1U];
        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_Data[2U] = ui8_FDCAN_RX_Data[i16_TEMP][2U];
        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_Data[3U] = ui8_FDCAN_RX_Data[i16_TEMP][3U];
        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_Data[4U] = ui8_FDCAN_RX_Data[i16_TEMP][4U];
        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_Data[5U] = ui8_FDCAN_RX_Data[i16_TEMP][5U];
        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_Data[6U] = ui8_FDCAN_RX_Data[i16_TEMP][6U];
        CANRxBuffer[i16_TEMP].Message[CANRxBuffer[i16_TEMP].ui16_Buffer_End].ui8_Data[7U] = ui8_FDCAN_RX_Data[i16_TEMP][7U];

        CANRxBuffer[i16_TEMP].ui16_Buffer_End = (CANRxBuffer[i16_TEMP].ui16_Buffer_End + 1);
        if (CANRxBuffer[i16_TEMP].ui16_Buffer_End >= PROJECT_CAN_BUFFER_RX_SIZE)
        {
          CANRxBuffer[i16_TEMP].ui16_Buffer_End = 0;
        }
      }
      else
      {
        ui32_CAN_ErrorCode[i16_TEMP] = (ui32_CAN_ErrorCode[i16_TEMP] | 0x80000000U);
      }
    }

  }
  ui32_lastMsgTime = HAL_GetTick();
  HAL_FDCAN_ActivateNotification(hfdcan, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, FDCAN_TX_BUFFER0);
}

void HAL_FDCAN_TxFifoEmptyCallback(FDCAN_HandleTypeDef *hfdcan)
{
  int16_t i16_TEMP = 0;

  bl_HAL_CAN_Transmit_IT_Run[i16_TEMP] = FALSE;

  if (CANTxBuffer[i16_TEMP].ui16_Buffer_End != CANTxBuffer[i16_TEMP].ui16_Buffer_Start)
  {
    FDCAN_TX_Header[i16_TEMP].Identifier = CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].ui32_ID;
    if (CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].bl_IDE)
    {
      FDCAN_TX_Header[i16_TEMP].IdType = FDCAN_EXTENDED_ID;
    }
    else
    {
      FDCAN_TX_Header[i16_TEMP].IdType = FDCAN_STANDARD_ID;
    }
    if (CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].bl_RTR)
    {
      FDCAN_TX_Header[i16_TEMP].TxFrameType = FDCAN_REMOTE_FRAME;
    }
    else
    {
      FDCAN_TX_Header[i16_TEMP].TxFrameType = FDCAN_DATA_FRAME;
    }
    switch (CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].ui8_DLC)
    {
      case 0U:
        FDCAN_TX_Header[i16_TEMP].DataLength = FDCAN_DLC_BYTES_0;
        break;
      case 1U:
        FDCAN_TX_Header[i16_TEMP].DataLength = FDCAN_DLC_BYTES_1;
        break;
      case 2U:
        FDCAN_TX_Header[i16_TEMP].DataLength = FDCAN_DLC_BYTES_2;
        break;
      case 3U:
        FDCAN_TX_Header[i16_TEMP].DataLength = FDCAN_DLC_BYTES_3;
        break;
      case 4U:
        FDCAN_TX_Header[i16_TEMP].DataLength = FDCAN_DLC_BYTES_4;
        break;
      case 5U:
        FDCAN_TX_Header[i16_TEMP].DataLength = FDCAN_DLC_BYTES_5;
        break;
      case 6U:
        FDCAN_TX_Header[i16_TEMP].DataLength = FDCAN_DLC_BYTES_6;
        break;
      case 7U:
        FDCAN_TX_Header[i16_TEMP].DataLength = FDCAN_DLC_BYTES_7;
        break;
      default:
        FDCAN_TX_Header[i16_TEMP].DataLength = FDCAN_DLC_BYTES_8;
        break;
    }
    FDCAN_TX_Header[i16_TEMP].ErrorStateIndicator = FDCAN_ESI_ACTIVE;
    FDCAN_TX_Header[i16_TEMP].BitRateSwitch = FDCAN_BRS_OFF;
    FDCAN_TX_Header[i16_TEMP].FDFormat = FDCAN_CLASSIC_CAN;
    FDCAN_TX_Header[i16_TEMP].TxEventFifoControl = FDCAN_NO_TX_EVENTS;
    FDCAN_TX_Header[i16_TEMP].MessageMarker = 0;

    ui8_FDCAN_TX_Data[i16_TEMP][0U] = CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].ui8_Data[0U];
    ui8_FDCAN_TX_Data[i16_TEMP][1U] = CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].ui8_Data[1U];
    ui8_FDCAN_TX_Data[i16_TEMP][2U] = CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].ui8_Data[2U];
    ui8_FDCAN_TX_Data[i16_TEMP][3U] = CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].ui8_Data[3U];
    ui8_FDCAN_TX_Data[i16_TEMP][4U] = CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].ui8_Data[4U];
    ui8_FDCAN_TX_Data[i16_TEMP][5U] = CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].ui8_Data[5U];
    ui8_FDCAN_TX_Data[i16_TEMP][6U] = CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].ui8_Data[6U];
    ui8_FDCAN_TX_Data[i16_TEMP][7U] = CANTxBuffer[i16_TEMP].Message[CANTxBuffer[i16_TEMP].ui16_Buffer_Start].ui8_Data[7U];

    CANTxBuffer[i16_TEMP].ui16_Buffer_Start = (CANTxBuffer[i16_TEMP].ui16_Buffer_Start + 1);
    if (CANTxBuffer[i16_TEMP].ui16_Buffer_Start >= PROJECT_CAN_BUFFER_TX_SIZE)
    {
      CANTxBuffer[i16_TEMP].ui16_Buffer_Start = 0;
    }

    bl_HAL_CAN_Transmit_IT_Run[i16_TEMP] = TRUE;

    HAL_FDCAN_AddMessageToTxFifoQ(hfdcan, &FDCAN_TX_Header[i16_TEMP], ui8_FDCAN_TX_Data[i16_TEMP]);
    HAL_FDCAN_ActivateNotification(hfdcan, FDCAN_IT_TX_FIFO_EMPTY, FDCAN_TX_BUFFER0);
  }
  else
  {
    bl_CAN_Transmit_Run[i16_TEMP] = FALSE;
  }
}

void HAL_FDCAN_ErrorCallback(FDCAN_HandleTypeDef *hfdcan)
{
  uint32_t ui32_CAN_ErrorCode_Local;
  int16_t i16_TEMP = 0;

  i8_CAN_Error_Counter[i16_TEMP] = (i8_CAN_Error_Counter[i16_TEMP] + 1);

  ui32_CAN_ErrorCode_Local = HAL_FDCAN_GetError(hfdcan); // Смотри, например, HAL_FDCAN_ERROR_NONE; 0x80000000U - переполнение буфера приёма
  ui32_CAN_ErrorCode[i16_TEMP] = (ui32_CAN_ErrorCode[i16_TEMP] | ui32_CAN_ErrorCode_Local);

  if (ui32_CAN_ErrorCode_Local & (HAL_FDCAN_ERROR_PROTOCOL_ARBT /* FDCAN_IR_PEA */ | HAL_FDCAN_ERROR_PROTOCOL_DATA /* FDCAN_IR_PED */)
  )
  {
    HAL_FDCAN_GetRxMessage(hfdcan, FDCAN_RX_FIFO0, &FDCAN_RX_Header[i16_TEMP], ui8_FDCAN_RX_Data[i16_TEMP]);
    HAL_FDCAN_ActivateNotification(hfdcan, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, FDCAN_TX_BUFFER0);
    if (bl_HAL_CAN_Transmit_IT_Run[i16_TEMP])
    {
      HAL_FDCAN_AddMessageToTxFifoQ(hfdcan, &FDCAN_TX_Header[i16_TEMP], ui8_FDCAN_TX_Data[i16_TEMP]);
      HAL_FDCAN_ActivateNotification(hfdcan, FDCAN_IT_TX_FIFO_EMPTY, FDCAN_TX_BUFFER0);
    }
  }

  /* Reset the FDCAN ErrorCode */
  hfdcan->ErrorCode &= ~(
      HAL_FDCAN_ERROR_LOG_OVERFLOW | HAL_FDCAN_ERROR_RAM_WDG |
      HAL_FDCAN_ERROR_PROTOCOL_ARBT | HAL_FDCAN_ERROR_PROTOCOL_DATA |
      HAL_FDCAN_ERROR_RESERVED_AREA | HAL_FDCAN_ERROR_RAM_ACCESS
  );
}


/******************************************************************************
 * Function Name: Modbus_Poll_USB
 * Description: Работа с данными принятыми / передаваемыми по Modbus через USB (виртуальный COM-порт)
 ******************************************************************************/
void Modbus_Poll_USB(void)
{
#if (bl_Modbus_Slave_Use_USB != 0)
  uint32_t ui32_TempInt, ui32_TempLen, ui32_TempIndex;
  uint8_t ui8_TempArrayIndex;
  char TempString[10];

  if (bl_USB_Poll_Flag)
  {
    if (ui16_Modbus_Holding_Registers_Data_USB[59U] > 1000)
    {
      ui16_Modbus_Holding_Registers_Data_USB[59U] = 0x0;
    }
    ui16_Modbus_Holding_Registers_Data_USB[59U] = (ui16_Modbus_Holding_Registers_Data_USB[59U] + 1);
    if (ui8_Modbus_Slave_Buffer_Receive_USB == 1)
    {
      switch (ui8_Modbus_Slave_Buffer_Data_USB[0U])
      {
        case 0x31: // "1"
          ui32_TempIndex = 0;

          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 0U] = 'E';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 1U] = 'P';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 2U] = 'R';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 3U] = 'O';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 4U] = ':';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 5U] = ' ';
          ui32_TempIndex = (ui32_TempIndex + 6U);

          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 0U] = NUM16_TO_BYTE(SHR(PROJECT_DATA, 28) & 0xF);
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 1U] = NUM16_TO_BYTE(SHR(PROJECT_DATA, 24) & 0xF);
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 2U] = NUM16_TO_BYTE(SHR(PROJECT_DATA, 20) & 0xF);
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 3U] = NUM16_TO_BYTE(SHR(PROJECT_DATA, 16) & 0xF);
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 4U] = NUM16_TO_BYTE(SHR(PROJECT_DATA, 12) & 0xF);
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 5U] = NUM16_TO_BYTE(SHR(PROJECT_DATA, 8) & 0xF);
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 6U] = NUM16_TO_BYTE(SHR(PROJECT_DATA, 4) & 0xF);
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 7U] = NUM16_TO_BYTE(PROJECT_DATA & 0xF);
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 8U] = 0x0D; // "CR"
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 9U] = 0x0A; // "LF"
          ui32_TempIndex = (ui32_TempIndex + 10U);

          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 0U] = ' ';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 1U] = ' ';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 2U] = 'S';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 3U] = 'W';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 4U] = ':';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 5U] = ' ';
          ui32_TempIndex = (ui32_TempIndex + 6U);

          itoa(PROJECT_ID, TempString, 10);
          ui32_TempLen = strlen(TempString);
          for (ui32_TempInt = 0; ui32_TempInt < ui32_TempLen; ui32_TempInt++)
          {
            ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + ui32_TempInt] = TempString[ui32_TempInt];
          }
          ui32_TempIndex = ui32_TempIndex + ui32_TempLen;

          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 0U] = (int)('.');
          ui32_TempIndex = (ui32_TempIndex + 1U);

          itoa(PROJECT_VERSION, TempString, 10);
          ui32_TempLen = strlen(TempString);
          for (ui32_TempInt = 0; ui32_TempInt < ui32_TempLen; ui32_TempInt++)
          {
            ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + ui32_TempInt] = TempString[ui32_TempInt];
          }
          ui32_TempIndex = ui32_TempIndex + ui32_TempLen;

          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 0U] = 0x0D; // "CR"
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 1U] = 0x0A; // "LF"
          ui32_TempIndex = (ui32_TempIndex + 2U);

          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 0U] = ' ';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 1U] = ' ';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 2U] = 'I';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 3U] = 'D';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 4U] = ':';
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 5U] = ' ';
          ui32_TempIndex = (ui32_TempIndex + 6U);

          for (ui32_TempInt = 0; ui32_TempInt < 24; ui32_TempInt++)
          {
            ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + ui32_TempInt] = ui8_StringSerial[ui32_TempInt + 2U];
          }
          ui32_TempIndex = (ui32_TempIndex + 24);

          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 0U] = 0x0D; // "CR"
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 1U] = 0x0A; // "LF"
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 2U] = 0x0D; // "CR"
          ui8_Modbus_Slave_Buffer_Data_USB[ui32_TempIndex + 3U] = 0x0A; // "LF"
          ui32_TempIndex = (ui32_TempIndex + 4U);

          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], ui32_TempIndex);
          bl_USB_Poll_Flag = FALSE;
          break;
        case 0x53: // "S"
          if (ui8_USB_Bootloader_Mode == 1)
          {
            ui8_USB_Bootloader_Mode = 2;
          }
          else
          {
            ui8_USB_Bootloader_Mode = 0;
          }
          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 1);
          bl_USB_Poll_Flag = FALSE;
          break;
        case 0x54: // "T"
          if (ui8_USB_Bootloader_Mode == 2)
          {
            ui8_USB_Bootloader_Mode = 3;
          }
          else
          {
            ui8_USB_Bootloader_Mode = 0;
          }
          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 1);
          bl_USB_Poll_Flag = FALSE;
          break;
        case 0x4D: // "M"
          if (ui8_USB_Bootloader_Mode == 3)
          {
            ui8_USB_Bootloader_Mode = 4;
          }
          else
          {
            ui8_USB_Bootloader_Mode = 0;
          }
          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 1);
          bl_USB_Poll_Flag = FALSE;
          break;
        case 0x4C: // "L"
          if (ui8_USB_Bootloader_Mode == 4)
          {
            ui8_USB_Bootloader_Mode = 5;
          }
          else
          {
            ui8_USB_Bootloader_Mode = 0;
          }
          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 1);
          bl_USB_Poll_Flag = FALSE;
          break;
        case 0x4F: // "O"
          if (ui8_USB_Bootloader_Mode == 5)
          {
            ui8_USB_Bootloader_Mode = 6;
          }
          else
          {
            ui8_USB_Bootloader_Mode = 0;
          }
          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 1);
          bl_USB_Poll_Flag = FALSE;
          break;
        case 0x41: // "A"
          if (ui8_USB_Bootloader_Mode == 6)
          {
            ui8_USB_Bootloader_Mode = 7;
          }
          else
          {
            ui8_USB_Bootloader_Mode = 0;
          }
          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 1);
          bl_USB_Poll_Flag = FALSE;
          break;
        case 0x44: // "D"
          if (ui8_USB_Bootloader_Mode == 7)
          {
            ui8_USB_Bootloader_Mode = 8;
          }
          else
          {
            ui8_USB_Bootloader_Mode = 0;
          }
          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 1);
          bl_USB_Poll_Flag = FALSE;
          break;
        case 0x45: // "E"
          if (ui8_USB_Bootloader_Mode == 8)
          {
            ui8_USB_Bootloader_Mode = 9;
          }
          else
          {
            ui8_USB_Bootloader_Mode = 0;
          }
          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 1);
          bl_USB_Poll_Flag = FALSE;
          break;
        case 0x52: // "R"
          if (ui8_USB_Bootloader_Mode == 9)
          {
            ui8_USB_Bootloader_Mode = 0;
            ui8_Modbus_Slave_Buffer_Data_USB[1U] = 0x0D; // "CR"
            ui8_Modbus_Slave_Buffer_Data_USB[2U] = 0x0A; // "LF"
            ui8_Modbus_Slave_Buffer_Data_USB[3U] = 0x0D; // "CR"
            ui8_Modbus_Slave_Buffer_Data_USB[4U] = 0x0A; // "LF"
            CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 5);
            bl_USB_Poll_Flag = FALSE;

            JumpToBootloader();
          }
          else
          {
            CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 1);
            bl_USB_Poll_Flag = FALSE;
          }
          break;
        default:
          ui8_USB_Bootloader_Mode = 0;
          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0U], 1);
          bl_USB_Poll_Flag = FALSE;
          break;
      }
    }
    else
    {
      ui8_USB_Bootloader_Mode = 0;

      ui8_Modbus_Slave_Packet_Count_USB++;
      Modbus_Slave_Result_USB = MODBUS_ILLEGAL_FUNCTION;
      if ((ui8_Modbus_Slave_Buffer_Receive_USB <= Modbus_Slave_Buffer_Size_USB) && (ui8_Modbus_Slave_Buffer_Receive_USB >= 4))
      {
        Modbus_Slave_CRC16_USB(ui8_Modbus_Slave_Buffer_Receive_USB - 2);
        bl_Modbus_Slave_CRC_Error_Flag_USB = (
            ui16_Modbus_Slave_CRC_USB !=
                (
                    (INT_TO_UINT16(ui8_Modbus_Slave_Buffer_Data_USB[ui8_Modbus_Slave_Buffer_Receive_USB - 1]) << 8) |
                    INT_TO_UINT16(ui8_Modbus_Slave_Buffer_Data_USB[ui8_Modbus_Slave_Buffer_Receive_USB - 2])
                )
        );
      }
      else
      {
        bl_Modbus_Slave_CRC_Error_Flag_USB = TRUE;
      }

      if (bl_Modbus_Slave_CRC_Error_Flag_USB)
      {
        ui8_Modbus_Slave_CRC_Error_USB++;
        ui16_Modbus_Slave_Buffer_Transmit_Count_USB = 0;
        bl_USB_Poll_Flag = FALSE;
      }
      else
      {
        if (ui8_Modbus_Slave_Buffer_Data_USB[0U] == Modbus_Slave_Second_ID_USB)
        {
          ui8_TempArrayIndex = Modbus_Slave_Second_Array_Index_USB;
        }
        else
        {
          ui8_TempArrayIndex = Modbus_Slave_Array_Index_USB;
        }

        switch (ui8_Modbus_Slave_Buffer_Data_USB[1U])
        {
          case 0x03: // Чтение регистра хранения
            Modbus_Slave_Result_USB = (MODBUS_ERROR_t)Modbus_Read_Holding_Register(ui8_TempArrayIndex, &ui8_Modbus_Slave_Buffer_Data_USB[2U],
                &ui16_Modbus_Slave_Buffer_Transmit_Count_USB);
            if (ui16_Modbus_Slave_Buffer_Transmit_Count_USB > (sizeof(ui8_Modbus_Slave_Buffer_Data_USB) - 4))
            {
              Modbus_Slave_Result_USB = MODBUS_SERVER_DEVICE_FAILURE;
            }
            break;
#if (Modbus_Slave_Read_Only_USB == 0U)
          case 0x06: // Запись регистра хранения
            Modbus_Slave_Result_USB = (MODBUS_ERROR_t)Modbus_Write_Single_Register(ui8_TempArrayIndex, &ui8_Modbus_Slave_Buffer_Data_USB[2U],
                &ui16_Modbus_Slave_Buffer_Transmit_Count_USB);
            if (ui16_Modbus_Slave_Buffer_Transmit_Count_USB > (sizeof(ui8_Modbus_Slave_Buffer_Data_USB) - 4))
            {
              Modbus_Slave_Result_USB = MODBUS_SERVER_DEVICE_FAILURE;
            }
            break;
          case 0x10: // Запись регистров хранения
            Modbus_Slave_Result_USB = (MODBUS_ERROR_t)Modbus_Write_Multiple_Register(ui8_TempArrayIndex, &ui8_Modbus_Slave_Buffer_Data_USB[2U],
                &ui16_Modbus_Slave_Buffer_Transmit_Count_USB);
            if (ui16_Modbus_Slave_Buffer_Transmit_Count_USB > (sizeof(ui8_Modbus_Slave_Buffer_Data_USB) - 4))
            {
              Modbus_Slave_Result_USB = MODBUS_SERVER_DEVICE_FAILURE;
            }
            break;
          case 0x17: // Запись регистров хранения, а затем чтение регистров хранения
            Modbus_Slave_Result_USB = (MODBUS_ERROR_t)Modbus_Read_Write_Multiple_Registers(ui8_TempArrayIndex, &ui8_Modbus_Slave_Buffer_Data_USB[2U],
                &ui16_Modbus_Slave_Buffer_Transmit_Count_USB);
            if (ui16_Modbus_Slave_Buffer_Transmit_Count_USB > (sizeof(ui8_Modbus_Slave_Buffer_Data_USB) - 4))
            {
              Modbus_Slave_Result_USB = MODBUS_SERVER_DEVICE_FAILURE;
            }
            break;
#endif
        }

        if (ui8_Modbus_Slave_Buffer_Data_USB[0U] == 0)
        {
          ui16_Modbus_Slave_Buffer_Transmit_Count_USB = 0;
          bl_USB_Poll_Flag = FALSE;
        }
        else
        {
          if (Modbus_Slave_Result_USB != MODBUS_NO_ERROR)
          {
            ui8_Modbus_Slave_Function_Error_USB++;
            ui8_Modbus_Slave_Buffer_Data_USB[1U] |= 0x80;
            ui8_Modbus_Slave_Buffer_Data_USB[2U] = Modbus_Slave_Result_USB;
            ui16_Modbus_Slave_Buffer_Transmit_Count_USB = 1; // Modbus_Slave_Buffer_Transmit_Count_1 <= Количество байт данных
          }

          ui16_Modbus_Slave_Buffer_Transmit_Count_USB += 2; // Modbus_Slave_Buffer_Transmit_Count_1 <= Учитываем № устройства и № функции
          Modbus_Slave_CRC16_USB(INT_TO_UINT8(ui16_Modbus_Slave_Buffer_Transmit_Count_USB));
          ui8_Modbus_Slave_Buffer_Data_USB[ui16_Modbus_Slave_Buffer_Transmit_Count_USB] = INT_TO_UINT8(ui16_Modbus_Slave_CRC_USB & 0xFF);
          ui8_Modbus_Slave_Buffer_Data_USB[ui16_Modbus_Slave_Buffer_Transmit_Count_USB + 1] = INT_TO_UINT8(ui16_Modbus_Slave_CRC_USB >> 8);
          ui16_Modbus_Slave_Buffer_Transmit_Count_USB += 2; // Modbus_Slave_Buffer_Transmit_Count_1 <= Учитываем два байта CRC
          CDC_Transmit_FS(&ui8_Modbus_Slave_Buffer_Data_USB[0], ui16_Modbus_Slave_Buffer_Transmit_Count_USB);
          bl_USB_Poll_Flag = FALSE;
        }
      }

      // Формирование массива диагностических данных
      ui16_Modbus_Holding_Registers_Data_USB[10U] = INT_TO_UINT16(SHL(INT_TO_UINT16(PROJECT_ID - 460U), 7) | (INT_TO_UINT16(PROJECT_VERSION) & 0x007F));
      ui16_Modbus_Holding_Registers_Data_USB[11U] = (
          (SHL(INT_TO_UINT16(NUM16_TO_BYTE(SHR(PROJECT_DATA, 4) & 0x0000000F)), 8) & 0xFF00) |
          INT_TO_UINT16(NUM16_TO_BYTE(SHR(PROJECT_DATA, 0) & 0x0000000F))
      );
      ui16_Modbus_Holding_Registers_Data_USB[12U] = (
          (SHL(INT_TO_UINT16(NUM16_TO_BYTE(SHR(PROJECT_DATA, 12) & 0x0000000F)), 8) & 0xFF00) |
          INT_TO_UINT16(NUM16_TO_BYTE(SHR(PROJECT_DATA, 8) & 0x0000000F))
      );
      ui16_Modbus_Holding_Registers_Data_USB[13U] = (
          (SHL(INT_TO_UINT16(NUM16_TO_BYTE(SHR(PROJECT_DATA, 20) & 0x0000000F)), 8) & 0xFF00) |
          INT_TO_UINT16(NUM16_TO_BYTE(SHR(PROJECT_DATA, 16) & 0x0000000F))
      );
      ui16_Modbus_Holding_Registers_Data_USB[14U] = (
          (SHL(INT_TO_UINT16(NUM16_TO_BYTE(SHR(PROJECT_DATA, 28) & 0x0000000F)), 8) & 0xFF00) |
          INT_TO_UINT16(NUM16_TO_BYTE(SHR(PROJECT_DATA, 24) & 0x0000000F))
      );
      ui16_Modbus_Holding_Registers_Data_USB[15U] = ((SHL(ui8_StringSerial[22U], 8) & 0xFF00) | ui8_StringSerial[24U]);
      ui16_Modbus_Holding_Registers_Data_USB[16U] = ((SHL(ui8_StringSerial[18U], 8) & 0xFF00) | ui8_StringSerial[20U]);
      ui16_Modbus_Holding_Registers_Data_USB[17U] = ((SHL(ui8_StringSerial[14U], 8) & 0xFF00) | ui8_StringSerial[16U]);
      ui16_Modbus_Holding_Registers_Data_USB[18U] = ((SHL(ui8_StringSerial[10U], 8) & 0xFF00) | ui8_StringSerial[12U]);
      ui16_Modbus_Holding_Registers_Data_USB[19U] = ((SHL(ui8_StringSerial[6U], 8) & 0xFF00) | ui8_StringSerial[8U]);
      ui16_Modbus_Holding_Registers_Data_USB[20U] = ((SHL(ui8_StringSerial[2U], 8) & 0xFF00) | ui8_StringSerial[4U]);
      ui16_Modbus_Holding_Registers_Data_USB[21U] = INT_TO_UINT16(SHR(READ_REG(hfdcan1.Instance->ECR), 0) & 0x0000FFFF); // Сдвиг для G47* не требуется
      ui16_Modbus_Holding_Registers_Data_USB[22U] = (SHL(ui8_Modbus_Slave_CRC_Error_USB, 8));
      ui16_Modbus_Holding_Registers_Data_USB[23U] = INT_TO_UINT16(ui32_Input_Value & 0x0000FFFF);
      ui16_Modbus_Holding_Registers_Data_USB[24U] = INT_TO_UINT16(SHR(ui32_Input_Value, 16) & 0x0000FFFF);
      ui16_Modbus_Holding_Registers_Data_USB[25U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[26U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[27U] = (
          SHL(bl_Output_Value[0U], 0) |
          SHL(bl_Output_Value[1U], 1) |
          SHL(bl_Output_Value[2U], 2) |
          SHL(bl_Output_Value[3U], 3) |
          SHL(bl_Output_Value[4U], 4) |
          SHL(bl_Output_Value[5U], 5) |
          SHL(bl_Output_Value[6U], 6) |
          SHL(bl_Output_Value[7U], 7) |
          SHL(bl_Output_Value[8U], 8) |
          SHL(bl_Output_Value[9U], 9) |
          SHL(bl_Output_Value[10U], 10) |
          SHL(bl_Output_Value[11U], 11) |
          SHL(bl_Output_Value[12U], 12) |
          SHL(bl_Output_Value[13U], 13) |
          SHL(bl_Output_Value[14U], 14) |
          SHL(bl_Output_Value[15U], 15)
      );
      ui16_Modbus_Holding_Registers_Data_USB[28U] = (
          SHL(bl_Output_Value[16U], 0) |
          SHL(bl_Output_Value[17U], 1) |
          SHL(bl_Output_Value[18U], 2) |
          SHL(bl_Output_Value[19U], 3) |
          SHL(bl_Output_Value[20U], 4) |
          SHL(bl_Output_Value[21U], 5) |
          SHL(bl_Output_Value[22U], 6) |
          SHL(bl_Output_Value[23U], 7) |
          SHL(bl_Output_Value[24U], 8) |
          SHL(bl_Output_Value[25U], 9) |
          SHL(bl_Output_Value[26U], 10) |
          SHL(bl_Output_Value[27U], 11) |
          SHL(bl_Output_Value[28U], 12) |
          SHL(bl_Output_Value[29U], 13) |
          SHL(bl_Output_Value[30U], 14) |
          SHL(bl_Output_Value[31U], 15)
      );
      ui16_Modbus_Holding_Registers_Data_USB[29U] = (
          SHL(bl_Output_Value[32U], 0) |
          SHL(bl_Output_Value[33U], 1) |
          SHL(bl_Output_Value[34U], 2) |
          SHL(bl_Output_Value[35U], 3) |
          SHL(bl_Output_Value[36U], 4) |
          SHL(bl_Output_Value[37U], 5) |
          SHL(bl_Output_Value[38U], 6) |
          SHL(bl_Output_Value[39U], 7) |
          SHL(bl_Output_Value[40U], 8) |
          SHL(bl_Output_Value[41U], 9) |
          SHL(bl_Output_Value[42U], 10) |
          SHL(bl_Output_Value[43U], 11) |
          SHL(bl_Output_Value[44U], 12) |
          SHL(bl_Output_Value[45U], 13) |
          SHL(bl_Output_Value[46U], 14) |
          SHL(bl_Output_Value[47U], 15)
      );
      ui16_Modbus_Holding_Registers_Data_USB[30U] = (
          SHL(bl_Output_Value[48U], 0) |
          SHL(bl_Output_Value[49U], 1) |
          SHL(bl_Output_Value[50U], 2) |
          SHL(bl_Output_Value[51U], 3) |
          SHL(bl_Output_Value[52U], 4) |
          SHL(bl_Output_Value[53U], 5) |
          SHL(bl_Output_Value[54U], 6) |
          SHL(bl_Output_Value[55U], 7) |
          SHL(bl_Output_Value[56U], 8) |
          SHL(bl_Output_Value[57U], 9) |
          SHL(bl_Output_Value[58U], 10) |
          SHL(bl_Output_Value[59U], 11) |
          SHL(bl_Output_Value[60U], 12) |
          SHL(bl_Output_Value[61U], 13) |
          SHL(bl_Output_Value[62U], 14) |
          SHL(bl_Output_Value[63U], 15)
      );
      ui16_Modbus_Holding_Registers_Data_USB[31U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[32U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[33U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[34U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[35U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[36U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[37U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[38U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[39U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[40U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[41U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[42U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[43U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[44U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[45U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[46U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[47U] = 0;
      ui16_Modbus_Holding_Registers_Data_USB[48U] = 0;
    }
  }
#endif
}

/******************************************************************************
 * Function Name: UpdateDriverStates
 * Description: Запись / обновление состояний драйверов
 ******************************************************************************/
void UpdateDriverStates()
{
  Drivers[0].bl_State = EPRO_Test_Bit(ui32_Input_Value, 7);
  Drivers[1].bl_State = EPRO_Test_Bit(ui32_Input_Value, 8);
  Drivers[2].bl_State = EPRO_Test_Bit(ui32_Input_Value, 9);
  Drivers[3].bl_State = EPRO_Test_Bit(ui32_Input_Value, 10);
}

/******************************************************************************
 * Function Name: EnableProtection
 * Description: Подача сигнала на включение "защиты"
 ******************************************************************************/
void EnableProtection()
{
  HAL_GPIO_WritePin(OUT_D_25_GPIO_Port, OUT_D_25_Pin, TRUE); //
  MODULE_BZK_TX.bl_XP10_2_OUT = TRUE;
}

/******************************************************************************
 * Function Name: DisableProtection
 * Description: Подача сигнала на отключение "защиты"
 ******************************************************************************/
void DisableProtection()
{
  HAL_GPIO_WritePin(OUT_D_25_GPIO_Port, OUT_D_25_Pin, FALSE);
  MODULE_BZK_TX.bl_XP10_2_OUT = FALSE;
}

/******************************************************************************
 * Function Name: EnableDriver
 * Description: Подача сигнала на включение драйвера
 ******************************************************************************/
void EnableDriver(DRIVER_t* driver, uint32_t currentTime, uint8_t currentDriverIndex)
{
  switch (currentDriverIndex)
  {
    case 0:
      HAL_GPIO_WritePin(OUT_D_17_GPIO_Port, OUT_D_17_Pin, TRUE);
      MODULE_BZK_TX.bl_XP9_3_OUT = TRUE;
      break;
    case 1:
      HAL_GPIO_WritePin(OUT_D_19_GPIO_Port, OUT_D_19_Pin, TRUE);
      MODULE_BZK_TX.bl_XP9_5_OUT = TRUE;
      break;
    case 2:
      HAL_GPIO_WritePin(OUT_D_21_GPIO_Port, OUT_D_21_Pin, TRUE);
      MODULE_BZK_TX.bl_XP9_7_OUT = TRUE;
      break;
    case 3:
      HAL_GPIO_WritePin(OUT_D_23_GPIO_Port, OUT_D_23_Pin, TRUE);
      MODULE_BZK_TX.bl_XP9_9_OUT = TRUE;
      break;
  }
  driver->ui32_Start_Time = currentTime;
  driver->ui32_Protection_Start_Enabling_Time = (currentTime + 500);
  driver->ui32_Protection_Finish_Enabling_Time = (currentTime + 750);
  driver->ui32_Reset_Enable_Driver_Time = (currentTime + 1000);
}

/******************************************************************************
 * Function Name: DisableDriver
 * Description: Подача сигнала на отключение драйвера
 ******************************************************************************/
void DisableDriver(DRIVER_t* driver, uint32_t currentTime, uint8_t currentDriverIndex)
{
  switch (currentDriverIndex)
  {
    case 0:
      HAL_GPIO_WritePin(OUT_D_18_GPIO_Port, OUT_D_18_Pin, TRUE);
      MODULE_BZK_TX.bl_XP9_4_OUT = TRUE;
      break;
    case 1:
      HAL_GPIO_WritePin(OUT_D_20_GPIO_Port, OUT_D_20_Pin, TRUE);
      MODULE_BZK_TX.bl_XP9_6_OUT = TRUE;
      break;
    case 2:
      HAL_GPIO_WritePin(OUT_D_22_GPIO_Port, OUT_D_22_Pin, TRUE);
      MODULE_BZK_TX.bl_XP9_8_OUT = TRUE;
      break;
    case 3:
      HAL_GPIO_WritePin(OUT_D_24_GPIO_Port, OUT_D_24_Pin, TRUE);
      MODULE_BZK_TX.bl_XP9_10_OUT = TRUE;
      break;
  }
}

/******************************************************************************
 * Function Name: ResetEnablingDriver
 * Description: Сброс сигнала на включение драйвера
 ******************************************************************************/
void ResetEnablingDriver(DRIVER_t* driver, uint8_t currentDriverIndex)
{
  switch (currentDriverIndex)
  {
    case 0:
      HAL_GPIO_WritePin(OUT_D_17_GPIO_Port, OUT_D_17_Pin, FALSE);
      MODULE_BZK_TX.bl_XP9_3_OUT = FALSE;
      break;
    case 1:
      HAL_GPIO_WritePin(OUT_D_19_GPIO_Port, OUT_D_19_Pin, FALSE);
      MODULE_BZK_TX.bl_XP9_5_OUT = FALSE;
      break;
    case 2:
      HAL_GPIO_WritePin(OUT_D_21_GPIO_Port, OUT_D_21_Pin, FALSE);
      MODULE_BZK_TX.bl_XP9_7_OUT = FALSE;
      break;
    case 3:
      HAL_GPIO_WritePin(OUT_D_23_GPIO_Port, OUT_D_23_Pin, FALSE);
      MODULE_BZK_TX.bl_XP9_9_OUT = FALSE;
      break;
  }
  driver->ui32_Protection_Start_Enabling_Time = 0;
  driver->ui32_Protection_Finish_Enabling_Time = 0;
}

/******************************************************************************
 * Function Name: ResetDisablingDriver
 * Description: Сброс сигнала на отключение драйвера
 ******************************************************************************/
void ResetDisablingDriver(DRIVER_t* driver, uint8_t currentDriverIndex)
{
  switch (currentDriverIndex)
  {
    case 0:
      HAL_GPIO_WritePin(OUT_D_18_GPIO_Port, OUT_D_18_Pin, FALSE);
      MODULE_BZK_TX.bl_XP9_4_OUT = FALSE;
      break;
    case 1:
      HAL_GPIO_WritePin(OUT_D_20_GPIO_Port, OUT_D_20_Pin, FALSE);
      MODULE_BZK_TX.bl_XP9_6_OUT = FALSE;
      break;
    case 2:
      HAL_GPIO_WritePin(OUT_D_22_GPIO_Port, OUT_D_22_Pin, FALSE);
      MODULE_BZK_TX.bl_XP9_8_OUT = FALSE;
      break;
    case 3:
      HAL_GPIO_WritePin(OUT_D_24_GPIO_Port, OUT_D_24_Pin, FALSE);
      MODULE_BZK_TX.bl_XP9_10_OUT = FALSE;
      break;
  }
  driver->ui32_Protection_Start_Disabling_Time = 0;
  driver->ui32_Protection_Finish_Disabling_Time = 0;
}

/******************************************************************************
 * Function Name: AnyDriverInProcess
 * Description: Проверка наличия хотя бы одного драйвера в состоянии переключения
 ******************************************************************************/
bool AnyDriverInProcess()
{
  for (uint8_t i = 0; i < 4; i++)
  {
    if ((Drivers[i].bl_In_Process_Enabling == TRUE) || (Drivers[i].bl_In_Process_Disabling == TRUE))
    {
      return TRUE;
    }
  }
  return FALSE;
}

/******************************************************************************
 * Function Name: AnyDriverEnabled
 * Description: Проверка наличия хотя бы одного включенного драйвера
 ******************************************************************************/
bool AnyDriverEnabled()
{
  for (uint8_t i = 0; i < 4; i++)
  {
    if (Drivers[i].bl_State == TRUE)
    {
      return TRUE;
    }
  }
  return FALSE;
}

/******************************************************************************
 * Function Name: RecordDriverCommands
 * Description: Запись / обновление комманд управления драйверами
 ******************************************************************************/
void RecordDriverCommands()
{
  for (uint8_t i = 0; i < 4; i++)
  {
    bl_Driver_Command[i] = bl_Output_Value[i];
  }
}

/******************************************************************************
 * Function Name: ProcessDriverEnabling
 * Description: Процесс включения драйвера с включением защиты
 ******************************************************************************/
void ProcessDriverEnabling(uint32_t currentTime, uint8_t currentDriverIndex)
{
  if (
     (bl_Driver_Command[currentDriverIndex] != 0x00) &&
     (bl_In_Loop_Attempts_Enabling == TRUE) &&
     (Drivers[currentDriverIndex].ui8_Enable_Attempts < MAX_ENABLE_ATTEMPTS)
     )
  {
      currentDriverIndex = ui8_current_Driver_In_Loop;
  }

  if (bl_Driver_Command[currentDriverIndex] != 0x00)
  {
      Drivers[currentDriverIndex].ui8_Disable_Attempts = 0;
      bl_In_Loop_Attempts_Disabling = FALSE;
  }

  if (
     (currentTime >= Drivers[currentDriverIndex].ui32_Time_Attempt_Enabling) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Time_Attempt_Disabling) &&
     (!AnyDriverInProcess()) &&
     (bl_Driver_Command[currentDriverIndex] != 0x00) &&
     (Drivers[currentDriverIndex].bl_Protection_Was_Enabled != 1) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling == FALSE) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling == FALSE) &&
     (Drivers[currentDriverIndex].ui8_Enable_Attempts < MAX_ENABLE_ATTEMPTS)
     )
  {
      EnableDriver(&Drivers[currentDriverIndex], currentTime, currentDriverIndex);
      Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling = TRUE;
      Drivers[currentDriverIndex].bl_In_Process_Enabling = TRUE;
      Drivers[currentDriverIndex].ui8_Disable_Attempts = FALSE;
      bl_step_1_enabling = TRUE;
      Drivers[currentDriverIndex].ui32_Time_Attempt_Enabling = (currentTime + 1500);
  }

  if (
     (bl_step_1_enabling == TRUE) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Protection_Start_Enabling_Time) &&
     (Drivers[currentDriverIndex].bl_Protection_Was_Enabled != 1) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling == TRUE) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling == FALSE) &&
     (Drivers[currentDriverIndex].ui8_Enable_Attempts < MAX_ENABLE_ATTEMPTS)
     )
  {
      EnableProtection();
      Drivers[currentDriverIndex].bl_Protection_Was_Enabled = 1;
      bl_step_2_enabling = TRUE;
  }

  if (
     (bl_step_2_enabling == TRUE) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Protection_Finish_Enabling_Time) &&
     (Drivers[currentDriverIndex].bl_Protection_Was_Disabled != 1) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling == TRUE) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling == FALSE) &&
     (Drivers[currentDriverIndex].ui8_Enable_Attempts < MAX_ENABLE_ATTEMPTS)
     )
  {
      DisableProtection();
      Drivers[currentDriverIndex].bl_Protection_Was_Disabled = 1;
      bl_step_3_enabling = TRUE;
  }

  if (
     (bl_step_3_enabling == TRUE) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Reset_Enable_Driver_Time) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling == TRUE) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling == FALSE) &&
     (Drivers[currentDriverIndex].ui8_Enable_Attempts < MAX_ENABLE_ATTEMPTS) &&
     (Drivers[currentDriverIndex].bl_State == TRUE)
     )
  {
      ResetEnablingDriver(&Drivers[currentDriverIndex], currentDriverIndex);
      Drivers[currentDriverIndex].ui32_Reset_Enable_Driver_Time = 0;
      Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling = FALSE;
      Drivers[currentDriverIndex].bl_In_Process_Enabling = FALSE;
      bl_step_1_enabling = FALSE;
      bl_step_2_enabling = FALSE;
      bl_step_3_enabling = FALSE;
      bl_In_Loop_Attempts_Enabling = FALSE;
  }

  if (
     (bl_step_3_enabling == TRUE) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Reset_Enable_Driver_Time) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling == TRUE) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling == FALSE) &&
     (Drivers[currentDriverIndex].ui8_Enable_Attempts < MAX_ENABLE_ATTEMPTS) &&
     (Drivers[currentDriverIndex].bl_State == FALSE)
     )
  {
    ResetEnablingDriver(&Drivers[currentDriverIndex], currentDriverIndex);
    Drivers[currentDriverIndex].ui32_Reset_Enable_Driver_Time = 0;
    Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling = FALSE;
    Drivers[currentDriverIndex].bl_In_Process_Enabling = FALSE;
    bl_step_1_enabling = FALSE;
    bl_step_2_enabling = FALSE;
    bl_step_3_enabling = FALSE;

    Drivers[currentDriverIndex].bl_Not_Opened_At_First_Attempt = TRUE;
    Drivers[currentDriverIndex].bl_Protection_Was_Enabled = 0;
    Drivers[currentDriverIndex].bl_Protection_Was_Disabled = 0;
    Drivers[currentDriverIndex].ui8_Enable_Attempts++;
    ui8_current_Driver_In_Loop = currentDriverIndex;
    if (Drivers[currentDriverIndex].ui8_Enable_Attempts < MAX_ENABLE_ATTEMPTS)
    {
        bl_In_Loop_Attempts_Enabling = TRUE;
    } else {
        bl_In_Loop_Attempts_Enabling = FALSE;
    }
  }
}

/******************************************************************************
 * Function Name: ProcessDriverDisabling
 * Description: Процесс отключения драйвера с включением защиты
 ******************************************************************************/
void ProcessDriverDisabling(uint32_t currentTime, uint8_t currentDriverIndex)
{
  if (
     (bl_Driver_Command[currentDriverIndex] == 0x00) &&
     (bl_In_Loop_Attempts_Disabling == TRUE) &&
     (Drivers[currentDriverIndex].ui8_Disable_Attempts < MAX_DISABLE_ATTEMPTS)
     )
  {
      currentDriverIndex = ui8_current_Driver_In_Loop;
  }

  if (bl_Driver_Command[currentDriverIndex] == 0x00)
  {
      bl_In_Loop_Attempts_Enabling = FALSE;
  }

  if (
     (currentTime >= Drivers[currentDriverIndex].ui32_Time_Attempt_Enabling) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Time_Attempt_Disabling) &&
     (bl_Driver_Command[currentDriverIndex] == 0x00) &&
     (Drivers[currentDriverIndex].bl_Not_Opened_At_First_Attempt == TRUE)
     )
  {
      Drivers[currentDriverIndex].bl_Not_Opened_At_First_Attempt = FALSE;
      Drivers[currentDriverIndex].ui8_Enable_Attempts = 0;
      Drivers[currentDriverIndex].bl_Protection_Was_Enabled = 1;
      Drivers[currentDriverIndex].bl_Protection_Was_Disabled = 1;
  }

  if (
     (currentTime >= Drivers[currentDriverIndex].ui32_Time_Attempt_Enabling) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Time_Attempt_Disabling) &&
     (!AnyDriverInProcess() && bl_Driver_Command[currentDriverIndex] == 0x00) &&
     (Drivers[currentDriverIndex].bl_Protection_Was_Enabled == 1) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling == FALSE) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling == FALSE) &&
     (Drivers[currentDriverIndex].ui8_Disable_Attempts < MAX_DISABLE_ATTEMPTS) &&
     (Drivers[currentDriverIndex].ui32_Reset_Disable_Driver_Time == 0)
     )
  {
      Drivers[currentDriverIndex].ui32_Reset_Disable_Driver_Time = (currentTime + 1000);
      Drivers[currentDriverIndex].ui32_Protection_Start_Disabling_Time = (currentTime + 250);
      Drivers[currentDriverIndex].ui32_Protection_Finish_Disabling_Time = (currentTime + 750);
      DisableDriver(&Drivers[currentDriverIndex], currentTime, currentDriverIndex);
      Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling = TRUE;
      bl_step_1_disabling = TRUE;
      Drivers[currentDriverIndex].bl_In_Process_Disabling = TRUE;
      Drivers[currentDriverIndex].ui32_Time_Attempt_Disabling = (currentTime + 1500);
  }

  if (
     (bl_step_1_disabling == TRUE) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Protection_Start_Disabling_Time) &&
     (Drivers[currentDriverIndex].bl_Protection_Was_Enabled == 1) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling == FALSE) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling == TRUE) &&
     (Drivers[currentDriverIndex].ui8_Disable_Attempts < MAX_DISABLE_ATTEMPTS)
     )
  {
      EnableProtection();
      Drivers[currentDriverIndex].bl_Protection_Was_Enabled = 0;
      bl_step_2_disabling = TRUE;
  }

  if (
     (bl_step_2_disabling == TRUE) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Protection_Finish_Disabling_Time) &&
     (Drivers[currentDriverIndex].bl_Protection_Was_Disabled == 1) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling == FALSE) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling == TRUE) &&
     (Drivers[currentDriverIndex].ui8_Disable_Attempts < MAX_DISABLE_ATTEMPTS)
     )
  {
      DisableProtection();
      Drivers[currentDriverIndex].bl_Protection_Was_Disabled = 0;
      bl_step_3_disabling = TRUE;
  }

  if (
     (bl_step_3_disabling == TRUE) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Reset_Disable_Driver_Time) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling == FALSE) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling == TRUE) &&
     (Drivers[currentDriverIndex].bl_State == FALSE) &&
     (Drivers[currentDriverIndex].ui8_Disable_Attempts < MAX_DISABLE_ATTEMPTS)
     )
  {
      ResetDisablingDriver(&Drivers[currentDriverIndex], currentDriverIndex);
      Drivers[currentDriverIndex].ui32_Reset_Disable_Driver_Time = 0;
      Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling = FALSE;
      bl_step_1_disabling = FALSE;
      bl_step_2_disabling = FALSE;
      bl_step_3_disabling = FALSE;
      bl_In_Loop_Attempts_Disabling = FALSE;
      Drivers[currentDriverIndex].bl_In_Process_Disabling = FALSE;
  }

  if (
     (bl_step_3_disabling == 1) &&
     (currentTime >= Drivers[currentDriverIndex].ui32_Reset_Disable_Driver_Time) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Enabling == FALSE) &&
     (Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling == TRUE) &&
     (Drivers[currentDriverIndex].bl_State == TRUE) &&
     (Drivers[currentDriverIndex].ui8_Disable_Attempts < MAX_DISABLE_ATTEMPTS)
     )
  {
    ResetDisablingDriver(&Drivers[currentDriverIndex], currentDriverIndex);
    Drivers[currentDriverIndex].ui32_Reset_Disable_Driver_Time = 0;
    Drivers[currentDriverIndex].bl_Waiting_Process_Driver_Disabling = FALSE;
    bl_step_1_disabling = FALSE;
    bl_step_2_disabling = FALSE;
    bl_step_3_disabling = FALSE;
    Drivers[currentDriverIndex].bl_In_Process_Disabling = FALSE;

    Drivers[currentDriverIndex].bl_Not_Opened_At_First_Attempt = TRUE;
    Drivers[currentDriverIndex].bl_Protection_Was_Enabled = 1;
    Drivers[currentDriverIndex].bl_Protection_Was_Disabled = 1;
    Drivers[currentDriverIndex].ui8_Disable_Attempts++;
    ui8_current_Driver_In_Loop = currentDriverIndex;
    if (Drivers[currentDriverIndex].ui8_Disable_Attempts < MAX_DISABLE_ATTEMPTS) {
        bl_In_Loop_Attempts_Disabling = TRUE;
    } else {
        bl_In_Loop_Attempts_Disabling = FALSE;
    }
  }
}

/******************************************************************************
 * Function Name: ManageDrivers
 * Description: Управление процессами включения и отключения драйверов
 ******************************************************************************/
void ManageDrivers(uint32_t currentTime)
{
  RecordDriverCommands();
  for (uint8_t i = 0; i < 4; i++)
  {
    ProcessDriverEnabling(currentTime, i);
    ProcessDriverDisabling(currentTime, i);
  }
}

/******************************************************************************
 * Function Name: ProcessDrivers
 * Description: Главная функция менеджмента драйверами и желтым светодиодом
 ******************************************************************************/
void ProcessDrivers(uint32_t currentTime)
{
  if (AnyDriverEnabled())
  {
    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
  } else {
    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
  }
  if (bl_First_Disabling_End == TRUE)
  {
    UpdateDriverStates();
    ManageDrivers(currentTime);
  }
}

/******************************************************************************
 * Function Name: HandleFirstDisabling
 * Description: Функция обработки первого отключения драйверов после подачи питания
 ******************************************************************************/
void HandleFirstDisabling(uint8_t* Disabling_After_Power_Supply, uint32_t* Start_Disabling_After_Power_Supply,
    GPIO_TypeDef* Port, uint16_t Pin, uint32_t* Disabling_After_Power_Supply_Time,
    uint32_t* After_Power_Supply_Protection_Enabling_Time,
    uint32_t* After_Power_Supply_Protection_Disabling_Time,
    uint32_t currentTime, bool_t* bl_XP9_OUT)
{
  if ((*Disabling_After_Power_Supply == 0) && (currentTime >= *Start_Disabling_After_Power_Supply))
  {
       HAL_GPIO_WritePin(Port, Pin, 1);
       *bl_XP9_OUT = 1;

       *Disabling_After_Power_Supply_Time = (currentTime + 1000);
       *After_Power_Supply_Protection_Enabling_Time = (currentTime + 250);
       *After_Power_Supply_Protection_Disabling_Time = (currentTime + 750);
       *Disabling_After_Power_Supply = 1;
  }

  if (
     (bl_step_1_first_disabling == FALSE) &&
     (*Disabling_After_Power_Supply == 1) &&
     (currentTime >= *After_Power_Supply_Protection_Enabling_Time)
     )
  {
      bl_step_1_first_disabling = TRUE;
      bl_step_2_first_disabling = FALSE;
      HAL_GPIO_WritePin(OUT_D_25_GPIO_Port, OUT_D_25_Pin, TRUE);
      MODULE_BZK_TX.bl_XP10_2_OUT = TRUE;
  }

  if (
     (bl_step_2_first_disabling == FALSE) &&
     (*Disabling_After_Power_Supply == 1) &&
     (currentTime >= *After_Power_Supply_Protection_Disabling_Time)
     )
  {
      bl_step_2_first_disabling = TRUE;
      bl_step_3_first_disabling = FALSE;
      HAL_GPIO_WritePin(OUT_D_25_GPIO_Port, OUT_D_25_Pin, FALSE);
      MODULE_BZK_TX.bl_XP10_2_OUT = FALSE;
  }

  if (
     (bl_step_3_first_disabling == FALSE) &&
     (*Disabling_After_Power_Supply == 1) &&
     (currentTime >= *Disabling_After_Power_Supply_Time)
     )
  {
      bl_step_1_first_disabling = FALSE;
      bl_step_3_first_disabling = TRUE;
      HAL_GPIO_WritePin(Port, Pin, 0);
      *bl_XP9_OUT = 0;

      *Disabling_After_Power_Supply = 2;
      *Disabling_After_Power_Supply_Time = 0;
  }
}


/* USER CODE END 0 */

/**
 * @brief  The application entry point.
 * @retval int
 */
int main(void)
{

  /* USER CODE BEGIN 1 */
  int16_t i16_Index;
  uint16_t ui16_CANIndex;
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_FDCAN1_Init();
  MX_USB_Device_Init();
  MX_IWDG_Init();
  MX_TIM6_Init();
  /* USER CODE BEGIN 2 */
  // Начальная настройка
  Main_Init();
  uint32_t ui32_currentTime = HAL_GetTick();

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  // Флаг окончания начальной настройки
  bl_Init_End = TRUE;

#if (bl_Modbus_Slave_Use_USB != 0)
  ui8_USB_Bootloader_Mode = 1;
#endif

  uint32_t ui32_Start_Disabling_After_Power_Supply_0 = (ui32_currentTime + 500);
  uint32_t ui32_Start_Disabling_After_Power_Supply_1 = (ui32_currentTime + 2000);
  uint32_t ui32_Start_Disabling_After_Power_Supply_2 = (ui32_currentTime + 3500);
  uint32_t ui32_Start_Disabling_After_Power_Supply_3 = (ui32_currentTime + 5000);

  // Фоновый цикл
  while (1)
  {
    ui32_currentTime = HAL_GetTick();

#ifdef HAL_IWDG_MODULE_ENABLED
    // Сброс сторожевого таймера
    HAL_IWDG_Refresh(&hiwdg);
#endif
    // Предварительное отключение драйверов после запуска
    if (bl_First_Disabling_End == FALSE)
    {
      HandleFirstDisabling(&ui8_Disabling_After_Power_Supply_0, &ui32_Start_Disabling_After_Power_Supply_0,
          OUT_D_18_GPIO_Port, OUT_D_18_Pin,
          &ui32_Disabling_After_Power_Supply_Time_0,
          &ui32_After_Power_Supply_Protection_Enabling_Time_0,
          &ui32_After_Power_Supply_Protection_Disabling_Time_0,
          ui32_currentTime, &MODULE_BZK_TX.bl_XP9_4_OUT);

      HandleFirstDisabling(&ui8_Disabling_After_Power_Supply_1, &ui32_Start_Disabling_After_Power_Supply_1,
          OUT_D_20_GPIO_Port, OUT_D_20_Pin,
          &ui32_Disabling_After_Power_Supply_Time_1,
          &ui32_After_Power_Supply_Protection_Enabling_Time_1,
          &ui32_After_Power_Supply_Protection_Disabling_Time_1,
          ui32_currentTime, &MODULE_BZK_TX.bl_XP9_6_OUT);

      HandleFirstDisabling(&ui8_Disabling_After_Power_Supply_2, &ui32_Start_Disabling_After_Power_Supply_2,
          OUT_D_22_GPIO_Port, OUT_D_22_Pin,
          &ui32_Disabling_After_Power_Supply_Time_2,
          &ui32_After_Power_Supply_Protection_Enabling_Time_2,
          &ui32_After_Power_Supply_Protection_Disabling_Time_2,
          ui32_currentTime, &MODULE_BZK_TX.bl_XP9_8_OUT);

      HandleFirstDisabling(&ui8_Disabling_After_Power_Supply_3, &ui32_Start_Disabling_After_Power_Supply_3,
          OUT_D_24_GPIO_Port, OUT_D_24_Pin,
          &ui32_Disabling_After_Power_Supply_Time_3,
          &ui32_After_Power_Supply_Protection_Enabling_Time_3,
          &ui32_After_Power_Supply_Protection_Disabling_Time_3,
          ui32_currentTime, &MODULE_BZK_TX.bl_XP9_10_OUT);

      if (ui8_Disabling_After_Power_Supply_3 == 2) {
          bl_First_Disabling_End = TRUE;
      }
    }

    // Сигнал для начального включения светодиодов
    bl_TP_Init_End = TP(bl_Init_End, 1000UL, &TP_Init_End_DATA);

    // Настраиваем таймеры
    bl_TIMER_LED = TIMER(200UL, &TIMER_LED_Data);
    bl_TIMER_USB = TIMER(1000UL, &TIMER_USB_Data);
    bl_TIMER_CAN = TIMER(100UL, &TIMER_CAN_Data);


    // Обработка принятой информации по сети CAN
    for (ui16_CANIndex = 0U; ui16_CANIndex <= 0U/*1U*/; ui16_CANIndex++)
    {
      while (CANRxBuffer[ui16_CANIndex].ui16_Buffer_End != CANRxBuffer[ui16_CANIndex].ui16_Buffer_Start)
      {

        MODULE_BZK_RX_MANAGER(&CANRxBuffer[ui16_CANIndex].Message[CANRxBuffer[ui16_CANIndex].ui16_Buffer_Start], &CANTxBuffer[ui16_CANIndex]);


        bl_Output_Value[0U] = MODULE_BZK_RX.bl_QF1;
        bl_Output_Value[1U] = MODULE_BZK_RX.bl_QF2;
        bl_Output_Value[2U] = MODULE_BZK_RX.bl_QF3;
        bl_Output_Value[3U] = MODULE_BZK_RX.bl_QF4;
        bl_Output_Value[4U] = MODULE_BZK_RX.bl_KM7;
        bl_Output_Value[5U] = MODULE_BZK_RX.bl_KM8;
        bl_Output_Value[6U] = MODULE_BZK_RX.bl_KM2;
        bl_Output_Value[7U] = MODULE_BZK_RX.bl_KM3;
        bl_Output_Value[8U] = MODULE_BZK_RX.bl_KM4;
        bl_Output_Value[9U] = MODULE_BZK_RX.bl_KM5;
        bl_Output_Value[10U] = MODULE_BZK_RX.bl_KM6;
        bl_Output_Value[11U] = MODULE_BZK_RX.bl_KM1;
        bl_Output_Value[12U] = MODULE_BZK_RX.bl_KL1;
        bl_Output_Value[13U] = MODULE_BZK_RX.bl_KL2;
        bl_Output_Value[14U] = MODULE_BZK_RX.bl_KL3;
        bl_Output_Value[15U] = MODULE_BZK_RX.bl_KL4;


        CANRxBuffer[ui16_CANIndex].ui16_Buffer_Start = (CANRxBuffer[ui16_CANIndex].ui16_Buffer_Start + 1);
        if (CANRxBuffer[ui16_CANIndex].ui16_Buffer_Start >= PROJECT_CAN_BUFFER_RX_SIZE)
        {
          CANRxBuffer[ui16_CANIndex].ui16_Buffer_Start = 0;
        }
      }
    }

    // Достигнут аварийный уровень ошибок в сети FDCAN
    if ((FDCAN_PSR_BO & READ_REG(hfdcan1.Instance->PSR)) != 0)
    {
      bl_BusOff_LED = TRUE;

      // CAN_FD_BUS_OFF_Reset
      if (bl_TIMER_USB)
      {
        CLEAR_BIT(hfdcan1.Instance->CCCR, FDCAN_CCCR_INIT);
      }
    }
    else
    {
      bl_BusOff_LED = FALSE;

      // Достигнут предупредительный уровень ошибок в сети FDCAN
      if (((FDCAN_PSR_EW | FDCAN_PSR_EP) & READ_REG(hfdcan1.Instance->PSR)) != 0)
      {
        bl_Warning_LED = TRUE;
      }
      else
      {
        bl_Warning_LED = FALSE;
      }
    }


    if (ui32_currentTime - ui32_lastMsgTime > ui32_timeout)
    {
      bl_Operational = false;
    }
    else
    {
      bl_Operational = true;
    }

    // Фоновая работа с протоколом Modbus
    Modbus_Poll_USB();


#if (bl_Modbus_Slave_Use_USB != 0)
    // Проверка наличия связи через USB
    if (bl_TIMER_USB)
    {
      bl_USB_Ready = (ui8_Modbus_Slave_Packet_Count_USB != ui8_Modbus_Slave_Packet_Count_USB_OLD);
      ui8_Modbus_Slave_Packet_Count_USB_OLD = ui8_Modbus_Slave_Packet_Count_USB;
    }

    // Управление дискретными выходами по информации от USB вне операционального режима работы CAN
    if ((bl_Operational == false) & bl_USB_Ready)
    {
      bl_Output_Value[0U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 0);   // QF1 Вкл.
      bl_Output_Value[1U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 1);   // QF2 Вкл.
      bl_Output_Value[2U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 2);   // QF3 Вкл.
      bl_Output_Value[3U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 3);   // QF4 Вкл.
      bl_Output_Value[4U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 4);   // КМ7 Вкл.
      bl_Output_Value[5U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 5);   // КМ8 Вкл.
      bl_Output_Value[6U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 6);   // КМ2 Вкл.
      bl_Output_Value[7U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 7);   // КМ3 Вкл.
      bl_Output_Value[8U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 8);   // КМ4 Вкл.
      bl_Output_Value[9U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 9);   // КМ5 Вкл.
      bl_Output_Value[10U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 10); // КМ6 Вкл.
      bl_Output_Value[11U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 11); // КМ1 Вкл.
      bl_Output_Value[12U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 12); // КL1 Вкл. (0 сек.)
      bl_Output_Value[13U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 13); // КL2 Вкл. (5 сек.)
      bl_Output_Value[14U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 14); // КL3 Вкл. (0 сек.)
      bl_Output_Value[15U] = EPRO_Test_Bit(ui16_Modbus_Holding_Registers_Data_USB[0U], 15); // КL4 Вкл. (5 сек.)

    }

    // При возврате к управлению по CAN
    if (F_TRIG(((bl_Operational == false) & bl_USB_Ready), &bl_USB_Mode_OLD))
    {
      // Очищаем структуру управления
      for (i16_Index = 0; i16_Index < Modbus_Slave_Holding_Registers_Count_USB; i16_Index++)
      {
        ui16_Modbus_Holding_Registers_Data_USB[i16_Index] = 0x00;
      }
      for (i16_Index = 0; i16_Index < 64; i16_Index++)
      {
        bl_Output_Value[i16_Index] = FALSE;
      }
    }
#endif

    // Задаём состояние дискретных выходов
    HAL_GPIO_WritePin(OUT_D_1_GPIO_Port, OUT_D_1_Pin, bl_Output_Value[11U]);   // KM1
    HAL_GPIO_WritePin(OUT_D_2_GPIO_Port, OUT_D_2_Pin, bl_Output_Value[6U]);    // KM2
    HAL_GPIO_WritePin(OUT_D_3_GPIO_Port, OUT_D_3_Pin, bl_Output_Value[7U]);    // KM3
    HAL_GPIO_WritePin(OUT_D_4_GPIO_Port, OUT_D_4_Pin, bl_Output_Value[8U]);    // KM4
    HAL_GPIO_WritePin(OUT_D_5_GPIO_Port, OUT_D_5_Pin, bl_Output_Value[9U]);    // KM5
    HAL_GPIO_WritePin(OUT_D_6_GPIO_Port, OUT_D_6_Pin, bl_Output_Value[10U]);   // KM6
    HAL_GPIO_WritePin(OUT_D_7_GPIO_Port, OUT_D_7_Pin, bl_Output_Value[4U]);    // KM7
    HAL_GPIO_WritePin(OUT_D_8_GPIO_Port, OUT_D_8_Pin, bl_Output_Value[5U]);    // KM8
    HAL_GPIO_WritePin(OUT_D_9_GPIO_Port, OUT_D_9_Pin, bl_Output_Value[12U]);   // KL1
    HAL_GPIO_WritePin(OUT_D_10_GPIO_Port, OUT_D_10_Pin, bl_Output_Value[13U]); // KL2
    HAL_GPIO_WritePin(OUT_D_11_GPIO_Port, OUT_D_11_Pin, bl_Output_Value[14U]); // KL3
    HAL_GPIO_WritePin(OUT_D_12_GPIO_Port, OUT_D_12_Pin, bl_Output_Value[15U]); // KL4

    // Считываем состояние дискретных входов
    ui32_Input_Value =
        (
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_9_GPIO_Port, IN_D_9_Pin)), 0) |    // Инд. АВДУ1
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_10_GPIO_Port, IN_D_10_Pin)), 1) |  // Инд. АВДУ2
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_7_GPIO_Port, IN_D_7_Pin)), 2) |    // Инд. КМ7
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_8_GPIO_Port, IN_D_8_Pin)), 3) |    // Инд. КМ8
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_21_GPIO_Port, IN_D_21_Pin)), 4) |  // АВ ППН1
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_22_GPIO_Port, IN_D_22_Pin)), 5) |  // АВ ППН2
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_23_GPIO_Port, IN_D_23_Pin)), 6) |  // АВ ППН3
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_17_GPIO_Port, IN_D_17_Pin)), 7) |  // Инд. QF1
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_18_GPIO_Port, IN_D_18_Pin)), 8) |  // Инд. QF2
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_19_GPIO_Port, IN_D_19_Pin)), 9) | // Инд. QF3
            SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_20_GPIO_Port, IN_D_20_Pin)), 10)   // Инд. QF4
        );


    ProcessDrivers(ui32_currentTime);

    MODULE_BZK_TX.bl_XP2_9_IN = EPRO_Test_Bit(ui32_Input_Value, 0);     // АВДУ1
    MODULE_BZK_TX.bl_XP2_10_IN = EPRO_Test_Bit(ui32_Input_Value, 1);    // АВДУ2
    MODULE_BZK_TX.bl_XP2_7_IN = EPRO_Test_Bit(ui32_Input_Value, 2);     // КМ7
    MODULE_BZK_TX.bl_XP2_8_IN = EPRO_Test_Bit(ui32_Input_Value, 3);     // КМ8
    MODULE_BZK_TX.bl_XP11_1_IN = EPRO_Test_Bit(ui32_Input_Value, 4);    // ППН1
    MODULE_BZK_TX.bl_XP11_2_IN = EPRO_Test_Bit(ui32_Input_Value, 5);    // ППН2
    MODULE_BZK_TX.bl_XP11_3_IN = EPRO_Test_Bit(ui32_Input_Value, 6);    // ППН3
    MODULE_BZK_TX.bl_XP9_11_IN = EPRO_Test_Bit(ui32_Input_Value, 7);    // QF1
    MODULE_BZK_TX.bl_XP9_12_IN = EPRO_Test_Bit(ui32_Input_Value, 8);    // QF2
    MODULE_BZK_TX.bl_XP9_13_IN = EPRO_Test_Bit(ui32_Input_Value, 9);    // QF3
    MODULE_BZK_TX.bl_XP9_14_IN = EPRO_Test_Bit(ui32_Input_Value, 10);   // QF4
    MODULE_BZK_TX.bl_XP4_7_OUT = bl_Output_Value[4U];                   // KM7
    MODULE_BZK_TX.bl_XP4_8_OUT = bl_Output_Value[5U];                   // KM8
    MODULE_BZK_TX.bl_XP4_2_OUT = bl_Output_Value[6U];                   // KM2
    MODULE_BZK_TX.bl_XP4_3_OUT = bl_Output_Value[7U];                   // KM3
    MODULE_BZK_TX.bl_XP4_4_OUT = bl_Output_Value[8U];                   // KM4
    MODULE_BZK_TX.bl_XP4_5_OUT = bl_Output_Value[9U];                   // KM5
    MODULE_BZK_TX.bl_XP4_6_OUT = bl_Output_Value[10U];                  // KM6
    MODULE_BZK_TX.bl_XP4_1_OUT = bl_Output_Value[11U];                  // KM1
    MODULE_BZK_TX.bl_XP4_9_OUT = bl_Output_Value[12U];                  // KL1
    MODULE_BZK_TX.bl_XP4_10_OUT = bl_Output_Value[13U];                 // KL2
    MODULE_BZK_TX.bl_XP4_11_OUT = bl_Output_Value[14U];                 // KL3
    MODULE_BZK_TX.bl_XP4_12_OUT = bl_Output_Value[15U];                 // KL4

    MODULE_BZK_TX_MANAGER(bl_TIMER_CAN, &CANTxBuffer[0U]);




    if (bl_TIMER_LED)
    {
      switch (ui8_Index_LED)
      {
        case 0:
          if (bl_Operational || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
          }
          if (bl_Warning_LED || bl_BusOff_LED || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
          }
          break;
        case 1:
          if (bl_PreoperationalMode_LED || bl_Operational || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
          }
          if (bl_BusOff_LED || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
          }
          break;
        case 2:
          if (bl_Operational || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
          }
          if (bl_BusOff_LED || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
          }
          break;
        case 3:
          if (bl_PreoperationalMode_LED || bl_Operational || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
          }
          if (bl_BusOff_LED || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
          }
          break;
        case 4:
          if (bl_Operational || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
          }
          if (bl_BusOff_LED || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
          }
          break;
        case 5:
          if (bl_PreoperationalMode_LED || bl_Operational || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
          }
          if (bl_BusOff_LED || bl_TP_Init_End)
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
          }
          else
          {
            HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
          }
          break;
        default:
          HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
          HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
          break;
      }

      ui8_Index_LED++;
      if (ui8_Index_LED > 5)
      {
        ui8_Index_LED = 0;
      }
    }


    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
    // Отправка данных по сети CAN
    for (ui16_CANIndex = 0U; ui16_CANIndex <= 0U/*1U*/; ui16_CANIndex++)
    {
      // Отправка данных по сети CAN
      if ((CANTxBuffer[ui16_CANIndex].ui16_Buffer_End != CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start) && (!bl_CAN_Transmit_Run[ui16_CANIndex]))
      {
        bl_CAN_Transmit_Run[ui16_CANIndex] = TRUE;

        FDCAN_TX_Header[ui16_CANIndex].Identifier = CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].ui32_ID;
        if (CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].bl_IDE)
        {
          FDCAN_TX_Header[ui16_CANIndex].IdType = FDCAN_EXTENDED_ID;
        }
        else
        {
          FDCAN_TX_Header[ui16_CANIndex].IdType = FDCAN_STANDARD_ID;
        }
        if (CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].bl_RTR)
        {
          FDCAN_TX_Header[ui16_CANIndex].TxFrameType = FDCAN_REMOTE_FRAME;
        }
        else
        {
          FDCAN_TX_Header[ui16_CANIndex].TxFrameType = FDCAN_DATA_FRAME;
        }
        switch (CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].ui8_DLC)
        {
          case 0U:
            FDCAN_TX_Header[ui16_CANIndex].DataLength = FDCAN_DLC_BYTES_0;
            break;
          case 1U:
            FDCAN_TX_Header[ui16_CANIndex].DataLength = FDCAN_DLC_BYTES_1;
            break;
          case 2U:
            FDCAN_TX_Header[ui16_CANIndex].DataLength = FDCAN_DLC_BYTES_2;
            break;
          case 3U:
            FDCAN_TX_Header[ui16_CANIndex].DataLength = FDCAN_DLC_BYTES_3;
            break;
          case 4U:
            FDCAN_TX_Header[ui16_CANIndex].DataLength = FDCAN_DLC_BYTES_4;
            break;
          case 5U:
            FDCAN_TX_Header[ui16_CANIndex].DataLength = FDCAN_DLC_BYTES_5;
            break;
          case 6U:
            FDCAN_TX_Header[ui16_CANIndex].DataLength = FDCAN_DLC_BYTES_6;
            break;
          case 7U:
            FDCAN_TX_Header[ui16_CANIndex].DataLength = FDCAN_DLC_BYTES_7;
            break;
          default:
            FDCAN_TX_Header[ui16_CANIndex].DataLength = FDCAN_DLC_BYTES_8;
            break;
        }

        FDCAN_TX_Header[ui16_CANIndex].ErrorStateIndicator = FDCAN_ESI_ACTIVE;
        FDCAN_TX_Header[ui16_CANIndex].BitRateSwitch = FDCAN_BRS_OFF;
        FDCAN_TX_Header[ui16_CANIndex].FDFormat = FDCAN_CLASSIC_CAN;
        FDCAN_TX_Header[ui16_CANIndex].TxEventFifoControl = FDCAN_NO_TX_EVENTS;
        FDCAN_TX_Header[ui16_CANIndex].MessageMarker = 0;

        ui8_FDCAN_TX_Data[ui16_CANIndex][0U] = CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].ui8_Data[0U];
        ui8_FDCAN_TX_Data[ui16_CANIndex][1U] = CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].ui8_Data[1U];
        ui8_FDCAN_TX_Data[ui16_CANIndex][2U] = CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].ui8_Data[2U];
        ui8_FDCAN_TX_Data[ui16_CANIndex][3U] = CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].ui8_Data[3U];
        ui8_FDCAN_TX_Data[ui16_CANIndex][4U] = CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].ui8_Data[4U];
        ui8_FDCAN_TX_Data[ui16_CANIndex][5U] = CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].ui8_Data[5U];
        ui8_FDCAN_TX_Data[ui16_CANIndex][6U] = CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].ui8_Data[6U];
        ui8_FDCAN_TX_Data[ui16_CANIndex][7U] = CANTxBuffer[ui16_CANIndex].Message[CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start].ui8_Data[7U];

        CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start = (CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start + 1);
        if (CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start >= PROJECT_CAN_BUFFER_TX_SIZE)
        {
          CANTxBuffer[ui16_CANIndex].ui16_Buffer_Start = 0;
        }

        bl_HAL_CAN_Transmit_IT_Run[ui16_CANIndex] = TRUE;
        switch (ui16_CANIndex)
        {
          case 0U:
            HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &FDCAN_TX_Header[0U], ui8_FDCAN_TX_Data[0U]);
            HAL_FDCAN_ActivateNotification(&hfdcan1, FDCAN_IT_TX_FIFO_EMPTY, FDCAN_TX_BUFFER0);
            break;
        }
      }
    }
  }
  /* USER CODE END 3 */
}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
   */
  HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
   * in the RCC_OscInitTypeDef structure.
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_LSI|RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.LSIState = RCC_LSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = RCC_PLLM_DIV1;
  RCC_OscInitStruct.PLL.PLLN = 36;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV6;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
   */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
      |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
 * @brief FDCAN1 Initialization Function
 * @param None
 * @retval None
 */
static void MX_FDCAN1_Init(void)
{

  /* USER CODE BEGIN FDCAN1_Init 0 */

  /* USER CODE END FDCAN1_Init 0 */

  /* USER CODE BEGIN FDCAN1_Init 1 */

  /* USER CODE END FDCAN1_Init 1 */
  hfdcan1.Instance = FDCAN1;
  hfdcan1.Init.ClockDivider = FDCAN_CLOCK_DIV1;
  hfdcan1.Init.FrameFormat = FDCAN_FRAME_CLASSIC;
  hfdcan1.Init.Mode = FDCAN_MODE_NORMAL;
  hfdcan1.Init.AutoRetransmission = ENABLE;
  hfdcan1.Init.TransmitPause = DISABLE;
  hfdcan1.Init.ProtocolException = DISABLE;
  hfdcan1.Init.NominalPrescaler = 12;
  hfdcan1.Init.NominalSyncJumpWidth = 1;
  hfdcan1.Init.NominalTimeSeg1 = 13;
  hfdcan1.Init.NominalTimeSeg2 = 2;
  hfdcan1.Init.DataPrescaler = 1;
  hfdcan1.Init.DataSyncJumpWidth = 1;
  hfdcan1.Init.DataTimeSeg1 = 13;
  hfdcan1.Init.DataTimeSeg2 = 2;
  hfdcan1.Init.StdFiltersNbr = 0;
  hfdcan1.Init.ExtFiltersNbr = 1;
  hfdcan1.Init.TxFifoQueueMode = FDCAN_TX_FIFO_OPERATION;
  if (HAL_FDCAN_Init(&hfdcan1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN FDCAN1_Init 2 */

  /* USER CODE END FDCAN1_Init 2 */

}

/**
 * @brief IWDG Initialization Function
 * @param None
 * @retval None
 */
static void MX_IWDG_Init(void)
{

  /* USER CODE BEGIN IWDG_Init 0 */

  /* USER CODE END IWDG_Init 0 */

  /* USER CODE BEGIN IWDG_Init 1 */

  /* USER CODE END IWDG_Init 1 */
  hiwdg.Instance = IWDG;
  hiwdg.Init.Prescaler = IWDG_PRESCALER_32;
  hiwdg.Init.Window = 4095;
  hiwdg.Init.Reload = 999;
  if (HAL_IWDG_Init(&hiwdg) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN IWDG_Init 2 */

  /* USER CODE END IWDG_Init 2 */

}

/**
 * @brief TIM6 Initialization Function
 * @param None
 * @retval None
 */
static void MX_TIM6_Init(void)
{

  /* USER CODE BEGIN TIM6_Init 0 */

  /* USER CODE END TIM6_Init 0 */

  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM6_Init 1 */

  /* USER CODE END TIM6_Init 1 */
  htim6.Instance = TIM6;
  htim6.Init.Prescaler = 0;
  htim6.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim6.Init.Period = 65535;
  htim6.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim6) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim6, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM6_Init 2 */

  /* USER CODE END TIM6_Init 2 */

}

/**
 * @brief GPIO Initialization Function
 * @param None
 * @retval None
 */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  /* USER CODE BEGIN MX_GPIO_Init_1 */
  /* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin|LED_RED_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, OUT_D_24_Pin|LED_YELLOW_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, OUT_D_23_Pin|OUT_D_22_Pin|OUT_D_21_Pin|OUT_D_12_Pin
      |OUT_D_11_Pin|OUT_D_10_Pin|OUT_D_9_Pin|OUT_D_13_Pin
      |OUT_D_14_Pin|OUT_D_15_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, OUT_D_20_Pin|OUT_D_19_Pin|OUT_D_18_Pin|OUT_D_17_Pin
      |OUT_D_25_Pin|OUT_D_16_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, OUT_D_8_Pin|OUT_D_7_Pin|OUT_D_6_Pin|OUT_D_5_Pin
      |OUT_D_4_Pin|OUT_D_3_Pin|OUT_D_2_Pin|OUT_D_1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : IN_D_14_Pin IN_D_15_Pin IN_D_16_Pin IN_D_20_Pin
                           IN_D_21_Pin IN_D_23_Pin IN_D_22_Pin IN_D_24_Pin */
  GPIO_InitStruct.Pin = IN_D_14_Pin|IN_D_15_Pin|IN_D_16_Pin|IN_D_20_Pin
      |IN_D_21_Pin|IN_D_23_Pin|IN_D_22_Pin|IN_D_24_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PE5 PE1 */
  GPIO_InitStruct.Pin = GPIO_PIN_5|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : IN_D_19_Pin IN_D_18_Pin IN_D_1_Pin IN_D_2_Pin */
  GPIO_InitStruct.Pin = IN_D_19_Pin|IN_D_18_Pin|IN_D_1_Pin|IN_D_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PC14 PC0 PC1 PC2
                           PC3 PC4 PC6 PC8
                           PC11 PC12 */
  GPIO_InitStruct.Pin = GPIO_PIN_14|GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2
      |GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_6|GPIO_PIN_8
      |GPIO_PIN_11|GPIO_PIN_12;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PF9 PF2 */
  GPIO_InitStruct.Pin = GPIO_PIN_9|GPIO_PIN_2;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pin : IN_D_17_Pin */
  GPIO_InitStruct.Pin = IN_D_17_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(IN_D_17_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : PG10 */
  GPIO_InitStruct.Pin = GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /*Configure GPIO pins : PA0 PA1 PA2 PA3
                           PA4 PA7 PA10 PA11
                           PA12 PA15 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
      |GPIO_PIN_4|GPIO_PIN_7|GPIO_PIN_10|GPIO_PIN_11
      |GPIO_PIN_12|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_GREEN_Pin LED_RED_Pin */
  GPIO_InitStruct.Pin = LED_GREEN_Pin|LED_RED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : OUT_D_24_Pin LED_YELLOW_Pin */
  GPIO_InitStruct.Pin = OUT_D_24_Pin|LED_YELLOW_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : OUT_D_23_Pin OUT_D_22_Pin OUT_D_21_Pin OUT_D_12_Pin
                           OUT_D_11_Pin OUT_D_10_Pin OUT_D_9_Pin OUT_D_13_Pin
                           OUT_D_14_Pin OUT_D_15_Pin */
  GPIO_InitStruct.Pin = OUT_D_23_Pin|OUT_D_22_Pin|OUT_D_21_Pin|OUT_D_12_Pin
      |OUT_D_11_Pin|OUT_D_10_Pin|OUT_D_9_Pin|OUT_D_13_Pin
      |OUT_D_14_Pin|OUT_D_15_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : OUT_D_20_Pin OUT_D_19_Pin OUT_D_18_Pin OUT_D_17_Pin
                           OUT_D_25_Pin OUT_D_16_Pin */
  GPIO_InitStruct.Pin = OUT_D_20_Pin|OUT_D_19_Pin|OUT_D_18_Pin|OUT_D_17_Pin
      |OUT_D_25_Pin|OUT_D_16_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PB10 PB12 */
  GPIO_InitStruct.Pin = GPIO_PIN_10|GPIO_PIN_12;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : OUT_D_8_Pin OUT_D_7_Pin OUT_D_6_Pin OUT_D_5_Pin
                           OUT_D_4_Pin OUT_D_3_Pin OUT_D_2_Pin OUT_D_1_Pin */
  GPIO_InitStruct.Pin = OUT_D_8_Pin|OUT_D_7_Pin|OUT_D_6_Pin|OUT_D_5_Pin
      |OUT_D_4_Pin|OUT_D_3_Pin|OUT_D_2_Pin|OUT_D_1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : IN_D_3_Pin IN_D_4_Pin */
  GPIO_InitStruct.Pin = IN_D_3_Pin|IN_D_4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : PD2 */
  GPIO_InitStruct.Pin = GPIO_PIN_2;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : IN_D_5_Pin IN_D_6_Pin IN_D_7_Pin IN_D_8_Pin
                           IN_D_9_Pin */
  GPIO_InitStruct.Pin = IN_D_5_Pin|IN_D_6_Pin|IN_D_7_Pin|IN_D_8_Pin
      |IN_D_9_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : IN_D_10_Pin IN_D_13_Pin IN_D_12_Pin IN_D_11_Pin */
  GPIO_InitStruct.Pin = IN_D_10_Pin|IN_D_13_Pin|IN_D_12_Pin|IN_D_11_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /* USER CODE BEGIN MX_GPIO_Init_2 */
  /* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  if (!bl_Init_End)
  {
    while (1)
    {
      HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
      HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);

#ifdef HAL_IWDG_MODULE_ENABLED
      // Сброс сторожевого таймера
      HAL_IWDG_Refresh(&hiwdg);
#endif
    }
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
