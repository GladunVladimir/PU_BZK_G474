#ifndef MODULE_BZK_MANAGER_H_
#define MODULE_BZK_MANAGER_H_

#ifdef __cplusplus
extern "C" {
#endif

  /******************************************************************************
   *     Include
   ******************************************************************************/

  /******************************************************************************
   *     Peripherals
   ******************************************************************************/

  /******************************************************************************
   *     Integer Constants
   ******************************************************************************/

  /******************************************************************************
   *     Defines
   ******************************************************************************/

  /******************************************************************************
   *     Data Types
   ******************************************************************************/
typedef  struct
{
  uint8_t  ui8_CAN_Message_Counter;                // Счётчик принятых CAN-сообщений
  bool_t bl_XP4_1_OUT;
  bool_t bl_XP4_2_OUT;
  bool_t bl_XP4_3_OUT;
  bool_t bl_XP4_4_OUT;
  bool_t bl_XP4_5_OUT;
  bool_t bl_XP4_6_OUT;
  bool_t bl_XP4_7_OUT;
  bool_t bl_XP4_8_OUT;
  bool_t bl_XP4_9_OUT;
  bool_t bl_XP4_10_OUT;
  bool_t bl_XP4_11_OUT;
  bool_t bl_XP4_12_OUT;
  bool_t bl_XP7_1_OUT;
  bool_t bl_XP7_2_OUT;
  bool_t bl_XP8_1_OUT;
  bool_t bl_XP8_2_OUT;
  bool_t   bl_QF1;                                 // QF1 Вкл.
  bool_t   bl_QF2;                                 // QF2 Вкл.
  bool_t   bl_QF3;                                 // QF3 Вкл.
  bool_t   bl_QF4;                                 // QF4 Вкл.


//  bool_t   bl_QF1;                                 // QF1 Вкл.
//  bool_t   bl_QF2;                                 // QF2 Вкл.
//  bool_t   bl_QF3;                                 // QF3 Вкл.
//  bool_t   bl_QF4;                                 // QF4 Вкл.
//  bool_t   bl_KM1;                                 // КМ1 Вкл.
//  bool_t   bl_KM2;                                 // КМ2 Вкл.
//  bool_t   bl_KM3;                                 // КМ3 Вкл.
//  bool_t   bl_KM4;                                 // КМ4 Вкл.
//  bool_t   bl_KM5;                                 // КМ5 Вкл.
//  bool_t   bl_KM6;                                 // КМ6 Вкл.
//  bool_t   bl_KM7;                                 // КМ7 Вкл.
//  bool_t   bl_KM8;                                 // КМ8 Вкл.
//  bool_t   bl_KL1;                                 // КL1 Вкл. (0 сек.)
//  bool_t   bl_KL2;                                 // КL2 Вкл. (5 сек.)
//  bool_t   bl_KL3;                                 // КL3 Вкл. (0 сек.)
//  bool_t   bl_KL4;                                 // КL4 Вкл. (5 сек.)
//  bool_t   bl_AVDU1;                               // АВДУ1
//  bool_t   bl_AVDU2;                               // АВДУ2
//  bool_t   bl_PPN1;                                // ППН1
//  bool_t   bl_PPN2;                                // ППН2
//  bool_t   bl_PPN3;                                // ППН3

}MODULE_BZK_RX_t;

typedef  struct
{
//  bool_t   bl_XP2_9_IN;                                // Состояние входа XP2:9 (АВДУ1)
//  bool_t   bl_XP2_10_IN;                               // Состояние входа XP2:10 (АВДУ2)
//  bool_t   bl_XP2_7_IN;                                // Состояние входа XP2:7 (КМ7)
//  bool_t   bl_XP2_8_IN;                                // Состояние входа XP2:8 (КМ8)
//  bool_t   bl_XP11_1_IN;                               // Состояние входа XP11:1 (ППН1)
//  bool_t   bl_XP11_2_IN;                               // Состояние входа XP11:2 (ППН2)
//  bool_t   bl_XP11_3_IN;                               // Состояние входа XP11:3 (ППН3)
//  bool_t   bl_XP9_11_IN;                               // Состояние входа XP9:11 (QF1)
//  bool_t   bl_XP9_12_IN;                               // Состояние входа XP9:12 (QF2)
//  bool_t   bl_XP9_13_IN;                               // Состояние входа XP9:13 (QF3)
//  bool_t   bl_XP9_14_IN;                               // Состояние входа XP9:14 (QF4)
//  bool_t   bl_XP4_7_OUT;                               // Контроль состояния выхода XP4:7 (КМ7)
//  bool_t   bl_XP4_8_OUT;                               // Контроль состояния выхода XP4:8 (KM8)
//  bool_t   bl_XP4_2_OUT;                               // Контроль состояния выхода XP4:2 (KM2)
//  bool_t   bl_XP4_3_OUT;                               // Контроль состояния выхода XP4:3 (KM3)
//  bool_t   bl_XP4_4_OUT;                               // Контроль состояния выхода XP4:4 (KM4)
//  bool_t   bl_XP4_5_OUT;                               // Контроль состояния выхода XP4:5 (KM5)
//  bool_t   bl_XP4_6_OUT;                               // Контроль состояния выхода XP4:6 (KM6)
//  bool_t   bl_XP4_1_OUT;                               // Контроль состояния выхода XP4:1 (KM1)
//  bool_t   bl_XP4_9_OUT;                               // Контроль состояния выхода XP4:9 (KL1)
//  bool_t   bl_XP4_10_OUT;                              // Контроль состояния выхода XP4:10 (KL2)
//  bool_t   bl_XP4_11_OUT;                              // Контроль состояния выхода XP4:11 (KL3)
//  bool_t   bl_XP4_12_OUT;                              // Контроль состояния выхода XP4:12 (KL4)
//  bool_t   bl_XP10_2_OUT;                              // Контроль состояния выхода XP10:2 (QF защита)
//  bool_t   bl_XP9_3_OUT;                               // Контроль состояния выхода XP9:3 (QF1 вкл.)
//  bool_t   bl_XP9_4_OUT;                               // Контроль состояния выхода XP9:4 (QF1 откл.)
//  bool_t   bl_XP9_5_OUT;                               // Контроль состояния выхода XP9:5 (QF2 вкл.)
//  bool_t   bl_XP9_6_OUT;                               // Контроль состояния выхода XP9:6 (QF2 откл.)
//  bool_t   bl_XP9_7_OUT;                               // Контроль состояния выхода XP9:7 (QF3 вкл.)
//  bool_t   bl_XP9_8_OUT;                               // Контроль состояния выхода XP9:8 (QF3 откл.)
//  bool_t   bl_XP9_9_OUT;                               // Контроль состояния выхода XP9:9 (QF4 вкл.)
//  bool_t   bl_XP9_10_OUT;                              // Контроль состояния выхода XP9:10 (QF4 откл.)


  bool_t bl_XP4_1_OUT;
  bool_t bl_XP4_2_OUT;
  bool_t bl_XP4_3_OUT;
  bool_t bl_XP4_4_OUT;
  bool_t bl_XP4_5_OUT;
  bool_t bl_XP4_6_OUT;
  bool_t bl_XP4_7_OUT;
  bool_t bl_XP4_8_OUT;
  bool_t bl_XP4_9_OUT;
  bool_t bl_XP4_10_OUT;
  bool_t bl_XP4_11_OUT;
  bool_t bl_XP4_12_OUT;
  bool_t bl_XP7_1_OUT;
  bool_t bl_XP7_2_OUT;
  bool_t bl_XP8_1_OUT;
  bool_t bl_XP8_2_OUT;
  bool_t bl_XP9_3_OUT;
  bool_t bl_XP9_4_OUT;
  bool_t bl_XP9_5_OUT;
  bool_t bl_XP9_6_OUT;
  bool_t bl_XP9_7_OUT;
  bool_t bl_XP9_8_OUT;
  bool_t bl_XP9_9_OUT;
  bool_t bl_XP9_10_OUT;
  bool_t bl_XP10_2_OUT;

  bool_t bl_XP2_1_IN;
  bool_t bl_XP2_2_IN;
  bool_t bl_XP2_3_IN;
  bool_t bl_XP2_4_IN;
  bool_t bl_XP2_5_IN;
  bool_t bl_XP2_6_IN;
  bool_t bl_XP2_7_IN;
  bool_t bl_XP2_8_IN;
  bool_t bl_XP2_9_IN;
  bool_t bl_XP2_10_IN;
  bool_t bl_XP7_3_IN;
  bool_t bl_XP7_4_IN;
  bool_t bl_XP7_6_IN;
  bool_t bl_XP8_3_IN;
  bool_t bl_XP8_4_IN;
  bool_t bl_XP8_6_IN;
  bool_t bl_XP9_11_IN;
  bool_t bl_XP9_12_IN;
  bool_t bl_XP9_13_IN;
  bool_t bl_XP9_14_IN;
  bool_t bl_XP11_1_IN;
  bool_t bl_XP11_2_IN;
  bool_t bl_XP11_3_IN;
  bool_t bl_XP11_4_IN;
}MODULE_BZK_TX_t;

  /******************************************************************************
   *     Function Prototypes
   ******************************************************************************/
  bool_t MODULE_BZK_RX_MANAGER(CAN_MESSAGE_t* CAN_MESSAGE_RX, CAN_BUFFER_TX_t* CAN_BUFFER_TX);
  void MODULE_BZK_TX_MANAGER(bool_t bl_Enable, CAN_BUFFER_TX_t* CAN_BUFFER_TX);

  /******************************************************************************
   *     Defines Check
   ******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* MODULE_BZK_MANAGER_H_ */
