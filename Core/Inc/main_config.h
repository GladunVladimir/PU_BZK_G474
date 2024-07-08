#ifndef MAIN_CONFIG_H_
#define MAIN_CONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif

  /******************************************************************************
   *     Include
   ******************************************************************************/
#include "stdlib.h"
#include "math.h"
#include "main.h"
#include "epro_library.h"

  /******************************************************************************
   *     Peripherals
   ******************************************************************************/

  /******************************************************************************
   *     Integer Constants
   ******************************************************************************/

  /******************************************************************************
   *     Defines
   ******************************************************************************/
  // Версия программного обеспечения
#define PROJECT_DATA                                      0x20240503// 0x20230912 // Дата создания текущей версии проекта
//#define PROJECT_DATA                                      0x00180503
#define PROJECT_ID                                        692U      // Идентификатор проекта
#define PROJECT_VERSION                                   -1        //0U // Версия проекта

#define LED_GREEN_PIN_SET                                 GPIO_PIN_RESET
#define LED_GREEN_PIN_RESET                               GPIO_PIN_SET
#define LED_RED_PIN_SET                                   GPIO_PIN_RESET
#define LED_RED_PIN_RESET                                 GPIO_PIN_SET
#define LED_YELLOW_PIN_SET                                GPIO_PIN_RESET
#define LED_YELLOW_PIN_RESET                              GPIO_PIN_SET

  // Частота тактирования модуля CAN
#define CAN_APB_Freq_MHz                                  48U       // 24 или 48
#if (!((CAN_APB_Freq_MHz == 24U) || (CAN_APB_Freq_MHz == 48U)))
#error Ошибка в задании частоты тактирования модуля CAN
#endif

  // AN2606 Table *** Bootloader device-dependent parameters
  //#define EPRO_MCU_SERIES_F105_F107_SysMemAddress           0x1FFFB000
  //#define EPRO_MCU_SERIES_F302xB_F302xC_F303xB_F303xC_SysMemAddress 0x1FFFD800
  //#define EPRO_MCU_SERIES_F76x_F77x_SysMemAddress           0x1FF00000
#define EPRO_MCU_SERIES_G47x_G48x_SysMemAddress           0x1FFF0000
  //#define EPRO_MCU_SERIES_L43x_L44x_SysMemAddress           0x1FFF0000

#define PROJECT_CAN_BUFFER_RX_SIZE                        64U
#define PROJECT_CAN_BUFFER_TX_SIZE                        64U

#define bl_Modbus_Slave_Use_USB                           1
#if (bl_Modbus_Slave_Use_USB != 0)
#define Modbus_Slave_Coils_Count_USB                      1U        // Modbus slave USB: Число дискретных выходов
#define Modbus_Slave_Discrete_Inputs_Count_USB            1U        // Modbus slave USB: Число дискретных входов
#define Modbus_Slave_Holding_Registers_Count_USB          60U       // Modbus slave USB: Число регистров хранения
#define Modbus_Slave_Input_Registers_Count_USB            1U        // Modbus slave USB: Число регистров входов
#define Modbus_Slave_Buffer_Size_USB                      256U      // Modbus slave USB: Максимальное число принимаемых / передаваемых байт данных
#define Modbus_Slave_ID_USB                               1U        // Modbus slave USB: Адрес устройства в сети Modbus (основной адрес)
#define Modbus_Slave_Second_ID_USB                        1U        // Modbus slave USB: Адрес устройства в сети Modbus (дополнительный адрес)
#define Modbus_Slave_Array_Index_USB                      3U        // Modbus slave USB: Индекс массива данных с которым будут работать функции чтения/записи (основной адрес)
#define Modbus_Slave_Second_Array_Index_USB               3U        // Modbus slave USB: Индекс массива данных с которым будут работать функции чтения/записи (дополнительный адрес)
#define Modbus_Slave_Read_Only_USB                        0U        // Modbus slave USB: Только чтение
#endif

#define Backlight_Nominal_Freq_Hz                         125
#define Backlight_Timer_Instance                          TIM3
#define Backlight_APB_Freq_Hz                             144000000
#define Backlight_Timer_Prescaler                         23        // 144000000 / (23+1) = 6000000
#define Backlight_Timer_Freq_Hz                           (Backlight_APB_Freq_Hz / (Backlight_Timer_Prescaler + 1))
#define Backlight_Timer_ARR                               ((Backlight_Timer_Freq_Hz / Backlight_Nominal_Freq_Hz) - 1)

  /******************************************************************************
   *     Data Types
   ******************************************************************************/
  typedef struct
  {
    uint32_t ui32_ID;
    uint8_t ui8_Data[8];
    uint8_t ui8_DLC;
    bool_t bl_IDE;
    bool_t bl_RTR;
  }CAN_MESSAGE_t;

  typedef struct
  {
    uint16_t ui16_Buffer_Start;
    uint16_t ui16_Buffer_End;
    CAN_MESSAGE_t Message[PROJECT_CAN_BUFFER_RX_SIZE];
  }CAN_BUFFER_RX_t;

  typedef struct
  {
    uint16_t ui16_Buffer_Start;
    uint16_t ui16_Buffer_End;
    CAN_MESSAGE_t Message[PROJECT_CAN_BUFFER_TX_SIZE];
  }CAN_BUFFER_TX_t;

  /******************************************************************************
   *     Function Prototypes
   ******************************************************************************/

  /******************************************************************************
   *     Defines Check
   ******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* MAIN_CONFIG_H_ */
