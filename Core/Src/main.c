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

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "main_config.h"
#include "module_bzk_manager.h"
#include "modbus_library.h"

// Фильтр на получаемые сообщения
#define FDCAN_FILTER_FIRST_ID_Z_0 0x00010200UL
#define FDCAN_FILTER_SECOND_ID_Z_0 0x00006810UL
#define FDCAN_FILTER_FIRST_ID_Z_1 0x00010210UL
#define FDCAN_FILTER_SECOND_ID_Z_1 0x00006811UL

//Максимальное количество попыток на включение или отключение драйвера
#define MAX_ENABLE_ATTEMPTS 3



/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

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
static bool_t bl_Init_End;

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

uint32_t ui32_Input_Value;

static bool_t bl_TP_Init_End;
static TP_t TP_Init_End_DATA;

static bool_t bl_TIMER_LED;
//static uint8_t ui8_Index_LED;
static TIMER_t TIMER_LED_Data;
static TIMER_t TIMER_CAN_Data;
static bool_t bl_TIMER_CAN;

static bool_t bl_Warning_LED, bl_BusOff_LED;


static bool_t Waiting_Process_Driver_Enabling;
static bool_t Waiting_Process_Driver_Disabling;

static uint8_t Disabling_After_Power_Supply;
static uint32_t Disabling_After_Power_Supply_Time;
static uint32_t After_Power_Supply_Protection_Enabling_Time;
static uint32_t After_Power_Supply_Protection_Disabling_Time;

static int test;
static int testtest;


typedef struct
{
  GPIO_TypeDef* GPIO_Port_Enable;
  uint16_t GPIO_Pin_Enable;
  GPIO_TypeDef* GPIO_Port_Disable;
  uint16_t GPIO_Pin_Disable;
  uint32_t Start_Time;
  uint32_t Protection_Start_Time;
  uint32_t Protection_Disable_Time;
  uint32_t Disable_Start_Time;
  uint32_t Reset_Enable_Driver_Time;
  uint8_t Enable_Attempts;
  uint8_t Disable_Attempts;
  uint32_t Time_Attempts;
  bool_t State;
  bool_t Protection_Was_Enabled;
  bool_t Protection_Was_Disabled;
  bool_t In_Process_Enabling;
  bool_t In_Process_Disabling;
}DRIVER_t;


DRIVER_t Drivers[4] = {
    {OUT_D_17_GPIO_Port, OUT_D_17_Pin, OUT_D_18_GPIO_Port, OUT_D_18_Pin, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {OUT_D_19_GPIO_Port, OUT_D_19_Pin, OUT_D_20_GPIO_Port, OUT_D_20_Pin, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {OUT_D_21_GPIO_Port, OUT_D_21_Pin, OUT_D_22_GPIO_Port, OUT_D_22_Pin, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {OUT_D_23_GPIO_Port, OUT_D_23_Pin, OUT_D_24_GPIO_Port, OUT_D_24_Pin, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

bool_t bl_Output_Value[64U];

/******************************************************************************
 *     Function Prototypes
 ******************************************************************************/
void Main_Init(void);

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

void UpdateDriverStates() {
    Drivers[0].State = MODULE_BZK_TX.bl_X5_11_IN; // bl_X5_3_OUT
    Drivers[1].State = MODULE_BZK_TX.bl_X5_12_IN; // bl_X5_5_OUT
    Drivers[2].State = MODULE_BZK_TX.bl_X5_13_IN; // bl_X5_7_OUT
    Drivers[3].State = MODULE_BZK_TX.bl_X5_14_IN; // bl_X5_9_OUT
}

// Функция для включения защиты
void EnableProtection() {
    MODULE_BZK_TX.bl_X4_1_X4_3_OUT = 1;
}

// Функция для отключения защиты
void DisableProtection() {
    MODULE_BZK_TX.bl_X4_1_X4_3_OUT = 0;
}

// Включение драйвера
void EnableDriver(DRIVER_t* driver, uint32_t currentTime, uint8_t currentDriverIndex) {
    switch (currentDriverIndex) {
        case 0:
            MODULE_BZK_TX.bl_X5_3_OUT = 1;
            MODULE_BZK_TX.bl_X5_11_IN = 1;
            break;
        case 1:
            MODULE_BZK_TX.bl_X5_5_OUT = 1;
            MODULE_BZK_TX.bl_X5_12_IN = 1;
            break;
        case 2:
            MODULE_BZK_TX.bl_X5_7_OUT = 1;
            MODULE_BZK_TX.bl_X5_13_IN = 1;
            break;
        case 3:
            MODULE_BZK_TX.bl_X5_9_OUT = 1;
            MODULE_BZK_TX.bl_X5_14_IN = 1;
            break;
    }
    driver->Start_Time = currentTime;
    driver->Protection_Start_Time = currentTime + 250;
    driver->Protection_Disable_Time = currentTime + 750;
    driver->Reset_Enable_Driver_Time = currentTime + 1000;
    driver->In_Process_Enabling = 1;
}

// Отключение драйвера
void DisableDriver(DRIVER_t* driver, uint32_t currentTime, uint8_t currentDriverIndex) {
    switch (currentDriverIndex) {
        case 0:
            MODULE_BZK_TX.bl_X5_4_OUT = 1;
            MODULE_BZK_TX.bl_X5_11_IN = 0;
            break;
        case 1:
            MODULE_BZK_TX.bl_X5_6_OUT = 1;
            MODULE_BZK_TX.bl_X5_12_IN = 0;
            break;
        case 2:
            MODULE_BZK_TX.bl_X5_8_OUT = 1;
            MODULE_BZK_TX.bl_X5_13_IN = 0;
            break;
        case 3:
            MODULE_BZK_TX.bl_X5_10_OUT = 1;
            MODULE_BZK_TX.bl_X5_14_IN = 0;
            break;
    }
    driver->In_Process_Disabling = 1;
}

// Сброс сигнала включения драйвера
void ResetDisablingDriver(DRIVER_t* driver, uint8_t currentDriverIndex) {
    switch (currentDriverIndex) {
        case 0:
            MODULE_BZK_TX.bl_X5_4_OUT = 0;
            break;
        case 1:
            MODULE_BZK_TX.bl_X5_6_OUT = 0;
            break;
        case 2:
            MODULE_BZK_TX.bl_X5_8_OUT = 0;
            break;
        case 3:
            MODULE_BZK_TX.bl_X5_10_OUT = 0;
            break;
    }
    driver->In_Process_Disabling = 0;
}

// Сброс сигнала отключения драйвера
void ResetEnablingDriver(DRIVER_t* driver, uint8_t currentDriverIndex) {
    switch (currentDriverIndex) {
        case 0:
            MODULE_BZK_TX.bl_X5_3_OUT = 0;
            break;
        case 1:
            MODULE_BZK_TX.bl_X5_5_OUT = 0;
            break;
        case 2:
            MODULE_BZK_TX.bl_X5_7_OUT = 0;
            break;
        case 3:
            MODULE_BZK_TX.bl_X5_9_OUT = 0;
            break;
    }
    driver->In_Process_Enabling = 0;
}

// Проверка наличия хотя бы одного драйвера в состоянии переключения
bool AnyDriverInProcess() {
    for (int i = 0; i < 4; i++) {
        if (Drivers[i].In_Process_Enabling == 1 || Drivers[i].In_Process_Disabling == 1) {
            return true;
        }
    }
    return false;
}


// Проверка наличия хотя бы одного включенного драйвера
bool AnyDriverEnabled() {
    for (int i = 0; i < 4; i++) {
        if (Drivers[i].State == 1) {
          return true;
        }
    }
    return false;
}


// Обработка включения драйверов
void ProcessDriverEnabling(uint32_t currentTime) {
    for (int i = 0; i < 4; i++) {
        if (!AnyDriverInProcess() && Waiting_Process_Driver_Enabling == 0 && Waiting_Process_Driver_Disabling == 0 && Drivers[i].Enable_Attempts < 3) {
          if (bl_Output_Value[i] != 0x00 && Drivers[i].State == 0 && Drivers[i].Protection_Was_Enabled != 1 && Drivers[i].In_Process_Enabling == 0) {
              EnableDriver(&Drivers[i], currentTime, i);
              Waiting_Process_Driver_Enabling = 1;
              Drivers[i].Enable_Attempts++;
              test = 1;
          }
        }

        if (Drivers[i].State == 1 && currentTime >= Drivers[i].Protection_Start_Time && Drivers[i].Protection_Was_Enabled != 1) {
            EnableProtection();
            Drivers[i].Protection_Was_Enabled = 1;
            test = 2;
        }

        if (Drivers[i].State == 1 && currentTime >= Drivers[i].Protection_Disable_Time && Drivers[i].Protection_Was_Disabled != 1) {
            DisableProtection();
            Drivers[i].Protection_Was_Disabled = 1;
            Drivers[i].Protection_Disable_Time = 0;
            test = 3;
        }

        if ( Drivers[i].State == 1 && currentTime >= Drivers[i].Reset_Enable_Driver_Time) {
            ResetEnablingDriver(&Drivers[i], i);
            Drivers[i].Reset_Enable_Driver_Time = 0;
            Waiting_Process_Driver_Enabling = 0;
            Drivers[i].Enable_Attempts = 0;
            test = 4;
        }

    }
}

// Обработка отключения драйверов
void ProcessDriverDisabling(uint32_t currentTime) {
    for (int i = 0; i < 4; i++) {
        if (bl_Output_Value[i] == 0x00 && Drivers[i].State == 1) {
          if (!AnyDriverInProcess() && Waiting_Process_Driver_Disabling == 0 && Waiting_Process_Driver_Enabling == 0) {
                if (Drivers[i].Disable_Start_Time == 0) {
                    Drivers[i].Disable_Start_Time = currentTime + 1000;
                    Drivers[i].Protection_Start_Time = currentTime + 250;
                    Drivers[i].Protection_Disable_Time = currentTime + 750;
                }

                if (currentTime >= Drivers[i].Disable_Start_Time) {
                    DisableDriver(&Drivers[i], currentTime, i);
                }
          }


                if (currentTime >= Drivers[i].Protection_Start_Time && Drivers[i].Protection_Was_Enabled != 0) {
                    EnableProtection();
                    Drivers[i].Protection_Was_Enabled = 0;
                }

                if (currentTime >= Drivers[i].Protection_Disable_Time && Drivers[i].Protection_Was_Disabled != 0) {
                    DisableProtection();
                    Drivers[i].Protection_Was_Disabled = 0;
                    Drivers[i].Protection_Disable_Time = 0;
                }


         }

              if (Drivers[i].State == 0 && currentTime >= Drivers[i].Disable_Start_Time + 1000) {
                    ResetDisablingDriver(&Drivers[i], i);
                    Drivers[i].Disable_Start_Time = 0;
                    Drivers[i].Disable_Attempts = 0;
             }
     }
}




// Основная функция обработки драйверов
void ProcessDrivers(uint32_t currentTime) {
    if (AnyDriverEnabled()) {
      HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
    } else {
      HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
    }

    UpdateDriverStates();
    ProcessDriverEnabling(currentTime);
    ProcessDriverDisabling(currentTime);
}



/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */
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
  MX_IWDG_Init();
  MX_TIM6_Init();
  /* USER CODE BEGIN 2 */
  // Начальная настройка
  Main_Init();
  uint32_t currentTime = HAL_GetTick();

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  // Флаг окончания начальной настройки
  bl_Init_End = TRUE;

  Disabling_After_Power_Supply = 0;
  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);


  // Фоновый цикл
  while (1)
  {
    currentTime = HAL_GetTick();
    #ifdef HAL_IWDG_MODULE_ENABLED
        // Сброс сторожевого таймера
        HAL_IWDG_Refresh(&hiwdg);
    #endif

//    if (Disabling_After_Power_Supply == 0) {
//        MODULE_BZK_TX.bl_X5_4_OUT = 1;
//        MODULE_BZK_TX.bl_X5_6_OUT = 1;
//        MODULE_BZK_TX.bl_X5_8_OUT = 1;
//        MODULE_BZK_TX.bl_X5_10_OUT = 1;
//
//        Disabling_After_Power_Supply_Time = currentTime + 1000;
//        After_Power_Supply_Protection_Enabling_Time = currentTime + 250;
//        After_Power_Supply_Protection_Disabling_Time = currentTime + 750;
//        Disabling_After_Power_Supply = 1;
//    }
//
//
//    if (Disabling_After_Power_Supply == 1 && currentTime >= After_Power_Supply_Protection_Enabling_Time) {
//        MODULE_BZK_TX.bl_X4_1_X4_3_OUT = 1;
//    }
//
//    if (Disabling_After_Power_Supply == 1 && currentTime >= After_Power_Supply_Protection_Disabling_Time) {
//        MODULE_BZK_TX.bl_X4_1_X4_3_OUT = 0;
//    }
//
//    if (Disabling_After_Power_Supply == 1 && currentTime >= Disabling_After_Power_Supply_Time) {
//        MODULE_BZK_TX.bl_X5_4_OUT = 0;
//        MODULE_BZK_TX.bl_X5_6_OUT = 0;
//        MODULE_BZK_TX.bl_X5_8_OUT = 0;
//        MODULE_BZK_TX.bl_X5_10_OUT = 0;
//
//        Disabling_After_Power_Supply = 2;
//        Disabling_After_Power_Supply_Time = 0;
//    }


    // Сигнал для начального включения светодиодов
    bl_TP_Init_End = TP(bl_Init_End, 1000UL, &TP_Init_End_DATA);

    // Настраиваем таймеры
    bl_TIMER_LED = TIMER(200UL, &TIMER_LED_Data);
    bl_TIMER_CAN = TIMER(1000UL, &TIMER_CAN_Data);     //период 1000 милисекунд


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



//    // Задаём состояние дискретных выходов
//    HAL_GPIO_WritePin(OUT_D_1_GPIO_Port, OUT_D_1_Pin, bl_Output_Value[11U]);
//    HAL_GPIO_WritePin(OUT_D_2_GPIO_Port, OUT_D_2_Pin, bl_Output_Value[6U]);
//    HAL_GPIO_WritePin(OUT_D_3_GPIO_Port, OUT_D_3_Pin, bl_Output_Value[7U]);
//    HAL_GPIO_WritePin(OUT_D_4_GPIO_Port, OUT_D_4_Pin, bl_Output_Value[8U]);
//    HAL_GPIO_WritePin(OUT_D_5_GPIO_Port, OUT_D_5_Pin, bl_Output_Value[9U]);
//    HAL_GPIO_WritePin(OUT_D_6_GPIO_Port, OUT_D_6_Pin, bl_Output_Value[10U]);
//    HAL_GPIO_WritePin(OUT_D_7_GPIO_Port, OUT_D_7_Pin, bl_Output_Value[4U]);
//    HAL_GPIO_WritePin(OUT_D_8_GPIO_Port, OUT_D_8_Pin, bl_Output_Value[5U]);
//    HAL_GPIO_WritePin(OUT_D_9_GPIO_Port, OUT_D_9_Pin, bl_Output_Value[12U]);
//    HAL_GPIO_WritePin(OUT_D_10_GPIO_Port, OUT_D_10_Pin, bl_Output_Value[13U]);
//    HAL_GPIO_WritePin(OUT_D_11_GPIO_Port, OUT_D_11_Pin, bl_Output_Value[14U]);
//    HAL_GPIO_WritePin(OUT_D_12_GPIO_Port, OUT_D_12_Pin, bl_Output_Value[15U]);



//          // Считываем состояние дискретных входов
//          ui32_Input_Value =
//              (
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_9_GPIO_Port, IN_D_9_Pin)), 1) |
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_10_GPIO_Port, IN_D_10_Pin)), 2) |
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_7_GPIO_Port, IN_D_7_Pin)), 3) |
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_8_GPIO_Port, IN_D_8_Pin)), 4) |
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_21_GPIO_Port, IN_D_21_Pin)), 5) |
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_22_GPIO_Port, IN_D_22_Pin)), 6) |
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_23_GPIO_Port, IN_D_23_Pin)), 7) |
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_17_GPIO_Port, IN_D_17_Pin)), 8) |
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_18_GPIO_Port, IN_D_18_Pin)), 9) |
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_19_GPIO_Port, IN_D_19_Pin)), 10) |
//                  SHL(INT_TO_UINT32(!HAL_GPIO_ReadPin(IN_D_20_GPIO_Port, IN_D_20_Pin)), 11)
//              );


          ProcessDrivers(currentTime);

//                  MODULE_BZK_TX.bl_X6_1_IN = EPRO_Test_Bit(ui32_Input_Value, 0);     // АВДУ1
//                  MODULE_BZK_TX.bl_X6_3_IN = EPRO_Test_Bit(ui32_Input_Value, 1);     // АВДУ2
//                  MODULE_BZK_TX.bl_X6_5_IN = EPRO_Test_Bit(ui32_Input_Value, 2);     // КМ7
//                  MODULE_BZK_TX.bl_X6_6_IN = EPRO_Test_Bit(ui32_Input_Value, 3);     // КМ8
//                  MODULE_BZK_TX.bl_X6_10_IN = EPRO_Test_Bit(ui32_Input_Value, 4);    // ППН1
//                  MODULE_BZK_TX.bl_X6_11_IN = EPRO_Test_Bit(ui32_Input_Value, 5);    // ППН2
//                  MODULE_BZK_TX.bl_X6_12_IN = EPRO_Test_Bit(ui32_Input_Value, 6);    // ППН3
//                  MODULE_BZK_TX.bl_X5_11_IN = EPRO_Test_Bit(ui32_Input_Value, 7);    // QF1
//                  MODULE_BZK_TX.bl_X5_12_IN = EPRO_Test_Bit(ui32_Input_Value, 8);    // QF2
//                  MODULE_BZK_TX.bl_X5_13_IN = EPRO_Test_Bit(ui32_Input_Value, 9);    // QF3
//                  MODULE_BZK_TX.bl_X5_14_IN = EPRO_Test_Bit(ui32_Input_Value, 10);   // QF4
//                  MODULE_BZK_TX.bl_X2_4_OUT = bl_Output_Value[4U];                   // KM7
//                  MODULE_BZK_TX.bl_X2_2_OUT = bl_Output_Value[5U];                   // KM8
//                  MODULE_BZK_TX.bl_X2_4_OUT = bl_Output_Value[6U];                   // KM2
//                  MODULE_BZK_TX.bl_X3_10_OUT = bl_Output_Value[7U];                  // KM3
//                  MODULE_BZK_TX.bl_X3_7_OUT = bl_Output_Value[8U];                   // KM4
//                  MODULE_BZK_TX.bl_X3_8_OUT = bl_Output_Value[9U];                   // KM5
//                  MODULE_BZK_TX.bl_X3_3_OUT = bl_Output_Value[10U];                  // KM6
//                  MODULE_BZK_TX.bl_X3_1_OUT = bl_Output_Value[11U];                  // KM1
//                  MODULE_BZK_TX.bl_X2_9_OUT = bl_Output_Value[12U];                  // KL1
//                  MODULE_BZK_TX.bl_X2_10_OUT = bl_Output_Value[13U];                 // KL2
//                  MODULE_BZK_TX.bl_X2_8_OUT = bl_Output_Value[14U];                  // KL3
//                  MODULE_BZK_TX.bl_X2_7_OUT = bl_Output_Value[15U];                  // KL4
//                  MODULE_BZK_TX.bl_X4_1_X4_3_OUT = 0;                                // QF защита
//                  MODULE_BZK_TX.bl_X5_3_OUT = 0;                                     // QF1 вкл.
//                  MODULE_BZK_TX.bl_X5_4_OUT = 0;                                     // QF1 откл.
//                  MODULE_BZK_TX.bl_X5_5_OUT = 0;                                     // QF2 вкл.
//                  MODULE_BZK_TX.bl_X5_6_OUT = 0;                                     // QF2 откл.
//                  MODULE_BZK_TX.bl_X5_7_OUT = 0;                                     // QF3 вкл.
//                  MODULE_BZK_TX.bl_X5_8_OUT = 0;                                     // QF3 откл.
//                  MODULE_BZK_TX.bl_X5_9_OUT = 0;                                     // QF4 вкл.
//                  MODULE_BZK_TX.bl_X5_10_OUT = 0;                                    // QF4 откл.

                  MODULE_BZK_TX.bl_X6_1_IN = 1;                                      // АВДУ1
                  MODULE_BZK_TX.bl_X6_3_IN = 1;                                      // АВДУ2
                  MODULE_BZK_TX.bl_X6_5_IN = 1;                                      // КМ7
                  MODULE_BZK_TX.bl_X6_6_IN = 1;                                      // КМ8
                  MODULE_BZK_TX.bl_X6_10_IN = 1;                                     // ППН1
                  MODULE_BZK_TX.bl_X6_11_IN = 1;                                     // ППН2
//                  MODULE_BZK_TX.bl_X6_12_IN = 1;                                     // ППН3
//                  MODULE_BZK_TX.bl_X5_11_IN = 0;                                     // QF1
//                  MODULE_BZK_TX.bl_X5_12_IN = 0;                                     // QF2
//                  MODULE_BZK_TX.bl_X5_13_IN = 0;                                     // QF3
//                  MODULE_BZK_TX.bl_X5_14_IN = 0;                                     // QF4
                  MODULE_BZK_TX.bl_X2_4_OUT = bl_Output_Value[4U];                   // KM7
                  MODULE_BZK_TX.bl_X2_2_OUT = bl_Output_Value[5U];                   // KM8
                  MODULE_BZK_TX.bl_X3_9_OUT = bl_Output_Value[6U];                   // KM2
                  MODULE_BZK_TX.bl_X3_10_OUT = bl_Output_Value[7U];                  // KM3
                  MODULE_BZK_TX.bl_X3_7_OUT = bl_Output_Value[8U];                   // KM4
                  MODULE_BZK_TX.bl_X3_8_OUT = bl_Output_Value[9U];                   // KM5
                  MODULE_BZK_TX.bl_X3_3_OUT = bl_Output_Value[10U];                  // KM6
                  MODULE_BZK_TX.bl_X3_1_OUT = bl_Output_Value[11U];                  // KM1
                  MODULE_BZK_TX.bl_X2_9_OUT = bl_Output_Value[12U];                  // KL1
                  MODULE_BZK_TX.bl_X2_10_OUT = bl_Output_Value[13U];                 // KL2
                  MODULE_BZK_TX.bl_X2_8_OUT = bl_Output_Value[14U];                  // KL3
                  MODULE_BZK_TX.bl_X2_7_OUT = bl_Output_Value[15U];                  // KL4
//                  MODULE_BZK_TX.bl_X4_1_X4_3_OUT = 1;                                // QF защита
//                  MODULE_BZK_TX.bl_X5_3_OUT = 1;                                     // QF1 вкл.
//                  MODULE_BZK_TX.bl_X5_4_OUT = 1;                                     // QF1 откл.
//                  MODULE_BZK_TX.bl_X5_5_OUT = 1;                                     // QF2 вкл.
//                  MODULE_BZK_TX.bl_X5_6_OUT = 1;                                     // QF2 откл.
//                  MODULE_BZK_TX.bl_X5_7_OUT = 1;                                     // QF3 вкл.
//                  MODULE_BZK_TX.bl_X5_8_OUT = 1;                                     // QF3 откл.
//                  MODULE_BZK_TX.bl_X5_9_OUT = 1;                                     // QF4 вкл.
//                  MODULE_BZK_TX.bl_X5_10_OUT = 1;                                    // QF4 откл.
//                  MODULE_BZK_TX.bl_X5_10_OUT = 1;                                    // QF4 откл.



                 MODULE_BZK_TX_MANAGER(bl_TIMER_CAN, &CANTxBuffer[0U]);






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
