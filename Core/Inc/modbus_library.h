// 2024-05-19
#ifndef MODBUS_LIBRARY_H_
#define MODBUS_LIBRARY_H_

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
#define uint8_Pointer(Var)                                (uint8_t*)&(Var)
#define uint16_Pointer(Var)                               (uint16_t*)&(Var)

  /******************************************************************************
   *     Data Types
   ******************************************************************************/
  typedef enum
  {
    MODBUS_NO_ERROR,                                      // Нет ошибок
    MODBUS_ILLEGAL_FUNCTION,                              // Функция отсутствует
    MODBUS_ILLEGAL_DATA_ADDRESS,                          // Ошибка в параметрах адресации
    MODBUS_ILLEGAL_DATA_VALUE,                            // Ошибка в параметрах характеризующих значение
    MODBUS_SERVER_DEVICE_FAILURE                          // Неустранимая ошибка при обработке запроса
  }MODBUS_ERROR_t;

  typedef enum
  {
    MODBUS_PASSIVE,                                       // Работа с принятой информацией в фоновом цикле
    MODBUS_RECEIVING,                                     // Приём
    MODBUS_TRANSMITING,                                   // Передача
    MODBUS_WAITING                                        // Ожидание
  }MODBUS_STATUS_t;

  /******************************************************************************
   *     Function Prototypes
   ******************************************************************************/
  uint8_t Modbus_Read_Discrete_Inputs(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count);
  uint8_t Modbus_Read_Coils(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count);
  uint8_t Modbus_Read_Input_Register(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count);
  uint8_t Modbus_Read_Holding_Register(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count);
  uint8_t Modbus_Write_Single_Register(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count);
  uint8_t Modbus_Write_Multiple_Register(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count);
  uint8_t Modbus_Read_Write_Multiple_Registers(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count);

  /******************************************************************************
   *     Defines Check
   ******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* MODBUS_LIBRARY_H_ */
