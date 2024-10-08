/******************************************************************************
 *     Include
 ******************************************************************************/
#include "main_config.h"
#include <module_bzk_manager.h>


/******************************************************************************
 *     Defines
 ******************************************************************************/

/******************************************************************************
 *     Globals
 ******************************************************************************/
MODULE_BZK_RX_t MODULE_BZK_RX;
MODULE_BZK_TX_t MODULE_BZK_TX;

/******************************************************************************
 *     Function Prototypes
 ******************************************************************************/

/******************************************************************************
 * Function Name: MODULE_BZK_RX_MANAGER
 * Description: Преобразование принятых данных
 ******************************************************************************/
bool_t MODULE_BZK_RX_MANAGER(CAN_MESSAGE_t* CAN_MESSAGE_RX, CAN_BUFFER_TX_t* CAN_BUFFER_TX)
{

  int16_t  i16_Index;

  if (CAN_MESSAGE_RX->bl_IDE)
  {
        if (
            (
                (CAN_MESSAGE_RX->ui32_ID == 0x00010200UL) ||
                (CAN_MESSAGE_RX->ui32_ID == 0x00010210UL)
            ) &&
            (!CAN_MESSAGE_RX->bl_RTR)
        )

        {
          MODULE_BZK_RX.ui8_CAN_Message_Counter = (MODULE_BZK_RX.ui8_CAN_Message_Counter + 1);

          //DATA 0
          MODULE_BZK_RX.bl_QF1 = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[0U], 0);
          MODULE_BZK_RX.bl_QF2 = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[0U], 1);
          MODULE_BZK_RX.bl_QF3 = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[0U], 2);
          MODULE_BZK_RX.bl_QF4 = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[0U], 3);


          //DATA 1
          MODULE_BZK_RX.bl_XP4_7_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[1U], 0);
          MODULE_BZK_RX.bl_XP4_8_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[1U], 1);
          MODULE_BZK_RX.bl_XP4_2_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[1U], 2);
          MODULE_BZK_RX.bl_XP4_3_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[1U], 3);
          MODULE_BZK_RX.bl_XP4_4_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[1U], 4);
          MODULE_BZK_RX.bl_XP4_5_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[1U], 5);
          MODULE_BZK_RX.bl_XP4_6_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[1U], 6);
          MODULE_BZK_RX.bl_XP8_1_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[1U], 7);


          //DATA 2
          MODULE_BZK_RX.bl_XP4_1_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[2U], 0);
          MODULE_BZK_RX.bl_XP8_2_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[2U], 1);
          MODULE_BZK_RX.bl_XP7_1_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[2U], 2);
          MODULE_BZK_RX.bl_XP7_2_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[2U], 3);
          MODULE_BZK_RX.bl_XP4_9_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[2U], 4);
          MODULE_BZK_RX.bl_XP4_10_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[2U], 5);
          MODULE_BZK_RX.bl_XP4_11_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[2U], 6);
          MODULE_BZK_RX.bl_XP4_12_OUT = EPRO_Test_Bit(CAN_MESSAGE_RX->ui8_Data[2U], 7);


          return FALSE;
        }
        if (
               (
                   (CAN_MESSAGE_RX->ui32_ID == 0x00006810UL) ||
                   (CAN_MESSAGE_RX->ui32_ID == 0x00006811UL)
               ) &&
               (CAN_MESSAGE_RX->bl_RTR)
           )

           {
             // i16_Index - количество ячеек в буфере доступных для отправки.
             // (PROJECT_CAN_BUFFER_TX_SIZE - 1) <= одна ячейка в буфере остаётся не доступной для отправки, что бы после записи (ui16_Buffer_End != ui16_Buffer_Start).
             if (CAN_BUFFER_TX->ui16_Buffer_End >= CAN_BUFFER_TX->ui16_Buffer_Start)
             {
               i16_Index = (PROJECT_CAN_BUFFER_TX_SIZE - 1 - (CAN_BUFFER_TX->ui16_Buffer_End - CAN_BUFFER_TX->ui16_Buffer_Start));
             }
             else
             {
               i16_Index = (PROJECT_CAN_BUFFER_TX_SIZE - 1 - (CAN_BUFFER_TX->ui16_Buffer_End - CAN_BUFFER_TX->ui16_Buffer_Start + PROJECT_CAN_BUFFER_TX_SIZE));
             }
             if (i16_Index >= 1)
             {
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].bl_RTR = FALSE;
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].bl_IDE = TRUE;
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui32_ID = (CAN_MESSAGE_RX->ui32_ID);
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_DLC = 8;

               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[0U] = INT_TO_UINT8(SHR(PROJECT_DATA, 8) & 0x000000FF); // Месяц выпуска прошивки
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[1U] = INT_TO_UINT8(PROJECT_DATA & 0x000000FF); // День выпуска прошивки
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[2U] = INT_TO_UINT8((SHR(PROJECT_DATA, 16) & 0x000000FF)); // Год выпуска прошивки
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[3U] = 0x00; // Час выпуска прошивки
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[4U] = 0x00; // Минута выпуска прошивки
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[5U] = 0x67; // Аппаратная версия платы
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[6U] = 0x34; //CRC ID процессора
               CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[7U] = 0x74; //

               CAN_BUFFER_TX->ui16_Buffer_End = (CAN_BUFFER_TX->ui16_Buffer_End + 1);
               if (CAN_BUFFER_TX->ui16_Buffer_End >= PROJECT_CAN_BUFFER_TX_SIZE)
               {
                 CAN_BUFFER_TX->ui16_Buffer_End = 0;
               }
              }

               return FALSE;
            }
   }
  return TRUE;
}

/******************************************************************************
 * Function Name: MODULE_BZK_TX_MANAGER
 * Description: Подготовка отправляемых данных
 ******************************************************************************/
void MODULE_BZK_TX_MANAGER(bool_t bl_Enable, CAN_BUFFER_TX_t* CAN_BUFFER_TX)
{
  int16_t  i16_Index;

  if (bl_Enable)
  {
    // i16_Index - количество ячеек в буфере доступных для отправки.
    // (PROJECT_CAN_BUFFER_TX_SIZE - 1) <= одна ячейка в буфере остаётся не доступной для отправки, что бы после записи (ui16_Buffer_End != ui16_Buffer_Start).
    if (CAN_BUFFER_TX->ui16_Buffer_End >= CAN_BUFFER_TX->ui16_Buffer_Start)
    {
      i16_Index = (PROJECT_CAN_BUFFER_TX_SIZE - 1 - (CAN_BUFFER_TX->ui16_Buffer_End - CAN_BUFFER_TX->ui16_Buffer_Start));
    }
    else
    {
      i16_Index = (PROJECT_CAN_BUFFER_TX_SIZE - 1 - (CAN_BUFFER_TX->ui16_Buffer_End - CAN_BUFFER_TX->ui16_Buffer_Start + PROJECT_CAN_BUFFER_TX_SIZE));
    }
    if (i16_Index >= 1)
    {
      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].bl_RTR = FALSE;
      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].bl_IDE = TRUE;
      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui32_ID = 0x00006800UL;
      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_DLC = 8;

      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[0U] = (
          INT_TO_UINT8(MODULE_BZK_TX.bl_XP2_9_IN) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP2_5_IN), 1) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP2_10_IN), 2) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP2_6_IN), 3) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP2_7_IN), 4) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP2_8_IN), 5) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP2_2_IN), 6) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP2_3_IN), 7)
      );
      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[1U] = (
          INT_TO_UINT8(MODULE_BZK_TX.bl_XP2_4_IN) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP11_1_IN), 1) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP11_2_IN), 2) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP11_3_IN), 3) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_11_IN), 4) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_12_IN), 5) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_13_IN), 6) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_14_IN), 7)
      );

      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[2U] = (
          INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_7_OUT) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_8_OUT), 1) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_2_OUT), 2) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_3_OUT), 3) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_4_OUT), 4) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_5_OUT), 5) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_6_OUT), 6) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP8_1_OUT), 7)
      );

      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[3U] = (
          INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_1_OUT) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP8_2_OUT), 1) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_9_OUT), 2) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_10_OUT), 3) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_11_OUT), 4) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP4_12_OUT), 5) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP10_2_OUT), 6) |
          SHL(INT_TO_UINT8(1), 7)
      );

      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[4U] = (
          INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_3_OUT) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_4_OUT), 1) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_5_OUT), 2) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_6_OUT), 3) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_7_OUT), 4) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_8_OUT), 5) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_9_OUT), 6) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP9_10_OUT), 7)
      );

      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[5U] = (
          INT_TO_UINT8(MODULE_BZK_TX.bl_XP7_1_OUT) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP7_2_OUT), 1) |
          SHL(INT_TO_UINT8(0), 2) |
          SHL(INT_TO_UINT8(0), 3) |
          SHL(INT_TO_UINT8(0), 4) |
          SHL(INT_TO_UINT8(0), 5) |
          SHL(INT_TO_UINT8(0), 6) |
          SHL(INT_TO_UINT8(0), 7)
      );


      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[6U] = 0xFF;
      CAN_BUFFER_TX->Message[CAN_BUFFER_TX->ui16_Buffer_End].ui8_Data[7U] = (
          INT_TO_UINT8(MODULE_BZK_TX.bl_XP7_3_IN) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP7_4_IN), 1) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP7_6_IN), 2) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP2_1_IN), 3) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP8_3_IN), 4) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP8_4_IN), 5) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP8_6_IN), 6) |
          SHL(INT_TO_UINT8(MODULE_BZK_TX.bl_XP11_4_IN), 7)
      );

      CAN_BUFFER_TX->ui16_Buffer_End = (CAN_BUFFER_TX->ui16_Buffer_End + 1);
      if (CAN_BUFFER_TX->ui16_Buffer_End >= PROJECT_CAN_BUFFER_TX_SIZE)
      {
        CAN_BUFFER_TX->ui16_Buffer_End = 0;
      }
    }
  }
}
