// 2024-07-05
/******************************************************************************
 *     Include
 ******************************************************************************/
#include "main_config.h"

/******************************************************************************
 *     Defines
 ******************************************************************************/

/******************************************************************************
 *     Globals
 ******************************************************************************/
uint8_t ui8_StringSerial[26U];

/******************************************************************************
 *     Function Prototypes
 ******************************************************************************/

/******************************************************************************
 * Function Name: R_TRIG
 * Description: Определение момента появления сигнала
 ******************************************************************************/
bool_t R_TRIG(bool_t bl_Input, bool_t* bl_Old_Input)
{
  bool_t bl_Output;

  bl_Output = (bl_Input && (!(*bl_Old_Input)));
  *bl_Old_Input = bl_Input;

  return bl_Output;
}

/******************************************************************************
 * Function Name: F_TRIG
 * Description: Определение момента пропадания сигнала
 ******************************************************************************/
bool_t F_TRIG(bool_t bl_Input, bool_t* bl_Old_Input)
{
  bool_t bl_Output;

  bl_Output = (*bl_Old_Input && (!bl_Input));
  *bl_Old_Input = bl_Input;

  return bl_Output;
}

/******************************************************************************
 * Function Name: RS
 * Description: RS-триггер
 ******************************************************************************/
bool_t RS(bool_t bl_Set, bool_t bl_Reset, bool_t* bl_Old_Output)
{
  bool_t bl_Output = *bl_Old_Output;

  if (bl_Set)
  {
    bl_Output = TRUE;
  }

  if (bl_Reset)
  {
    bl_Output = FALSE;
  }

  *bl_Old_Output = bl_Output;

  return bl_Output;
}

/******************************************************************************
 * Function Name: SR
 * Description: SR-триггер
 ******************************************************************************/
bool_t SR(bool_t bl_Set, bool_t bl_Reset, bool_t* bl_Old_Output)
{
  bool_t bl_Output = *bl_Old_Output;

  if (bl_Reset)
  {
    bl_Output = FALSE;
  }

  if (bl_Set)
  {
    bl_Output = TRUE;
  }

  *bl_Old_Output = bl_Output;

  return bl_Output;
}

/******************************************************************************
 * Function Name: TASK_TIME
 * Description: Определение времени в мс между вызовом функции
 ******************************************************************************/
uint32_t TASK_TIME(uint32_t* ui32_Old_Time)
{
  uint32_t ui32_Delta_Time, ui32_Now_Time;

  ui32_Now_Time = HAL_GetTick();
  ui32_Delta_Time = (ui32_Now_Time - *ui32_Old_Time);
  *ui32_Old_Time = ui32_Now_Time;

  return ui32_Delta_Time;
}

/******************************************************************************
 * Function Name: TON
 * Description: Задержка момента появления сигнала
 ******************************************************************************/
bool_t TON(bool_t bl_Input, uint32_t ui32_Timeout, TON_t* TON_DATA)
{
  bool_t bl_Output;

  bl_Output = FALSE;

  if (R_TRIG(bl_Input, &(TON_DATA->bl_Old_Input)))
  {
    TON_DATA->bl_Run_Mode = TRUE;
    TON_DATA->ui32_Start_Time = HAL_GetTick();
  }

  if (!bl_Input)
  {
    TON_DATA->bl_Run_Mode = FALSE;
  }

  if (TON_DATA->bl_Run_Mode)
  {
    if ((HAL_GetTick() - TON_DATA->ui32_Start_Time) >= ui32_Timeout)
    {
      bl_Output = TRUE;
    }
  }

  return bl_Output;
}

/******************************************************************************
 * Function Name: TOF
 * Description: Задержка момента пропадания сигнала
 ******************************************************************************/
bool_t TOF(bool_t bl_Input, uint32_t ui32_Timeout, TOF_t* TOF_DATA)
{
  bool_t bl_Output;

  bl_Output = FALSE;

  if (F_TRIG(bl_Input, &(TOF_DATA->bl_Old_Input)))
  {
    TOF_DATA->bl_Run_Mode = TRUE;
    TOF_DATA->ui32_Start_Time = HAL_GetTick();
  }

  if (bl_Input)
  {
    TOF_DATA->bl_Run_Mode = FALSE;
  }

  if (TOF_DATA->bl_Run_Mode)
  {
    if ((HAL_GetTick() - TOF_DATA->ui32_Start_Time) <= ui32_Timeout)
    {
      bl_Output = TRUE;
    }
  }

  return (bl_Input || bl_Output);
}

/******************************************************************************
 * Function Name: TP
 * Description: Формирование импульса фиксированной длительности
 ******************************************************************************/
bool_t TP(bool_t bl_Input, uint32_t ui32_Timeout, TP_t* TP_DATA)
{
  if (R_TRIG(bl_Input, &(TP_DATA->bl_Old_Input)))
  {
    TP_DATA->bl_Run_Mode = TRUE;
    TP_DATA->ui32_Start_Time = HAL_GetTick();
  }

  if (TP_DATA->bl_Run_Mode)
  {
    if ((HAL_GetTick() - TP_DATA->ui32_Start_Time) >= ui32_Timeout)
    {
      TP_DATA->bl_Run_Mode = FALSE;
    }
  }

  return (TP_DATA->bl_Run_Mode);
}

/******************************************************************************
 * Function Name: TIMER
 * Description: Таймер
 ******************************************************************************/
bool_t TIMER(uint32_t ui32_Timeout, TIMER_t* TIMER_DATA)
{
  return F_TRIG(TP((!TIMER_DATA->bl_Run_Mode), ui32_Timeout, &(TIMER_DATA->TP_DATA)), &(TIMER_DATA->TP_DATA.bl_Old_Input));
}

/******************************************************************************
 * Function Name: KM_ENABLE_ERROR
 * Description: Определение неправильного состояния контактора
 ******************************************************************************/
bool_t KM_ENABLE_ERROR(bool_t bl_Command, bool_t bl_State, uint32_t ui32_Timeout, KM_ENABLE_ERROR_t* KM_ENABLE_ERROR_DATA)
{
  return
      (
          TON(bl_Command, ui32_Timeout, &KM_ENABLE_ERROR_DATA->TON_DATA) &&
          (bl_State != bl_Command) &&
          (!TP(F_TRIG(bl_Command, &KM_ENABLE_ERROR_DATA->bl_Command_OLD), ui32_Timeout, &KM_ENABLE_ERROR_DATA->TP_DATA))
      );
}

/******************************************************************************
 * Function Name: KM_CURRENT_LIMIT
 * Description: Определение действия при достижении порога тока в контакторе
 ******************************************************************************/
bool_t KM_CURRENT_LIMIT(bool_t bl_Ilim_Warning, int8_t i8_Max_Count, uint32_t ui32_Timeout, KM_CURRENT_LIMIT_t* KM_CURRENT_LIMIT_DATA)
{
  bool_t bl_TEMP;

  if (i8_Max_Count == 1)
  {
    if (
        R_TRIG(bl_Ilim_Warning, &KM_CURRENT_LIMIT_DATA->bl_R_TRIG_Ilim_Warning_OLD) &&
        (KM_CURRENT_LIMIT_DATA->i8_Ilim_Warning_Count < 1)
    )
    {
      KM_CURRENT_LIMIT_DATA->i8_Ilim_Warning_Count = (KM_CURRENT_LIMIT_DATA->i8_Ilim_Warning_Count + 1);
    }

    return (KM_CURRENT_LIMIT_DATA->i8_Ilim_Warning_Count == 1);
  }
  else
  {
    bl_TEMP = TOF(bl_Ilim_Warning, ui32_Timeout, &KM_CURRENT_LIMIT_DATA->TOF_Ilim_Warning_DATA);
    if (
        R_TRIG(bl_TEMP, &KM_CURRENT_LIMIT_DATA->bl_R_TRIG_Ilim_Warning_OLD) &&
        (KM_CURRENT_LIMIT_DATA->i8_Ilim_Warning_Count < i8_Max_Count)
    )
    {
      KM_CURRENT_LIMIT_DATA->i8_Ilim_Warning_Count = (KM_CURRENT_LIMIT_DATA->i8_Ilim_Warning_Count + 1);
    }

    return (bl_TEMP || (KM_CURRENT_LIMIT_DATA->i8_Ilim_Warning_Count == i8_Max_Count));
  }
}

/******************************************************************************
 * Function Name: NUM16_TO_BYTE
 * Description: Переводит число от 0 до 15 в строковой символ от '0' до 'F'
 ******************************************************************************/
uint8_t NUM16_TO_BYTE(uint8_t ui8_Input)
{
  switch (ui8_Input)
  {
    case 1:
      return '1';
      break;
    case 2:
      return '2';
      break;
    case 3:
      return '3';
      break;
    case 4:
      return '4';
      break;
    case 5:
      return '5';
      break;
    case 6:
      return '6';
      break;
    case 7:
      return '7';
      break;
    case 8:
      return '8';
      break;
    case 9:
      return '9';
      break;
    case 10:
      return 'A';
      break;
    case 11:
      return 'B';
      break;
    case 12:
      return 'C';
      break;
    case 13:
      return 'D';
      break;
    case 14:
      return 'E';
      break;
    case 15:
      return 'F';
      break;
    default:
      return '0';
      break;
  }
}

/******************************************************************************
 * Function Name: INT_TO_UNICODE
 * Description: Копия функции IntToUnicode из файла usbd_desc.c
 ******************************************************************************/
void INT_TO_UNICODE(uint32_t value, uint8_t * pbuf, uint8_t len)
{
  uint8_t idx = 0;

  for (idx = 0; idx < len; idx++)
  {
    if (((value >> 28)) < 0xA)
    {
      pbuf[2 * idx] = ((value >> 28) + '0');
    }
    else
    {
      pbuf[2 * idx] = ((value >> 28) + 'A' - 10);
    }

    value = (value << 4);

    pbuf[2 * idx + 1] = 0;
  }
}

/******************************************************************************
 * Function Name: GET_SERIAL_NUM
 * Description: Формируем строку серийного номера микроконтроллера (копия функции Get_SerialNum из файла usbd_desc.c)
 ******************************************************************************/
void GET_SERIAL_NUM(void)
{
  uint32_t deviceserial0;
  uint32_t deviceserial1;
  uint32_t deviceserial2;

  deviceserial0 = *(uint32_t *) (UID_BASE);
  deviceserial1 = *(uint32_t *) (UID_BASE + 0x4);
  deviceserial2 = *(uint32_t *) (UID_BASE + 0x8);

  deviceserial0 += deviceserial2;

  if (deviceserial0 != 0)
  {
    INT_TO_UNICODE(deviceserial0, &ui8_StringSerial[2], 8);
    INT_TO_UNICODE(deviceserial1, &ui8_StringSerial[18], 4);
  }
}

/******************************************************************************
 * Function Name: JumpToBootloader
 * Description: Переход в загрузчик для STM32
 * Данный вариант основан на https://community.st.com/s/article/STM32H7-bootloader-jump-from-application
 ******************************************************************************/
void JumpToBootloader(void)
{
#if (\
    defined(EPRO_MCU_SERIES_F105_F107_SysMemAddress) || \
    defined(EPRO_MCU_SERIES_F302xB_F302xC_F303xB_F303xC_SysMemAddress) || \
    defined(EPRO_MCU_SERIES_F76x_F77x_SysMemAddress) || \
    defined(EPRO_MCU_SERIES_G47x_G48x_SysMemAddress) || \
    defined(EPRO_MCU_SERIES_L43x_L44x_SysMemAddress)\
)
  uint32_t ui32_Index = 0;
  void (*SysMemBootJump)(void);
  /* Задание адреса точки входа в загрузчик */
#ifdef EPRO_MCU_SERIES_F105_F107_SysMemAddress
  volatile uint32_t ui32_BootAddr = EPRO_MCU_SERIES_F105_F107_SysMemAddress;
#else
#ifdef EPRO_MCU_SERIES_F302xB_F302xC_F303xB_F303xC_SysMemAddress
  volatile uint32_t ui32_BootAddr = EPRO_MCU_SERIES_F302xB_F302xC_F303xB_F303xC_SysMemAddress;
#else
#ifdef EPRO_MCU_SERIES_F76x_F77x_SysMemAddress
  volatile uint32_t ui32_BootAddr = EPRO_MCU_SERIES_F76x_F77x_SysMemAddress;
#else
#ifdef EPRO_MCU_SERIES_G47x_G48x_SysMemAddress
  volatile uint32_t ui32_BootAddr = EPRO_MCU_SERIES_G47x_G48x_SysMemAddress;
#else
#ifdef EPRO_MCU_SERIES_L43x_L44x_SysMemAddress
  volatile uint32_t ui32_BootAddr = EPRO_MCU_SERIES_L43x_L44x_SysMemAddress;
#endif // EPRO_MCU_SERIES_L43x_L44x_SysMemAddress
#endif // EPRO_MCU_SERIES_G47x_G48x_SysMemAddress
#endif // EPRO_MCU_SERIES_F76x_F77x_SysMemAddress
#endif // EPRO_MCU_SERIES_F302xB_F302xC_F303xB_F303xC_SysMemAddress
#endif //  EPRO_MCU_SERIES_F105_F107_SysMemAddress

#if (defined(OPTIONBYTE_USER) && (!defined(OB_BOOTADDR_SYSTEM)) && defined(OB_USER_nSWBOOT0) && defined(OB_USER_nBOOT0))
  FLASH_OBProgramInitTypeDef OBInit = {0};
  HAL_FLASHEx_OBGetConfig(&OBInit);

  OBInit.OptionType = OPTIONBYTE_USER;
  OBInit.USERType = (OB_USER_nSWBOOT0 | OB_USER_nBOOT0);
  OBInit.USERConfig = 0;  // OB_USER_nSWBOOT0 = FALSE, OB_USER_nBOOT0 = FALSE

  if (HAL_FLASH_Unlock() == HAL_OK)
  {
    if (HAL_FLASH_OB_Unlock() == HAL_OK)
    {
      if (HAL_FLASHEx_OBProgram(&OBInit) == HAL_OK)
      {
        HAL_FLASH_OB_Launch();
      }
    }
    HAL_FLASH_OB_Lock();
  }
  HAL_FLASH_Lock();
#endif

#if (defined(OPTIONBYTE_BOOTADDR_0) && defined(OB_BOOTADDR_SYSTEM))
  FLASH_OBProgramInitTypeDef OBInit = {0};
  HAL_FLASHEx_OBGetConfig(&OBInit);

  OBInit.OptionType = OPTIONBYTE_BOOTADDR_0;
  OBInit.BootAddr0 = OB_BOOTADDR_SYSTEM;

  if (HAL_FLASH_Unlock() == HAL_OK)
  {
    if (HAL_FLASH_OB_Unlock() == HAL_OK)
    {
      if (HAL_FLASHEx_OBProgram(&OBInit) == HAL_OK)
      {
        HAL_FLASH_OB_Launch();
      }
    }
    HAL_FLASH_OB_Lock();
  }
  HAL_FLASH_Lock();
#endif

  /* Отключение прерываний */
  __disable_irq();

  /* Остановка таймера Systick */
  SysTick->CTRL = 0;
  SysTick->LOAD = 0;
  SysTick->VAL = 0;

  /* Настройка системы часов к настройкам по умолчанию */
  HAL_RCC_DeInit();

  HAL_DeInit();

  /* Очистка регистров Interrupt Enable Register и Interrupt Pending Register */
  for (ui32_Index = 0; ui32_Index < 8; ui32_Index++)
  {
    NVIC->ICER[ui32_Index] = 0xFFFFFFFF;
    NVIC->ICPR[ui32_Index] = 0xFFFFFFFF;
  }

  /* Включение прерываний */
  __enable_irq();

  /* Настройка перехода на нужное место */
  SysMemBootJump = (void (*)(void)) (*((uint32_t *) ((ui32_BootAddr + 4))));

  /* Установка указателя главного стека на стек загрузчика */
  __set_MSP(*(uint32_t *)ui32_BootAddr);

  /* Вызов функции перехода в загрузчик */
  SysMemBootJump();

  while (1)
  {
    /* Код не должен достичь этой петли */
  }
#endif
}

/******************************************************************************
 * Function Name: EPRO_BCD2TOBYTE
 * Description: Копия функции RTC_Bcd2ToByte из файла stm32f7xx_hal_rtc.c
 ******************************************************************************/
uint8_t EPRO_BCD2TOBYTE(uint8_t number)
{
  uint32_t tens = 0U;
  tens = (((uint32_t)number & 0xF0U) >> 4U) * 10U;
  return (uint8_t)(tens + ((uint32_t)number & 0x0FU));
}
