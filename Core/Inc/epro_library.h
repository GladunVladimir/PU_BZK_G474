// 2024-07-05
#ifndef EPRO_LIBRARY_H_
#define EPRO_LIBRARY_H_

#ifdef __cplusplus
extern "C" {
#endif

  /******************************************************************************
   *     Include
   ******************************************************************************/
#include "stdbool.h"                                      // true / false / bool определены в stdbool.h

  /******************************************************************************
   *     Peripherals
   ******************************************************************************/

  /******************************************************************************
   *     Integer Constants
   ******************************************************************************/

  /******************************************************************************
   *     Defines
   ******************************************************************************/
#define TRUE                                              true
#define FALSE                                             false

#define ABS_INT                                           abs
#define ABS_REAL                                          fabs

#define SHL(Text1, Text2)                                 ((Text1) << (Text2))
#define SHR(Text1, Text2)                                 ((Text1) >> (Text2))

#define EPRO_Test_Bit(Variable, Bit)                      ((Variable & SHL(1, Bit)) == SHL(1, Bit))
#define EPRO_Set_Bit(Variable, Bit)                       Variable = (Variable | SHL(1, Bit))
#define EPRO_Cleat_Bit(Variable, Bit)                     Variable = (Variable & (~SHL(1, Bit)))

#define SELECTOR(bl_Output, bl_Text_false, bl_Text_true, bl_Selector)\
    {if (bl_Selector) bl_Output = bl_Text_true; else bl_Output = bl_Text_false;}

#define INT_TO_BOOL(Text)                                 ((bool_t)(Text))
#define INT_TO_INT8(Text)                                 ((int8_t)(Text))
#define INT_TO_UINT8(Text)                                ((uint8_t)(Text))
#define INT_TO_INT16(Text)                                ((int16_t)(Text))
#define INT_TO_UINT16(Text)                               ((uint16_t)(Text))
#define INT_TO_INT32(Text)                                ((int32_t)(Text))
#define INT_TO_UINT32(Text)                               ((uint32_t)(Text))
#define INT_TO_FLOAT(Text)                                ((float_t)(Text))

#define FLOAT_TO_BOOL(Text)                               ((bool_t)(lrintf(Text)))
#define FLOAT_TO_INT8(Text)                               ((int8_t)(lrintf(Text)))
#define FLOAT_TO_UINT8(Text)                              ((uint8_t)(lrintf(Text)))
#define FLOAT_TO_INT16(Text)                              ((int16_t)(lrintf(Text)))
#define FLOAT_TO_UINT16(Text)                             ((uint16_t)(lrintf(Text)))
#define FLOAT_TO_INT32(Text)                              ((int32_t)(lrintf(Text)))
#define FLOAT_TO_UINT32(Text)                             ((uint32_t)(lrintf(Text)))

  /******************************************************************************
   *     Data Types
   ******************************************************************************/
  //   C99
  //   int8_t;                                            // 8-битное целое число со знаком (рекомендуемый формат имени переменной i8_*)
  //   uint8_t;                                           // 8-битное целое число без знака (рекомендуемый формат имени переменной ui8_*)
  //   int16_t;                                           // 16-битное целое число со знаком (рекомендуемый формат имени переменной i16_*)
  //   uint16_t;                                          // 16-битное целое число без знака (рекомендуемый формат имени переменной ui16_*)
  //   int32_t;                                           // 32-битное целое число со знаком (рекомендуемый формат имени переменной i32_*)
  //   uint32_t;                                          // 32-битное целое число без знака (рекомендуемый формат имени переменной ui32_*)
  //   float_t;                                           // 32-битное число c плавающей точкой (рекомендуемый формат имени переменной fl_*)
#ifdef bool
  typedef bool      bool_t;                               // Число с возможными значениями 0 или 1 (рекомендуемый формат имени переменной bl_*)
#else
  typedef uint8_t   bool_t;                               // 8-битное целое число без знака (рекомендуемый формат имени переменной bl_*)
#endif

  typedef struct
  {
    uint32_t ui32_Start_Time;                             // Метка времени появления сигнала
    bool_t   bl_Old_Input;                                // Значение сигнала на предудущем цикле
    bool_t   bl_Run_Mode;                                 // Нахождение в режиме задержки появления сигнала
  }TON_t;

  typedef struct
  {
    uint32_t ui32_Start_Time;                             // Метка времени пропадания сигнала
    bool_t   bl_Old_Input;                                // Значение сигнала на предудущем цикле
    bool_t   bl_Run_Mode;                                 // Нахождение в режиме задержки пропадания сигнала
  }TOF_t;

  typedef struct
  {
    uint32_t ui32_Start_Time;                             // Метка времени появления сигнала
    bool_t   bl_Old_Input;                                // Значение сигнала на предудущем цикле
    bool_t   bl_Run_Mode;                                 // Нахождение в режиме формирования импульса фиксированной длительности
  }TP_t;

  typedef struct
  {
    TP_t     TP_DATA;
    bool_t   bl_Run_Mode;
  }TIMER_t;

  typedef struct
  {
    bool_t   bl_Command_OLD;
    TON_t    TON_DATA;
    TP_t     TP_DATA;
  }KM_ENABLE_ERROR_t;

  typedef struct
  {
    int8_t   i8_Ilim_Warning_Count;
    bool_t   bl_R_TRIG_Ilim_Warning_OLD;
    TOF_t    TOF_Ilim_Warning_DATA;
  }KM_CURRENT_LIMIT_t;

  /******************************************************************************
   *     Function Prototypes
   ******************************************************************************/
  bool_t R_TRIG(bool_t bl_Input, bool_t* bl_Old_Input);
  bool_t F_TRIG(bool_t bl_Input, bool_t* bl_Old_Input);
  bool_t RS(bool_t bl_SET, bool_t bl_RESET, bool_t* bl_Old_Output);
  bool_t SR(bool_t bl_SET, bool_t bl_RESET, bool_t* bl_Old_Output);
  uint32_t TASK_TIME(uint32_t* ui32_Old_Time);
  bool_t TON(bool_t bl_Input, uint32_t ui32_Timeout, TON_t* TON_DATA);
  bool_t TOF(bool_t bl_Input, uint32_t ui32_Timeout, TOF_t* TOF_DATA);
  bool_t TP(bool_t bl_Input, uint32_t ui32_Timeout, TP_t* TP_DATA);
  bool_t TIMER(uint32_t ui32_Timeout, TIMER_t* TIMER_DATA);
  bool_t KM_ENABLE_ERROR(bool_t bl_Command, bool_t bl_State, uint32_t ui32_Timeout, KM_ENABLE_ERROR_t* KM_ENABLE_ERROR_DATA);
  bool_t KM_CURRENT_LIMIT(bool_t bl_Ilim_Warning, int8_t i8_Max_Count, uint32_t ui32_Timeout, KM_CURRENT_LIMIT_t* KM_CURRENT_LIMIT_DATA);
  uint8_t NUM16_TO_BYTE(uint8_t ui8_Input);
  void INT_TO_UNICODE(uint32_t value, uint8_t * pbuf, uint8_t len);
  void GET_SERIAL_NUM(void);
  void JumpToBootloader(void);
  uint8_t EPRO_BCD2TOBYTE(uint8_t number);

  /******************************************************************************
   *     Defines Check
   ******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* EPRO_LIBRARY_H_ */
