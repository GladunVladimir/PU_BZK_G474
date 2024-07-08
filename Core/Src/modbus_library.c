// 2024-05-19
/******************************************************************************
 *     Include
 ******************************************************************************/
#include "main_config.h"
#include "modbus_library.h"

/******************************************************************************
 *     Defines
 ******************************************************************************/

/******************************************************************************
 *     Globals
 ******************************************************************************/
#if (bl_Modbus_Slave_Use_1 != 0)
uint8_t ui8_Modbus_Discrete_Inputs_Data_1[Modbus_Slave_Discrete_Inputs_Count_1];

uint8_t * const ui8_Modbus_Discrete_Inputs_1[Modbus_Slave_Discrete_Inputs_Count_1] = {
    uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[0U])      /* 10001 */
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 1U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[1U])    /* 10002 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 2U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[2U])    /* 10003 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 3U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[3U])    /* 10004 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 4U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[4U])    /* 10005 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 5U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[5U])    /* 10006 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 6U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[6U])    /* 10007 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 7U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[7U])    /* 10008 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 8U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[8U])    /* 10009 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 9U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[9U])    /* 10010 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 10U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[10U])   /* 10011 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 11U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[11U])   /* 10012 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 12U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[12U])   /* 10013 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 13U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[13U])   /* 10014 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 14U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[14U])   /* 10015 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 15U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[15U])   /* 10016 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 16U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[16U])   /* 10017 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 17U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[17U])   /* 10018 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 18U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[18U])   /* 10019 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 19U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[19U])   /* 10020 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 20U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[20U])   /* 10021 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 21U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[21U])   /* 10022 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 22U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[22U])   /* 10023 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 23U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[23U])   /* 10024 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 24U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[24U])   /* 10025 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 25U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[25U])   /* 10026 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 26U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[26U])   /* 10027 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 27U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[27U])   /* 10028 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 28U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[28U])   /* 10029 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 29U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[29U])   /* 10030 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 30U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[30U])   /* 10031 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 31U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[31U])   /* 10032 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 32U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[32U])   /* 10033 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 33U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[33U])   /* 10034 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 34U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[34U])   /* 10035 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 35U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[35U])   /* 10036 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 36U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[36U])   /* 10037 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 37U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[37U])   /* 10038 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 38U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[38U])   /* 10039 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 39U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[39U])   /* 10040 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 40U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[40U])   /* 10041 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 41U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[41U])   /* 10042 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 42U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[42U])   /* 10043 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 43U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[43U])   /* 10044 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 44U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[44U])   /* 10045 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 45U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[45U])   /* 10046 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 46U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[46U])   /* 10047 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 47U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[47U])   /* 10048 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 48U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[48U])   /* 10049 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 49U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[49U])   /* 10050 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 50U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[50U])   /* 10051 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 51U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[51U])   /* 10052 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 52U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[52U])   /* 10053 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 53U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[53U])   /* 10054 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 54U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[54U])   /* 10055 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 55U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[55U])   /* 10056 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 56U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[56U])   /* 10057 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 57U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[57U])   /* 10058 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 58U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[58U])   /* 10059 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 59U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[59U])   /* 10060 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 60U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[60U])   /* 10061 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 61U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[61U])   /* 10062 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 62U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[62U])   /* 10063 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 63U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[63U])   /* 10064 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 64U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[64U])   /* 10065 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 65U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[65U])   /* 10066 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 66U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[66U])   /* 10067 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 67U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[67U])   /* 10068 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 68U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[68U])   /* 10069 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 69U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[69U])   /* 10070 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 70U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[70U])   /* 10071 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 71U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[71U])   /* 10072 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 72U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[72U])   /* 10073 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 73U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[73U])   /* 10074 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 74U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[74U])   /* 10075 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 75U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[75U])   /* 10076 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 76U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[76U])   /* 10077 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 77U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[77U])   /* 10078 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 78U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[78U])   /* 10079 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 79U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[79U])   /* 10080 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 80U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[80U])   /* 10081 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 81U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[81U])   /* 10082 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 82U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[82U])   /* 10083 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 83U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[83U])   /* 10084 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 84U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[84U])   /* 10085 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 85U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[85U])   /* 10086 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 86U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[86U])   /* 10087 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 87U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[87U])   /* 10088 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 88U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[88U])   /* 10089 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 89U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[89U])   /* 10090 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 90U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[90U])   /* 10091 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 91U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[91U])   /* 10092 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 92U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[92U])   /* 10093 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 93U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[93U])   /* 10094 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 94U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[94U])   /* 10095 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 95U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[95U])   /* 10096 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 96U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[96U])   /* 10097 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 97U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[97U])   /* 10098 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 98U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[98U])   /* 10099 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 99U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[99U])   /* 10040 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 100U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[100U])  /* 10101 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 101U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[101U])  /* 10102 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 102U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[102U])  /* 10103 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 103U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[103U])  /* 10104 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 104U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[104U])  /* 10105 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 105U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[105U])  /* 10106 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 106U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[106U])  /* 10107 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 107U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[107U])  /* 10108 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 108U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[108U])  /* 10109 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 109U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[109U])  /* 10110 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 110U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[110U])  /* 10111 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 111U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[111U])  /* 10112 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 112U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[112U])  /* 10113 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 113U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[113U])  /* 10114 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 114U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[114U])  /* 10115 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 115U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[115U])  /* 10116 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 116U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[116U])  /* 10117 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 117U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[117U])  /* 10118 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 118U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[118U])  /* 10119 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 119U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[119U])  /* 10120 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 120U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[120U])  /* 10121 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 121U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[121U])  /* 10122 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 122U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[122U])  /* 10123 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 123U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[123U])  /* 10124 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 124U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[124U])  /* 10125 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 125U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[125U])  /* 10126 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 126U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[126U])  /* 10127 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 127U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[127U])  /* 10128 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 128U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[128U])  /* 10129 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 129U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[129U])  /* 10130 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 130U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[130U])  /* 10131 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 131U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[131U])  /* 10132 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 132U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[132U])  /* 10133 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 133U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[133U])  /* 10134 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 134U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[134U])  /* 10135 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 135U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[135U])  /* 10136 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 136U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[136U])  /* 10137 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 137U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[137U])  /* 10138 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 138U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[138U])  /* 10139 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 139U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[139U])  /* 10140 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 140U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[140U])  /* 10141 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 141U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[141U])  /* 10142 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 142U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[142U])  /* 10143 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 143U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[143U])  /* 10144 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 144U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[144U])  /* 10145 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 145U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[145U])  /* 10146 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 146U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[146U])  /* 10147 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 147U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[147U])  /* 10148 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 148U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[148U])  /* 10149 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 149U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[149U])  /* 10150 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 150U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[150U])  /* 10151 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 151U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[151U])  /* 10152 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 152U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[152U])  /* 10153 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 153U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[153U])  /* 10154 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 154U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[154U])  /* 10155 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 155U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[155U])  /* 10156 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 156U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[156U])  /* 10157 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 157U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[157U])  /* 10158 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 158U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[158U])  /* 10159 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 159U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[159U])  /* 10160 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 160U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[160U])  /* 10161 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 161U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[161U])  /* 10162 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 162U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[162U])  /* 10163 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 163U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[163U])  /* 10164 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 164U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[164U])  /* 10165 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 165U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[165U])  /* 10166 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 166U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[166U])  /* 10167 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 167U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[167U])  /* 10168 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 168U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[168U])  /* 10169 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 169U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[169U])  /* 10170 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 170U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[170U])  /* 10171 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 171U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[171U])  /* 10172 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 172U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[172U])  /* 10173 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 173U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[173U])  /* 10174 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 174U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[174U])  /* 10175 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 175U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[175U])  /* 10176 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 176U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[176U])  /* 10177 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 177U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[177U])  /* 10178 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 178U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[178U])  /* 10179 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 179U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[179U])  /* 10180 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 180U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[180U])  /* 10181 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 181U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[181U])  /* 10182 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 182U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[182U])  /* 10183 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 183U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[183U])  /* 10184 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 184U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[184U])  /* 10185 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 185U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[185U])  /* 10186 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 186U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[186U])  /* 10187 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 187U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[187U])  /* 10188 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 188U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[188U])  /* 10189 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 189U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[189U])  /* 10190 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 190U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[190U])  /* 10191 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 191U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[191U])  /* 10192 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 192U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[192U])  /* 10193 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 193U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[193U])  /* 10194 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 194U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[194U])  /* 10195 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 195U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[195U])  /* 10196 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 196U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[196U])  /* 10197 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 197U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[197U])  /* 10198 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 198U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[198U])  /* 10199 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 199U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[199U])  /* 10200 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 200U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[200U])  /* 10201 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 201U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[201U])  /* 10202 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 202U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[202U])  /* 10203 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 203U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[203U])  /* 10204 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 204U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[204U])  /* 10205 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 205U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[205U])  /* 10206 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 206U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[206U])  /* 10207 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 207U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[207U])  /* 10208 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 208U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[208U])  /* 10209 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 209U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[209U])  /* 10210 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 210U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[210U])  /* 10211 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 211U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[211U])  /* 10212 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 212U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[212U])  /* 10213 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 213U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[213U])  /* 10214 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 214U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[214U])  /* 10215 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 215U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[215U])  /* 10216 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 216U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[216U])  /* 10217 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 217U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[217U])  /* 10218 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 218U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[218U])  /* 10219 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 219U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[219U])  /* 10220 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 220U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[220U])  /* 10221 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 221U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[221U])  /* 10222 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 222U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[222U])  /* 10223 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 223U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[223U])  /* 10224 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 224U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[224U])  /* 10225 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 225U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[225U])  /* 10226 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 226U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[226U])  /* 10227 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 227U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[227U])  /* 10228 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 228U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[228U])  /* 10229 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 229U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[229U])  /* 10230 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 230U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[230U])  /* 10231 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 231U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[231U])  /* 10232 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 232U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[232U])  /* 10233 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 233U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[233U])  /* 10234 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 234U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[234U])  /* 10235 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 235U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[235U])  /* 10236 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 236U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[236U])  /* 10237 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 237U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[237U])  /* 10238 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 238U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[238U])  /* 10239 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 239U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[239U])  /* 10240 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 240U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[240U])  /* 10241 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 241U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[241U])  /* 10242 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 242U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[242U])  /* 10243 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 243U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[243U])  /* 10244 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 244U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[244U])  /* 10245 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 245U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[245U])  /* 10246 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 246U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[246U])  /* 10247 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 247U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[247U])  /* 10248 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 248U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[248U])  /* 10249 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 249U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[249U])  /* 10250 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 250U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[250U])  /* 10251 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 251U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[251U])  /* 10252 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 252U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[252U])  /* 10253 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 253U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[253U])  /* 10254 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 254U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[254U])  /* 10255 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 255U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[255U])  /* 10256 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 256U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[256U])  /* 10257 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 257U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[257U])  /* 10258 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 258U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[258U])  /* 10259 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 259U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[259U])  /* 10260 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 260U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[260U])  /* 10261 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 261U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[261U])  /* 10262 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 262U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[262U])  /* 10263 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 263U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[263U])  /* 10264 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 264U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[264U])  /* 10265 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 265U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[265U])  /* 10266 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 266U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[266U])  /* 10267 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 267U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[267U])  /* 10268 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 268U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[268U])  /* 10269 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 269U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[269U])  /* 10270 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 270U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[270U])  /* 10271 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 271U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[271U])  /* 10272 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 272U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[272U])  /* 10273 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 273U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[273U])  /* 10274 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 274U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[274U])  /* 10275 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 275U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[275U])  /* 10276 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 276U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[276U])  /* 10277 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 277U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[277U])  /* 10278 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 278U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[278U])  /* 10279 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 279U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[279U])  /* 10280 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 280U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[280U])  /* 10281 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 281U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[281U])  /* 10282 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 282U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[282U])  /* 10283 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 283U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[283U])  /* 10284 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 284U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[284U])  /* 10285 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 285U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[285U])  /* 10286 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 286U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[286U])  /* 10287 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 287U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[287U])  /* 10288 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 288U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[288U])  /* 10289 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 289U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[289U])  /* 10290 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 290U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[290U])  /* 10291 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 291U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[291U])  /* 10292 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 292U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[292U])  /* 10293 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 293U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[293U])  /* 10294 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 294U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[294U])  /* 10295 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 295U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[295U])  /* 10296 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 296U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[296U])  /* 10297 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 297U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[297U])  /* 10298 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 298U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[298U])  /* 10299 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_1 > 299U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_1[299U])  /* 10300 */
#endif
};

#if (Modbus_Slave_Discrete_Inputs_Count_1 > 300U)
#error Modbus_Slave_Discrete_Inputs_Count_1 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_2 != 0)
uint8_t ui8_Modbus_Discrete_Inputs_Data_2[Modbus_Slave_Discrete_Inputs_Count_2];

uint8_t * const ui8_Modbus_Discrete_Inputs_2[Modbus_Slave_Discrete_Inputs_Count_2] = {
    uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[0U])      /* 10001 */
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 1U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[1U])    /* 10002 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 2U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[2U])    /* 10003 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 3U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[3U])    /* 10004 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 4U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[4U])    /* 10005 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 5U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[5U])    /* 10006 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 6U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[6U])    /* 10007 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 7U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[7U])    /* 10008 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 8U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[8U])    /* 10009 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 9U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[9U])    /* 10010 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 10U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[10U])   /* 10011 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 11U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[11U])   /* 10012 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 12U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[12U])   /* 10013 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 13U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[13U])   /* 10014 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 14U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[14U])   /* 10015 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 15U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[15U])   /* 10016 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 16U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[16U])   /* 10017 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 17U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[17U])   /* 10018 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 18U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[18U])   /* 10019 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 19U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[19U])   /* 10020 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 20U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[20U])   /* 10021 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 21U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[21U])   /* 10022 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 22U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[22U])   /* 10023 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 23U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[23U])   /* 10024 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 24U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[24U])   /* 10025 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 25U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[25U])   /* 10026 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 26U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[26U])   /* 10027 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 27U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[27U])   /* 10028 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 28U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[28U])   /* 10029 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 29U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[29U])   /* 10030 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 30U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[30U])   /* 10031 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 31U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[31U])   /* 10032 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 32U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[32U])   /* 10033 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 33U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[33U])   /* 10034 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 34U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[34U])   /* 10035 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 35U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[35U])   /* 10036 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 36U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[36U])   /* 10037 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 37U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[37U])   /* 10038 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 38U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[38U])   /* 10039 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 39U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[39U])   /* 10040 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 40U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[40U])   /* 10041 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 41U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[41U])   /* 10042 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 42U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[42U])   /* 10043 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 43U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[43U])   /* 10044 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 44U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[44U])   /* 10045 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 45U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[45U])   /* 10046 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 46U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[46U])   /* 10047 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 47U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[47U])   /* 10048 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 48U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[48U])   /* 10049 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 49U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[49U])   /* 10050 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 50U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[50U])   /* 10051 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 51U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[51U])   /* 10052 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 52U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[52U])   /* 10053 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 53U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[53U])   /* 10054 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 54U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[54U])   /* 10055 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 55U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[55U])   /* 10056 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 56U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[56U])   /* 10057 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 57U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[57U])   /* 10058 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 58U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[58U])   /* 10059 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 59U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[59U])   /* 10060 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 60U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[60U])   /* 10061 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 61U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[61U])   /* 10062 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 62U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[62U])   /* 10063 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 63U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[63U])   /* 10064 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 64U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[64U])   /* 10065 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 65U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[65U])   /* 10066 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 66U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[66U])   /* 10067 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 67U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[67U])   /* 10068 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 68U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[68U])   /* 10069 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 69U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[69U])   /* 10070 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 70U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[70U])   /* 10071 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 71U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[71U])   /* 10072 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 72U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[72U])   /* 10073 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 73U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[73U])   /* 10074 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 74U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[74U])   /* 10075 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 75U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[75U])   /* 10076 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 76U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[76U])   /* 10077 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 77U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[77U])   /* 10078 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 78U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[78U])   /* 10079 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 79U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[79U])   /* 10080 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 80U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[80U])   /* 10081 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 81U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[81U])   /* 10082 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 82U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[82U])   /* 10083 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 83U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[83U])   /* 10084 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 84U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[84U])   /* 10085 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 85U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[85U])   /* 10086 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 86U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[86U])   /* 10087 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 87U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[87U])   /* 10088 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 88U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[88U])   /* 10089 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 89U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[89U])   /* 10090 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 90U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[90U])   /* 10091 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 91U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[91U])   /* 10092 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 92U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[92U])   /* 10093 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 93U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[93U])   /* 10094 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 94U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[94U])   /* 10095 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 95U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[95U])   /* 10096 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 96U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[96U])   /* 10097 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 97U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[97U])   /* 10098 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 98U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[98U])   /* 10099 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 99U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[99U])   /* 10040 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 100U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[100U])  /* 10101 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 101U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[101U])  /* 10102 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 102U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[102U])  /* 10103 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 103U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[103U])  /* 10104 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 104U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[104U])  /* 10105 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 105U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[105U])  /* 10106 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 106U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[106U])  /* 10107 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 107U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[107U])  /* 10108 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 108U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[108U])  /* 10109 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 109U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[109U])  /* 10110 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 110U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[110U])  /* 10111 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 111U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[111U])  /* 10112 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 112U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[112U])  /* 10113 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 113U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[113U])  /* 10114 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 114U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[114U])  /* 10115 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 115U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[115U])  /* 10116 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 116U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[116U])  /* 10117 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 117U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[117U])  /* 10118 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 118U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[118U])  /* 10119 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 119U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[119U])  /* 10120 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 120U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[120U])  /* 10121 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 121U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[121U])  /* 10122 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 122U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[122U])  /* 10123 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 123U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[123U])  /* 10124 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 124U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[124U])  /* 10125 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 125U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[125U])  /* 10126 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 126U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[126U])  /* 10127 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 127U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[127U])  /* 10128 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 128U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[128U])  /* 10129 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 129U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[129U])  /* 10130 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 130U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[130U])  /* 10131 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 131U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[131U])  /* 10132 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 132U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[132U])  /* 10133 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 133U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[133U])  /* 10134 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 134U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[134U])  /* 10135 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 135U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[135U])  /* 10136 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 136U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[136U])  /* 10137 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 137U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[137U])  /* 10138 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 138U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[138U])  /* 10139 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 139U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[139U])  /* 10140 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 140U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[140U])  /* 10141 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 141U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[141U])  /* 10142 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 142U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[142U])  /* 10143 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 143U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[143U])  /* 10144 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 144U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[144U])  /* 10145 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 145U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[145U])  /* 10146 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 146U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[146U])  /* 10147 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 147U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[147U])  /* 10148 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 148U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[148U])  /* 10149 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 149U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[149U])  /* 10150 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 150U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[150U])  /* 10151 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 151U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[151U])  /* 10152 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 152U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[152U])  /* 10153 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 153U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[153U])  /* 10154 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 154U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[154U])  /* 10155 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 155U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[155U])  /* 10156 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 156U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[156U])  /* 10157 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 157U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[157U])  /* 10158 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 158U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[158U])  /* 10159 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 159U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[159U])  /* 10160 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 160U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[160U])  /* 10161 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 161U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[161U])  /* 10162 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 162U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[162U])  /* 10163 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 163U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[163U])  /* 10164 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 164U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[164U])  /* 10165 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 165U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[165U])  /* 10166 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 166U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[166U])  /* 10167 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 167U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[167U])  /* 10168 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 168U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[168U])  /* 10169 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 169U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[169U])  /* 10170 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 170U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[170U])  /* 10171 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 171U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[171U])  /* 10172 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 172U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[172U])  /* 10173 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 173U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[173U])  /* 10174 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 174U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[174U])  /* 10175 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 175U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[175U])  /* 10176 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 176U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[176U])  /* 10177 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 177U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[177U])  /* 10178 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 178U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[178U])  /* 10179 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 179U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[179U])  /* 10180 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 180U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[180U])  /* 10181 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 181U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[181U])  /* 10182 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 182U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[182U])  /* 10183 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 183U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[183U])  /* 10184 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 184U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[184U])  /* 10185 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 185U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[185U])  /* 10186 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 186U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[186U])  /* 10187 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 187U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[187U])  /* 10188 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 188U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[188U])  /* 10189 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 189U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[189U])  /* 10190 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 190U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[190U])  /* 10191 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 191U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[191U])  /* 10192 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 192U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[192U])  /* 10193 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 193U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[193U])  /* 10194 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 194U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[194U])  /* 10195 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 195U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[195U])  /* 10196 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 196U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[196U])  /* 10197 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 197U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[197U])  /* 10198 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 198U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[198U])  /* 10199 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 199U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[199U])  /* 10200 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 200U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[200U])  /* 10201 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 201U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[201U])  /* 10202 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 202U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[202U])  /* 10203 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 203U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[203U])  /* 10204 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 204U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[204U])  /* 10205 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 205U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[205U])  /* 10206 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 206U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[206U])  /* 10207 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 207U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[207U])  /* 10208 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 208U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[208U])  /* 10209 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 209U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[209U])  /* 10210 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 210U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[210U])  /* 10211 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 211U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[211U])  /* 10212 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 212U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[212U])  /* 10213 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 213U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[213U])  /* 10214 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 214U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[214U])  /* 10215 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 215U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[215U])  /* 10216 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 216U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[216U])  /* 10217 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 217U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[217U])  /* 10218 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 218U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[218U])  /* 10219 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 219U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[219U])  /* 10220 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 220U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[220U])  /* 10221 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 221U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[221U])  /* 10222 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 222U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[222U])  /* 10223 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 223U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[223U])  /* 10224 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 224U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[224U])  /* 10225 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 225U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[225U])  /* 10226 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 226U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[226U])  /* 10227 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 227U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[227U])  /* 10228 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 228U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[228U])  /* 10229 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 229U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[229U])  /* 10230 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 230U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[230U])  /* 10231 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 231U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[231U])  /* 10232 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 232U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[232U])  /* 10233 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 233U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[233U])  /* 10234 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 234U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[234U])  /* 10235 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 235U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[235U])  /* 10236 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 236U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[236U])  /* 10237 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 237U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[237U])  /* 10238 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 238U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[238U])  /* 10239 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 239U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[239U])  /* 10240 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 240U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[240U])  /* 10241 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 241U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[241U])  /* 10242 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 242U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[242U])  /* 10243 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 243U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[243U])  /* 10244 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 244U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[244U])  /* 10245 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 245U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[245U])  /* 10246 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 246U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[246U])  /* 10247 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 247U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[247U])  /* 10248 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 248U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[248U])  /* 10249 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 249U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[249U])  /* 10250 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 250U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[250U])  /* 10251 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 251U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[251U])  /* 10252 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 252U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[252U])  /* 10253 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 253U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[253U])  /* 10254 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 254U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[254U])  /* 10255 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 255U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[255U])  /* 10256 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 256U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[256U])  /* 10257 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 257U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[257U])  /* 10258 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 258U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[258U])  /* 10259 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 259U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[259U])  /* 10260 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 260U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[260U])  /* 10261 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 261U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[261U])  /* 10262 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 262U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[262U])  /* 10263 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 263U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[263U])  /* 10264 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 264U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[264U])  /* 10265 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 265U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[265U])  /* 10266 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 266U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[266U])  /* 10267 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 267U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[267U])  /* 10268 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 268U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[268U])  /* 10269 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 269U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[269U])  /* 10270 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 270U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[270U])  /* 10271 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 271U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[271U])  /* 10272 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 272U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[272U])  /* 10273 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 273U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[273U])  /* 10274 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 274U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[274U])  /* 10275 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 275U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[275U])  /* 10276 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 276U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[276U])  /* 10277 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 277U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[277U])  /* 10278 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 278U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[278U])  /* 10279 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 279U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[279U])  /* 10280 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 280U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[280U])  /* 10281 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 281U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[281U])  /* 10282 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 282U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[282U])  /* 10283 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 283U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[283U])  /* 10284 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 284U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[284U])  /* 10285 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 285U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[285U])  /* 10286 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 286U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[286U])  /* 10287 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 287U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[287U])  /* 10288 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 288U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[288U])  /* 10289 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 289U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[289U])  /* 10290 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 290U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[290U])  /* 10291 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 291U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[291U])  /* 10292 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 292U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[292U])  /* 10293 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 293U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[293U])  /* 10294 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 294U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[294U])  /* 10295 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 295U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[295U])  /* 10296 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 296U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[296U])  /* 10297 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 297U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[297U])  /* 10298 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 298U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[298U])  /* 10299 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_2 > 299U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_2[299U])  /* 10300 */
#endif
};

#if (Modbus_Slave_Discrete_Inputs_Count_2 > 300U)
#error Modbus_Slave_Discrete_Inputs_Count_2 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_3 != 0)
uint8_t ui8_Modbus_Discrete_Inputs_Data_3[Modbus_Slave_Discrete_Inputs_Count_3];

uint8_t * const ui8_Modbus_Discrete_Inputs_3[Modbus_Slave_Discrete_Inputs_Count_3] = {
    uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[0U])      /* 10001 */
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 1U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[1U])    /* 10002 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 2U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[2U])    /* 10003 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 3U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[3U])    /* 10004 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 4U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[4U])    /* 10005 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 5U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[5U])    /* 10006 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 6U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[6U])    /* 10007 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 7U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[7U])    /* 10008 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 8U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[8U])    /* 10009 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 9U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[9U])    /* 10010 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 10U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[10U])   /* 10011 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 11U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[11U])   /* 10012 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 12U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[12U])   /* 10013 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 13U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[13U])   /* 10014 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 14U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[14U])   /* 10015 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 15U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[15U])   /* 10016 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 16U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[16U])   /* 10017 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 17U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[17U])   /* 10018 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 18U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[18U])   /* 10019 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 19U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[19U])   /* 10020 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 20U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[20U])   /* 10021 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 21U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[21U])   /* 10022 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 22U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[22U])   /* 10023 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 23U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[23U])   /* 10024 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 24U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[24U])   /* 10025 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 25U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[25U])   /* 10026 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 26U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[26U])   /* 10027 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 27U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[27U])   /* 10028 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 28U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[28U])   /* 10029 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 29U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[29U])   /* 10030 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 30U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[30U])   /* 10031 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 31U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[31U])   /* 10032 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 32U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[32U])   /* 10033 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 33U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[33U])   /* 10034 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 34U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[34U])   /* 10035 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 35U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[35U])   /* 10036 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 36U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[36U])   /* 10037 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 37U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[37U])   /* 10038 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 38U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[38U])   /* 10039 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 39U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[39U])   /* 10040 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 40U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[40U])   /* 10041 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 41U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[41U])   /* 10042 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 42U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[42U])   /* 10043 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 43U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[43U])   /* 10044 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 44U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[44U])   /* 10045 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 45U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[45U])   /* 10046 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 46U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[46U])   /* 10047 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 47U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[47U])   /* 10048 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 48U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[48U])   /* 10049 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 49U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[49U])   /* 10050 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 50U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[50U])   /* 10051 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 51U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[51U])   /* 10052 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 52U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[52U])   /* 10053 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 53U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[53U])   /* 10054 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 54U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[54U])   /* 10055 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 55U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[55U])   /* 10056 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 56U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[56U])   /* 10057 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 57U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[57U])   /* 10058 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 58U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[58U])   /* 10059 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 59U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[59U])   /* 10060 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 60U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[60U])   /* 10061 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 61U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[61U])   /* 10062 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 62U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[62U])   /* 10063 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 63U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[63U])   /* 10064 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 64U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[64U])   /* 10065 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 65U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[65U])   /* 10066 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 66U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[66U])   /* 10067 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 67U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[67U])   /* 10068 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 68U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[68U])   /* 10069 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 69U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[69U])   /* 10070 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 70U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[70U])   /* 10071 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 71U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[71U])   /* 10072 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 72U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[72U])   /* 10073 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 73U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[73U])   /* 10074 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 74U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[74U])   /* 10075 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 75U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[75U])   /* 10076 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 76U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[76U])   /* 10077 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 77U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[77U])   /* 10078 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 78U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[78U])   /* 10079 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 79U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[79U])   /* 10080 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 80U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[80U])   /* 10081 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 81U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[81U])   /* 10082 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 82U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[82U])   /* 10083 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 83U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[83U])   /* 10084 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 84U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[84U])   /* 10085 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 85U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[85U])   /* 10086 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 86U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[86U])   /* 10087 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 87U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[87U])   /* 10088 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 88U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[88U])   /* 10089 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 89U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[89U])   /* 10090 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 90U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[90U])   /* 10091 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 91U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[91U])   /* 10092 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 92U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[92U])   /* 10093 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 93U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[93U])   /* 10094 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 94U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[94U])   /* 10095 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 95U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[95U])   /* 10096 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 96U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[96U])   /* 10097 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 97U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[97U])   /* 10098 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 98U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[98U])   /* 10099 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 99U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[99U])   /* 10040 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 100U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[100U])  /* 10101 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 101U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[101U])  /* 10102 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 102U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[102U])  /* 10103 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 103U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[103U])  /* 10104 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 104U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[104U])  /* 10105 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 105U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[105U])  /* 10106 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 106U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[106U])  /* 10107 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 107U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[107U])  /* 10108 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 108U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[108U])  /* 10109 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 109U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[109U])  /* 10110 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 110U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[110U])  /* 10111 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 111U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[111U])  /* 10112 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 112U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[112U])  /* 10113 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 113U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[113U])  /* 10114 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 114U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[114U])  /* 10115 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 115U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[115U])  /* 10116 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 116U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[116U])  /* 10117 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 117U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[117U])  /* 10118 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 118U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[118U])  /* 10119 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 119U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[119U])  /* 10120 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 120U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[120U])  /* 10121 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 121U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[121U])  /* 10122 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 122U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[122U])  /* 10123 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 123U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[123U])  /* 10124 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 124U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[124U])  /* 10125 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 125U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[125U])  /* 10126 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 126U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[126U])  /* 10127 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 127U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[127U])  /* 10128 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 128U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[128U])  /* 10129 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 129U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[129U])  /* 10130 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 130U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[130U])  /* 10131 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 131U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[131U])  /* 10132 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 132U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[132U])  /* 10133 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 133U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[133U])  /* 10134 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 134U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[134U])  /* 10135 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 135U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[135U])  /* 10136 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 136U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[136U])  /* 10137 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 137U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[137U])  /* 10138 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 138U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[138U])  /* 10139 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 139U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[139U])  /* 10140 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 140U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[140U])  /* 10141 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 141U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[141U])  /* 10142 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 142U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[142U])  /* 10143 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 143U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[143U])  /* 10144 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 144U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[144U])  /* 10145 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 145U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[145U])  /* 10146 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 146U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[146U])  /* 10147 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 147U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[147U])  /* 10148 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 148U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[148U])  /* 10149 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 149U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[149U])  /* 10150 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 150U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[150U])  /* 10151 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 151U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[151U])  /* 10152 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 152U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[152U])  /* 10153 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 153U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[153U])  /* 10154 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 154U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[154U])  /* 10155 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 155U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[155U])  /* 10156 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 156U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[156U])  /* 10157 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 157U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[157U])  /* 10158 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 158U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[158U])  /* 10159 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 159U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[159U])  /* 10160 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 160U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[160U])  /* 10161 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 161U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[161U])  /* 10162 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 162U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[162U])  /* 10163 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 163U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[163U])  /* 10164 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 164U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[164U])  /* 10165 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 165U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[165U])  /* 10166 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 166U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[166U])  /* 10167 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 167U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[167U])  /* 10168 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 168U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[168U])  /* 10169 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 169U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[169U])  /* 10170 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 170U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[170U])  /* 10171 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 171U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[171U])  /* 10172 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 172U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[172U])  /* 10173 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 173U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[173U])  /* 10174 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 174U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[174U])  /* 10175 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 175U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[175U])  /* 10176 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 176U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[176U])  /* 10177 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 177U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[177U])  /* 10178 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 178U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[178U])  /* 10179 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 179U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[179U])  /* 10180 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 180U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[180U])  /* 10181 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 181U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[181U])  /* 10182 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 182U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[182U])  /* 10183 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 183U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[183U])  /* 10184 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 184U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[184U])  /* 10185 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 185U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[185U])  /* 10186 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 186U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[186U])  /* 10187 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 187U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[187U])  /* 10188 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 188U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[188U])  /* 10189 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 189U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[189U])  /* 10190 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 190U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[190U])  /* 10191 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 191U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[191U])  /* 10192 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 192U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[192U])  /* 10193 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 193U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[193U])  /* 10194 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 194U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[194U])  /* 10195 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 195U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[195U])  /* 10196 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 196U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[196U])  /* 10197 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 197U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[197U])  /* 10198 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 198U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[198U])  /* 10199 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 199U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[199U])  /* 10200 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 200U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[200U])  /* 10201 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 201U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[201U])  /* 10202 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 202U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[202U])  /* 10203 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 203U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[203U])  /* 10204 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 204U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[204U])  /* 10205 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 205U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[205U])  /* 10206 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 206U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[206U])  /* 10207 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 207U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[207U])  /* 10208 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 208U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[208U])  /* 10209 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 209U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[209U])  /* 10210 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 210U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[210U])  /* 10211 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 211U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[211U])  /* 10212 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 212U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[212U])  /* 10213 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 213U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[213U])  /* 10214 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 214U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[214U])  /* 10215 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 215U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[215U])  /* 10216 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 216U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[216U])  /* 10217 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 217U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[217U])  /* 10218 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 218U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[218U])  /* 10219 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 219U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[219U])  /* 10220 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 220U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[220U])  /* 10221 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 221U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[221U])  /* 10222 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 222U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[222U])  /* 10223 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 223U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[223U])  /* 10224 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 224U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[224U])  /* 10225 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 225U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[225U])  /* 10226 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 226U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[226U])  /* 10227 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 227U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[227U])  /* 10228 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 228U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[228U])  /* 10229 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 229U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[229U])  /* 10230 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 230U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[230U])  /* 10231 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 231U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[231U])  /* 10232 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 232U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[232U])  /* 10233 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 233U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[233U])  /* 10234 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 234U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[234U])  /* 10235 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 235U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[235U])  /* 10236 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 236U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[236U])  /* 10237 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 237U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[237U])  /* 10238 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 238U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[238U])  /* 10239 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 239U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[239U])  /* 10240 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 240U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[240U])  /* 10241 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 241U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[241U])  /* 10242 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 242U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[242U])  /* 10243 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 243U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[243U])  /* 10244 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 244U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[244U])  /* 10245 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 245U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[245U])  /* 10246 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 246U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[246U])  /* 10247 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 247U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[247U])  /* 10248 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 248U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[248U])  /* 10249 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 249U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[249U])  /* 10250 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 250U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[250U])  /* 10251 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 251U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[251U])  /* 10252 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 252U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[252U])  /* 10253 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 253U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[253U])  /* 10254 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 254U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[254U])  /* 10255 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 255U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[255U])  /* 10256 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 256U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[256U])  /* 10257 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 257U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[257U])  /* 10258 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 258U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[258U])  /* 10259 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 259U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[259U])  /* 10260 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 260U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[260U])  /* 10261 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 261U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[261U])  /* 10262 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 262U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[262U])  /* 10263 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 263U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[263U])  /* 10264 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 264U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[264U])  /* 10265 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 265U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[265U])  /* 10266 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 266U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[266U])  /* 10267 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 267U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[267U])  /* 10268 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 268U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[268U])  /* 10269 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 269U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[269U])  /* 10270 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 270U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[270U])  /* 10271 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 271U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[271U])  /* 10272 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 272U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[272U])  /* 10273 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 273U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[273U])  /* 10274 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 274U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[274U])  /* 10275 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 275U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[275U])  /* 10276 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 276U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[276U])  /* 10277 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 277U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[277U])  /* 10278 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 278U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[278U])  /* 10279 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 279U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[279U])  /* 10280 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 280U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[280U])  /* 10281 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 281U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[281U])  /* 10282 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 282U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[282U])  /* 10283 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 283U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[283U])  /* 10284 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 284U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[284U])  /* 10285 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 285U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[285U])  /* 10286 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 286U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[286U])  /* 10287 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 287U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[287U])  /* 10288 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 288U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[288U])  /* 10289 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 289U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[289U])  /* 10290 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 290U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[290U])  /* 10291 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 291U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[291U])  /* 10292 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 292U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[292U])  /* 10293 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 293U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[293U])  /* 10294 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 294U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[294U])  /* 10295 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 295U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[295U])  /* 10296 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 296U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[296U])  /* 10297 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 297U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[297U])  /* 10298 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 298U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[298U])  /* 10299 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_3 > 299U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_3[299U])  /* 10300 */
#endif
};

#if (Modbus_Slave_Discrete_Inputs_Count_3 > 300U)
#error Modbus_Slave_Discrete_Inputs_Count_3 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_USB != 0)
uint8_t ui8_Modbus_Discrete_Inputs_Data_USB[Modbus_Slave_Discrete_Inputs_Count_USB];

uint8_t * const ui8_Modbus_Discrete_Inputs_USB[Modbus_Slave_Discrete_Inputs_Count_USB] = {
    uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[0U])      /* 10001 */
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 1U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[1U])    /* 10002 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 2U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[2U])    /* 10003 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 3U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[3U])    /* 10004 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 4U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[4U])    /* 10005 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 5U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[5U])    /* 10006 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 6U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[6U])    /* 10007 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 7U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[7U])    /* 10008 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 8U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[8U])    /* 10009 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 9U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[9U])    /* 10010 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 10U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[10U])   /* 10011 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 11U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[11U])   /* 10012 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 12U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[12U])   /* 10013 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 13U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[13U])   /* 10014 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 14U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[14U])   /* 10015 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 15U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[15U])   /* 10016 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 16U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[16U])   /* 10017 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 17U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[17U])   /* 10018 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 18U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[18U])   /* 10019 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 19U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[19U])   /* 10020 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 20U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[20U])   /* 10021 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 21U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[21U])   /* 10022 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 22U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[22U])   /* 10023 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 23U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[23U])   /* 10024 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 24U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[24U])   /* 10025 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 25U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[25U])   /* 10026 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 26U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[26U])   /* 10027 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 27U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[27U])   /* 10028 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 28U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[28U])   /* 10029 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 29U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[29U])   /* 10030 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 30U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[30U])   /* 10031 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 31U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[31U])   /* 10032 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 32U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[32U])   /* 10033 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 33U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[33U])   /* 10034 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 34U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[34U])   /* 10035 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 35U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[35U])   /* 10036 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 36U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[36U])   /* 10037 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 37U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[37U])   /* 10038 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 38U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[38U])   /* 10039 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 39U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[39U])   /* 10040 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 40U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[40U])   /* 10041 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 41U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[41U])   /* 10042 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 42U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[42U])   /* 10043 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 43U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[43U])   /* 10044 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 44U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[44U])   /* 10045 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 45U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[45U])   /* 10046 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 46U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[46U])   /* 10047 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 47U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[47U])   /* 10048 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 48U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[48U])   /* 10049 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 49U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[49U])   /* 10050 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 50U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[50U])   /* 10051 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 51U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[51U])   /* 10052 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 52U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[52U])   /* 10053 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 53U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[53U])   /* 10054 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 54U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[54U])   /* 10055 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 55U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[55U])   /* 10056 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 56U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[56U])   /* 10057 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 57U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[57U])   /* 10058 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 58U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[58U])   /* 10059 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 59U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[59U])   /* 10060 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 60U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[60U])   /* 10061 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 61U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[61U])   /* 10062 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 62U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[62U])   /* 10063 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 63U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[63U])   /* 10064 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 64U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[64U])   /* 10065 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 65U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[65U])   /* 10066 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 66U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[66U])   /* 10067 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 67U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[67U])   /* 10068 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 68U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[68U])   /* 10069 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 69U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[69U])   /* 10070 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 70U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[70U])   /* 10071 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 71U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[71U])   /* 10072 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 72U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[72U])   /* 10073 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 73U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[73U])   /* 10074 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 74U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[74U])   /* 10075 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 75U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[75U])   /* 10076 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 76U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[76U])   /* 10077 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 77U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[77U])   /* 10078 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 78U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[78U])   /* 10079 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 79U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[79U])   /* 10080 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 80U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[80U])   /* 10081 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 81U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[81U])   /* 10082 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 82U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[82U])   /* 10083 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 83U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[83U])   /* 10084 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 84U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[84U])   /* 10085 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 85U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[85U])   /* 10086 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 86U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[86U])   /* 10087 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 87U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[87U])   /* 10088 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 88U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[88U])   /* 10089 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 89U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[89U])   /* 10090 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 90U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[90U])   /* 10091 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 91U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[91U])   /* 10092 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 92U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[92U])   /* 10093 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 93U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[93U])   /* 10094 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 94U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[94U])   /* 10095 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 95U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[95U])   /* 10096 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 96U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[96U])   /* 10097 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 97U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[97U])   /* 10098 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 98U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[98U])   /* 10099 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 99U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[99U])   /* 10040 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 100U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[100U])  /* 10101 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 101U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[101U])  /* 10102 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 102U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[102U])  /* 10103 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 103U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[103U])  /* 10104 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 104U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[104U])  /* 10105 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 105U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[105U])  /* 10106 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 106U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[106U])  /* 10107 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 107U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[107U])  /* 10108 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 108U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[108U])  /* 10109 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 109U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[109U])  /* 10110 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 110U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[110U])  /* 10111 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 111U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[111U])  /* 10112 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 112U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[112U])  /* 10113 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 113U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[113U])  /* 10114 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 114U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[114U])  /* 10115 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 115U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[115U])  /* 10116 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 116U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[116U])  /* 10117 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 117U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[117U])  /* 10118 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 118U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[118U])  /* 10119 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 119U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[119U])  /* 10120 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 120U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[120U])  /* 10121 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 121U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[121U])  /* 10122 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 122U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[122U])  /* 10123 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 123U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[123U])  /* 10124 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 124U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[124U])  /* 10125 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 125U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[125U])  /* 10126 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 126U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[126U])  /* 10127 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 127U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[127U])  /* 10128 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 128U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[128U])  /* 10129 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 129U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[129U])  /* 10130 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 130U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[130U])  /* 10131 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 131U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[131U])  /* 10132 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 132U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[132U])  /* 10133 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 133U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[133U])  /* 10134 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 134U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[134U])  /* 10135 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 135U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[135U])  /* 10136 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 136U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[136U])  /* 10137 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 137U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[137U])  /* 10138 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 138U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[138U])  /* 10139 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 139U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[139U])  /* 10140 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 140U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[140U])  /* 10141 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 141U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[141U])  /* 10142 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 142U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[142U])  /* 10143 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 143U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[143U])  /* 10144 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 144U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[144U])  /* 10145 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 145U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[145U])  /* 10146 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 146U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[146U])  /* 10147 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 147U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[147U])  /* 10148 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 148U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[148U])  /* 10149 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 149U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[149U])  /* 10150 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 150U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[150U])  /* 10151 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 151U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[151U])  /* 10152 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 152U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[152U])  /* 10153 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 153U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[153U])  /* 10154 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 154U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[154U])  /* 10155 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 155U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[155U])  /* 10156 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 156U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[156U])  /* 10157 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 157U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[157U])  /* 10158 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 158U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[158U])  /* 10159 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 159U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[159U])  /* 10160 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 160U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[160U])  /* 10161 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 161U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[161U])  /* 10162 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 162U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[162U])  /* 10163 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 163U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[163U])  /* 10164 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 164U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[164U])  /* 10165 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 165U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[165U])  /* 10166 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 166U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[166U])  /* 10167 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 167U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[167U])  /* 10168 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 168U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[168U])  /* 10169 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 169U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[169U])  /* 10170 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 170U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[170U])  /* 10171 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 171U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[171U])  /* 10172 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 172U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[172U])  /* 10173 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 173U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[173U])  /* 10174 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 174U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[174U])  /* 10175 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 175U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[175U])  /* 10176 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 176U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[176U])  /* 10177 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 177U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[177U])  /* 10178 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 178U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[178U])  /* 10179 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 179U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[179U])  /* 10180 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 180U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[180U])  /* 10181 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 181U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[181U])  /* 10182 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 182U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[182U])  /* 10183 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 183U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[183U])  /* 10184 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 184U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[184U])  /* 10185 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 185U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[185U])  /* 10186 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 186U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[186U])  /* 10187 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 187U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[187U])  /* 10188 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 188U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[188U])  /* 10189 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 189U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[189U])  /* 10190 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 190U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[190U])  /* 10191 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 191U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[191U])  /* 10192 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 192U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[192U])  /* 10193 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 193U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[193U])  /* 10194 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 194U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[194U])  /* 10195 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 195U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[195U])  /* 10196 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 196U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[196U])  /* 10197 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 197U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[197U])  /* 10198 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 198U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[198U])  /* 10199 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 199U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[199U])  /* 10200 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 200U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[200U])  /* 10201 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 201U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[201U])  /* 10202 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 202U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[202U])  /* 10203 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 203U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[203U])  /* 10204 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 204U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[204U])  /* 10205 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 205U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[205U])  /* 10206 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 206U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[206U])  /* 10207 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 207U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[207U])  /* 10208 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 208U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[208U])  /* 10209 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 209U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[209U])  /* 10210 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 210U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[210U])  /* 10211 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 211U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[211U])  /* 10212 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 212U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[212U])  /* 10213 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 213U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[213U])  /* 10214 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 214U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[214U])  /* 10215 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 215U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[215U])  /* 10216 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 216U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[216U])  /* 10217 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 217U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[217U])  /* 10218 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 218U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[218U])  /* 10219 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 219U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[219U])  /* 10220 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 220U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[220U])  /* 10221 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 221U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[221U])  /* 10222 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 222U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[222U])  /* 10223 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 223U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[223U])  /* 10224 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 224U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[224U])  /* 10225 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 225U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[225U])  /* 10226 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 226U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[226U])  /* 10227 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 227U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[227U])  /* 10228 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 228U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[228U])  /* 10229 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 229U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[229U])  /* 10230 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 230U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[230U])  /* 10231 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 231U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[231U])  /* 10232 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 232U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[232U])  /* 10233 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 233U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[233U])  /* 10234 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 234U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[234U])  /* 10235 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 235U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[235U])  /* 10236 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 236U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[236U])  /* 10237 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 237U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[237U])  /* 10238 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 238U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[238U])  /* 10239 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 239U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[239U])  /* 10240 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 240U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[240U])  /* 10241 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 241U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[241U])  /* 10242 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 242U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[242U])  /* 10243 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 243U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[243U])  /* 10244 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 244U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[244U])  /* 10245 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 245U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[245U])  /* 10246 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 246U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[246U])  /* 10247 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 247U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[247U])  /* 10248 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 248U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[248U])  /* 10249 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 249U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[249U])  /* 10250 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 250U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[250U])  /* 10251 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 251U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[251U])  /* 10252 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 252U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[252U])  /* 10253 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 253U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[253U])  /* 10254 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 254U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[254U])  /* 10255 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 255U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[255U])  /* 10256 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 256U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[256U])  /* 10257 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 257U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[257U])  /* 10258 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 258U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[258U])  /* 10259 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 259U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[259U])  /* 10260 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 260U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[260U])  /* 10261 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 261U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[261U])  /* 10262 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 262U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[262U])  /* 10263 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 263U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[263U])  /* 10264 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 264U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[264U])  /* 10265 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 265U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[265U])  /* 10266 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 266U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[266U])  /* 10267 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 267U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[267U])  /* 10268 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 268U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[268U])  /* 10269 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 269U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[269U])  /* 10270 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 270U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[270U])  /* 10271 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 271U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[271U])  /* 10272 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 272U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[272U])  /* 10273 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 273U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[273U])  /* 10274 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 274U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[274U])  /* 10275 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 275U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[275U])  /* 10276 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 276U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[276U])  /* 10277 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 277U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[277U])  /* 10278 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 278U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[278U])  /* 10279 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 279U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[279U])  /* 10280 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 280U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[280U])  /* 10281 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 281U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[281U])  /* 10282 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 282U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[282U])  /* 10283 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 283U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[283U])  /* 10284 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 284U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[284U])  /* 10285 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 285U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[285U])  /* 10286 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 286U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[286U])  /* 10287 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 287U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[287U])  /* 10288 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 288U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[288U])  /* 10289 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 289U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[289U])  /* 10290 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 290U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[290U])  /* 10291 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 291U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[291U])  /* 10292 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 292U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[292U])  /* 10293 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 293U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[293U])  /* 10294 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 294U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[294U])  /* 10295 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 295U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[295U])  /* 10296 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 296U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[296U])  /* 10297 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 297U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[297U])  /* 10298 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 298U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[298U])  /* 10299 */
#endif
#if (Modbus_Slave_Discrete_Inputs_Count_USB > 299U)
    , uint8_Pointer(ui8_Modbus_Discrete_Inputs_Data_USB[299U])  /* 10300 */
#endif
};

#if (Modbus_Slave_Discrete_Inputs_Count_USB > 300U)
#error Modbus_Slave_Discrete_Inputs_Count_USB > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_1 != 0)
uint8_t ui8_Modbus_Coils_Data_1[Modbus_Slave_Coils_Count_1];

uint8_t * const ui8_Modbus_Coils_1[Modbus_Slave_Coils_Count_1] = {
    uint8_Pointer(ui8_Modbus_Coils_Data_1[0U])      /* 20001 */
#if (Modbus_Slave_Coils_Count_1 > 1U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[1U])    /* 20002 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 2U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[2U])    /* 20003 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 3U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[3U])    /* 20004 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 4U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[4U])    /* 20005 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 5U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[5U])    /* 20006 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 6U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[6U])    /* 20007 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 7U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[7U])    /* 20008 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 8U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[8U])    /* 20009 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 9U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[9U])    /* 20010 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 10U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[10U])   /* 20011 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 11U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[11U])   /* 20012 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 12U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[12U])   /* 20013 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 13U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[13U])   /* 20014 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 14U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[14U])   /* 20015 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 15U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[15U])   /* 20016 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 16U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[16U])   /* 20017 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 17U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[17U])   /* 20018 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 18U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[18U])   /* 20019 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 19U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[19U])   /* 20020 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 20U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[20U])   /* 20021 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 21U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[21U])   /* 20022 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 22U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[22U])   /* 20023 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 23U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[23U])   /* 20024 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 24U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[24U])   /* 20025 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 25U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[25U])   /* 20026 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 26U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[26U])   /* 20027 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 27U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[27U])   /* 20028 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 28U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[28U])   /* 20029 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 29U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[29U])   /* 20030 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 30U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[30U])   /* 20031 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 31U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[31U])   /* 20032 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 32U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[32U])   /* 20033 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 33U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[33U])   /* 20034 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 34U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[34U])   /* 20035 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 35U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[35U])   /* 20036 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 36U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[36U])   /* 20037 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 37U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[37U])   /* 20038 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 38U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[38U])   /* 20039 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 39U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[39U])   /* 20040 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 40U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[40U])   /* 20041 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 41U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[41U])   /* 20042 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 42U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[42U])   /* 20043 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 43U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[43U])   /* 20044 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 44U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[44U])   /* 20045 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 45U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[45U])   /* 20046 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 46U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[46U])   /* 20047 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 47U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[47U])   /* 20048 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 48U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[48U])   /* 20049 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 49U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[49U])   /* 20050 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 50U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[50U])   /* 20051 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 51U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[51U])   /* 20052 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 52U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[52U])   /* 20053 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 53U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[53U])   /* 20054 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 54U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[54U])   /* 20055 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 55U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[55U])   /* 20056 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 56U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[56U])   /* 20057 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 57U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[57U])   /* 20058 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 58U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[58U])   /* 20059 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 59U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[59U])   /* 20060 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 60U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[60U])   /* 20061 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 61U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[61U])   /* 20062 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 62U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[62U])   /* 20063 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 63U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[63U])   /* 20064 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 64U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[64U])   /* 20065 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 65U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[65U])   /* 20066 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 66U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[66U])   /* 20067 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 67U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[67U])   /* 20068 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 68U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[68U])   /* 20069 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 69U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[69U])   /* 20070 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 70U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[70U])   /* 20071 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 71U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[71U])   /* 20072 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 72U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[72U])   /* 20073 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 73U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[73U])   /* 20074 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 74U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[74U])   /* 20075 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 75U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[75U])   /* 20076 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 76U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[76U])   /* 20077 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 77U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[77U])   /* 20078 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 78U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[78U])   /* 20079 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 79U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[79U])   /* 20080 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 80U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[80U])   /* 20081 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 81U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[81U])   /* 20082 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 82U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[82U])   /* 20083 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 83U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[83U])   /* 20084 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 84U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[84U])   /* 20085 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 85U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[85U])   /* 20086 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 86U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[86U])   /* 20087 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 87U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[87U])   /* 20088 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 88U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[88U])   /* 20089 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 89U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[89U])   /* 20090 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 90U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[90U])   /* 20091 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 91U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[91U])   /* 20092 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 92U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[92U])   /* 20093 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 93U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[93U])   /* 20094 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 94U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[94U])   /* 20095 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 95U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[95U])   /* 20096 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 96U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[96U])   /* 20097 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 97U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[97U])   /* 20098 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 98U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[98U])   /* 20099 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 99U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[99U])   /* 20040 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 100U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[100U])  /* 20101 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 101U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[101U])  /* 20102 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 102U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[102U])  /* 20103 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 103U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[103U])  /* 20104 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 104U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[104U])  /* 20105 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 105U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[105U])  /* 20106 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 106U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[106U])  /* 20107 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 107U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[107U])  /* 20108 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 108U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[108U])  /* 20109 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 109U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[109U])  /* 20110 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 110U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[110U])  /* 20111 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 111U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[111U])  /* 20112 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 112U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[112U])  /* 20113 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 113U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[113U])  /* 20114 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 114U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[114U])  /* 20115 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 115U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[115U])  /* 20116 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 116U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[116U])  /* 20117 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 117U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[117U])  /* 20118 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 118U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[118U])  /* 20119 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 119U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[119U])  /* 20120 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 120U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[120U])  /* 20121 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 121U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[121U])  /* 20122 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 122U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[122U])  /* 20123 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 123U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[123U])  /* 20124 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 124U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[124U])  /* 20125 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 125U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[125U])  /* 20126 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 126U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[126U])  /* 20127 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 127U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[127U])  /* 20128 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 128U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[128U])  /* 20129 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 129U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[129U])  /* 20130 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 130U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[130U])  /* 20131 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 131U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[131U])  /* 20132 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 132U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[132U])  /* 20133 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 133U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[133U])  /* 20134 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 134U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[134U])  /* 20135 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 135U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[135U])  /* 20136 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 136U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[136U])  /* 20137 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 137U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[137U])  /* 20138 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 138U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[138U])  /* 20139 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 139U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[139U])  /* 20140 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 140U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[140U])  /* 20141 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 141U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[141U])  /* 20142 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 142U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[142U])  /* 20143 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 143U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[143U])  /* 20144 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 144U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[144U])  /* 20145 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 145U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[145U])  /* 20146 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 146U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[146U])  /* 20147 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 147U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[147U])  /* 20148 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 148U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[148U])  /* 20149 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 149U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[149U])  /* 20150 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 150U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[150U])  /* 20151 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 151U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[151U])  /* 20152 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 152U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[152U])  /* 20153 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 153U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[153U])  /* 20154 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 154U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[154U])  /* 20155 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 155U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[155U])  /* 20156 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 156U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[156U])  /* 20157 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 157U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[157U])  /* 20158 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 158U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[158U])  /* 20159 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 159U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[159U])  /* 20160 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 160U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[160U])  /* 20161 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 161U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[161U])  /* 20162 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 162U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[162U])  /* 20163 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 163U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[163U])  /* 20164 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 164U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[164U])  /* 20165 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 165U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[165U])  /* 20166 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 166U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[166U])  /* 20167 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 167U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[167U])  /* 20168 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 168U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[168U])  /* 20169 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 169U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[169U])  /* 20170 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 170U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[170U])  /* 20171 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 171U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[171U])  /* 20172 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 172U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[172U])  /* 20173 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 173U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[173U])  /* 20174 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 174U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[174U])  /* 20175 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 175U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[175U])  /* 20176 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 176U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[176U])  /* 20177 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 177U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[177U])  /* 20178 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 178U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[178U])  /* 20179 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 179U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[179U])  /* 20180 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 180U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[180U])  /* 20181 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 181U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[181U])  /* 20182 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 182U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[182U])  /* 20183 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 183U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[183U])  /* 20184 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 184U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[184U])  /* 20185 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 185U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[185U])  /* 20186 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 186U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[186U])  /* 20187 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 187U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[187U])  /* 20188 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 188U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[188U])  /* 20189 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 189U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[189U])  /* 20190 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 190U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[190U])  /* 20191 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 191U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[191U])  /* 20192 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 192U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[192U])  /* 20193 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 193U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[193U])  /* 20194 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 194U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[194U])  /* 20195 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 195U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[195U])  /* 20196 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 196U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[196U])  /* 20197 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 197U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[197U])  /* 20198 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 198U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[198U])  /* 20199 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 199U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[199U])  /* 20200 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 200U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[200U])  /* 20201 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 201U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[201U])  /* 20202 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 202U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[202U])  /* 20203 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 203U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[203U])  /* 20204 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 204U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[204U])  /* 20205 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 205U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[205U])  /* 20206 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 206U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[206U])  /* 20207 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 207U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[207U])  /* 20208 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 208U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[208U])  /* 20209 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 209U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[209U])  /* 20210 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 210U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[210U])  /* 20211 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 211U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[211U])  /* 20212 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 212U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[212U])  /* 20213 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 213U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[213U])  /* 20214 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 214U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[214U])  /* 20215 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 215U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[215U])  /* 20216 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 216U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[216U])  /* 20217 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 217U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[217U])  /* 20218 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 218U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[218U])  /* 20219 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 219U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[219U])  /* 20220 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 220U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[220U])  /* 20221 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 221U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[221U])  /* 20222 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 222U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[222U])  /* 20223 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 223U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[223U])  /* 20224 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 224U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[224U])  /* 20225 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 225U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[225U])  /* 20226 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 226U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[226U])  /* 20227 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 227U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[227U])  /* 20228 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 228U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[228U])  /* 20229 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 229U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[229U])  /* 20230 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 230U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[230U])  /* 20231 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 231U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[231U])  /* 20232 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 232U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[232U])  /* 20233 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 233U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[233U])  /* 20234 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 234U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[234U])  /* 20235 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 235U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[235U])  /* 20236 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 236U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[236U])  /* 20237 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 237U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[237U])  /* 20238 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 238U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[238U])  /* 20239 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 239U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[239U])  /* 20240 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 240U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[240U])  /* 20241 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 241U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[241U])  /* 20242 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 242U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[242U])  /* 20243 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 243U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[243U])  /* 20244 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 244U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[244U])  /* 20245 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 245U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[245U])  /* 20246 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 246U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[246U])  /* 20247 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 247U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[247U])  /* 20248 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 248U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[248U])  /* 20249 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 249U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[249U])  /* 20250 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 250U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[250U])  /* 20251 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 251U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[251U])  /* 20252 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 252U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[252U])  /* 20253 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 253U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[253U])  /* 20254 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 254U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[254U])  /* 20255 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 255U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[255U])  /* 20256 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 256U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[256U])  /* 20257 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 257U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[257U])  /* 20258 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 258U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[258U])  /* 20259 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 259U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[259U])  /* 20260 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 260U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[260U])  /* 20261 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 261U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[261U])  /* 20262 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 262U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[262U])  /* 20263 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 263U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[263U])  /* 20264 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 264U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[264U])  /* 20265 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 265U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[265U])  /* 20266 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 266U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[266U])  /* 20267 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 267U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[267U])  /* 20268 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 268U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[268U])  /* 20269 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 269U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[269U])  /* 20270 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 270U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[270U])  /* 20271 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 271U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[271U])  /* 20272 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 272U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[272U])  /* 20273 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 273U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[273U])  /* 20274 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 274U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[274U])  /* 20275 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 275U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[275U])  /* 20276 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 276U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[276U])  /* 20277 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 277U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[277U])  /* 20278 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 278U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[278U])  /* 20279 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 279U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[279U])  /* 20280 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 280U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[280U])  /* 20281 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 281U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[281U])  /* 20282 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 282U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[282U])  /* 20283 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 283U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[283U])  /* 20284 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 284U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[284U])  /* 20285 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 285U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[285U])  /* 20286 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 286U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[286U])  /* 20287 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 287U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[287U])  /* 20288 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 288U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[288U])  /* 20289 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 289U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[289U])  /* 20290 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 290U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[290U])  /* 20291 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 291U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[291U])  /* 20292 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 292U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[292U])  /* 20293 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 293U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[293U])  /* 20294 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 294U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[294U])  /* 20295 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 295U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[295U])  /* 20296 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 296U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[296U])  /* 20297 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 297U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[297U])  /* 20298 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 298U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[298U])  /* 20299 */
#endif
#if (Modbus_Slave_Coils_Count_1 > 299U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_1[299U])  /* 20300 */
#endif
};

#if (Modbus_Slave_Coils_Count_1 > 300U)
#error Modbus_Slave_Coils_Count_1 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_2 != 0)
uint8_t ui8_Modbus_Coils_Data_2[Modbus_Slave_Coils_Count_2];

uint8_t * const ui8_Modbus_Coils_2[Modbus_Slave_Coils_Count_2] = {
    uint8_Pointer(ui8_Modbus_Coils_Data_2[0U])      /* 20001 */
#if (Modbus_Slave_Coils_Count_2 > 1U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[1U])    /* 20002 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 2U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[2U])    /* 20003 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 3U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[3U])    /* 20004 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 4U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[4U])    /* 20005 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 5U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[5U])    /* 20006 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 6U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[6U])    /* 20007 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 7U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[7U])    /* 20008 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 8U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[8U])    /* 20009 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 9U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[9U])    /* 20010 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 10U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[10U])   /* 20011 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 11U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[11U])   /* 20012 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 12U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[12U])   /* 20013 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 13U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[13U])   /* 20014 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 14U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[14U])   /* 20015 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 15U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[15U])   /* 20016 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 16U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[16U])   /* 20017 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 17U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[17U])   /* 20018 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 18U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[18U])   /* 20019 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 19U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[19U])   /* 20020 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 20U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[20U])   /* 20021 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 21U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[21U])   /* 20022 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 22U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[22U])   /* 20023 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 23U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[23U])   /* 20024 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 24U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[24U])   /* 20025 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 25U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[25U])   /* 20026 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 26U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[26U])   /* 20027 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 27U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[27U])   /* 20028 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 28U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[28U])   /* 20029 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 29U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[29U])   /* 20030 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 30U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[30U])   /* 20031 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 31U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[31U])   /* 20032 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 32U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[32U])   /* 20033 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 33U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[33U])   /* 20034 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 34U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[34U])   /* 20035 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 35U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[35U])   /* 20036 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 36U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[36U])   /* 20037 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 37U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[37U])   /* 20038 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 38U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[38U])   /* 20039 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 39U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[39U])   /* 20040 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 40U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[40U])   /* 20041 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 41U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[41U])   /* 20042 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 42U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[42U])   /* 20043 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 43U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[43U])   /* 20044 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 44U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[44U])   /* 20045 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 45U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[45U])   /* 20046 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 46U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[46U])   /* 20047 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 47U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[47U])   /* 20048 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 48U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[48U])   /* 20049 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 49U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[49U])   /* 20050 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 50U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[50U])   /* 20051 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 51U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[51U])   /* 20052 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 52U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[52U])   /* 20053 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 53U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[53U])   /* 20054 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 54U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[54U])   /* 20055 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 55U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[55U])   /* 20056 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 56U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[56U])   /* 20057 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 57U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[57U])   /* 20058 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 58U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[58U])   /* 20059 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 59U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[59U])   /* 20060 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 60U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[60U])   /* 20061 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 61U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[61U])   /* 20062 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 62U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[62U])   /* 20063 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 63U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[63U])   /* 20064 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 64U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[64U])   /* 20065 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 65U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[65U])   /* 20066 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 66U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[66U])   /* 20067 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 67U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[67U])   /* 20068 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 68U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[68U])   /* 20069 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 69U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[69U])   /* 20070 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 70U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[70U])   /* 20071 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 71U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[71U])   /* 20072 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 72U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[72U])   /* 20073 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 73U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[73U])   /* 20074 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 74U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[74U])   /* 20075 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 75U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[75U])   /* 20076 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 76U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[76U])   /* 20077 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 77U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[77U])   /* 20078 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 78U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[78U])   /* 20079 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 79U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[79U])   /* 20080 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 80U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[80U])   /* 20081 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 81U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[81U])   /* 20082 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 82U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[82U])   /* 20083 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 83U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[83U])   /* 20084 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 84U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[84U])   /* 20085 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 85U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[85U])   /* 20086 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 86U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[86U])   /* 20087 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 87U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[87U])   /* 20088 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 88U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[88U])   /* 20089 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 89U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[89U])   /* 20090 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 90U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[90U])   /* 20091 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 91U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[91U])   /* 20092 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 92U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[92U])   /* 20093 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 93U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[93U])   /* 20094 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 94U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[94U])   /* 20095 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 95U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[95U])   /* 20096 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 96U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[96U])   /* 20097 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 97U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[97U])   /* 20098 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 98U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[98U])   /* 20099 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 99U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[99U])   /* 20040 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 100U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[100U])  /* 20101 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 101U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[101U])  /* 20102 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 102U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[102U])  /* 20103 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 103U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[103U])  /* 20104 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 104U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[104U])  /* 20105 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 105U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[105U])  /* 20106 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 106U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[106U])  /* 20107 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 107U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[107U])  /* 20108 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 108U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[108U])  /* 20109 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 109U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[109U])  /* 20110 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 110U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[110U])  /* 20111 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 111U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[111U])  /* 20112 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 112U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[112U])  /* 20113 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 113U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[113U])  /* 20114 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 114U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[114U])  /* 20115 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 115U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[115U])  /* 20116 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 116U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[116U])  /* 20117 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 117U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[117U])  /* 20118 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 118U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[118U])  /* 20119 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 119U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[119U])  /* 20120 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 120U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[120U])  /* 20121 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 121U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[121U])  /* 20122 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 122U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[122U])  /* 20123 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 123U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[123U])  /* 20124 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 124U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[124U])  /* 20125 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 125U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[125U])  /* 20126 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 126U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[126U])  /* 20127 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 127U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[127U])  /* 20128 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 128U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[128U])  /* 20129 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 129U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[129U])  /* 20130 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 130U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[130U])  /* 20131 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 131U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[131U])  /* 20132 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 132U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[132U])  /* 20133 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 133U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[133U])  /* 20134 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 134U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[134U])  /* 20135 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 135U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[135U])  /* 20136 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 136U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[136U])  /* 20137 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 137U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[137U])  /* 20138 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 138U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[138U])  /* 20139 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 139U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[139U])  /* 20140 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 140U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[140U])  /* 20141 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 141U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[141U])  /* 20142 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 142U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[142U])  /* 20143 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 143U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[143U])  /* 20144 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 144U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[144U])  /* 20145 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 145U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[145U])  /* 20146 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 146U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[146U])  /* 20147 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 147U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[147U])  /* 20148 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 148U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[148U])  /* 20149 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 149U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[149U])  /* 20150 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 150U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[150U])  /* 20151 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 151U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[151U])  /* 20152 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 152U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[152U])  /* 20153 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 153U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[153U])  /* 20154 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 154U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[154U])  /* 20155 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 155U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[155U])  /* 20156 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 156U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[156U])  /* 20157 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 157U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[157U])  /* 20158 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 158U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[158U])  /* 20159 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 159U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[159U])  /* 20160 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 160U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[160U])  /* 20161 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 161U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[161U])  /* 20162 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 162U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[162U])  /* 20163 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 163U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[163U])  /* 20164 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 164U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[164U])  /* 20165 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 165U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[165U])  /* 20166 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 166U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[166U])  /* 20167 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 167U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[167U])  /* 20168 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 168U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[168U])  /* 20169 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 169U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[169U])  /* 20170 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 170U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[170U])  /* 20171 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 171U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[171U])  /* 20172 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 172U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[172U])  /* 20173 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 173U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[173U])  /* 20174 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 174U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[174U])  /* 20175 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 175U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[175U])  /* 20176 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 176U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[176U])  /* 20177 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 177U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[177U])  /* 20178 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 178U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[178U])  /* 20179 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 179U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[179U])  /* 20180 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 180U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[180U])  /* 20181 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 181U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[181U])  /* 20182 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 182U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[182U])  /* 20183 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 183U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[183U])  /* 20184 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 184U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[184U])  /* 20185 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 185U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[185U])  /* 20186 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 186U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[186U])  /* 20187 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 187U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[187U])  /* 20188 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 188U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[188U])  /* 20189 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 189U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[189U])  /* 20190 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 190U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[190U])  /* 20191 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 191U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[191U])  /* 20192 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 192U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[192U])  /* 20193 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 193U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[193U])  /* 20194 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 194U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[194U])  /* 20195 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 195U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[195U])  /* 20196 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 196U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[196U])  /* 20197 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 197U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[197U])  /* 20198 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 198U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[198U])  /* 20199 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 199U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[199U])  /* 20200 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 200U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[200U])  /* 20201 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 201U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[201U])  /* 20202 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 202U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[202U])  /* 20203 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 203U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[203U])  /* 20204 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 204U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[204U])  /* 20205 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 205U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[205U])  /* 20206 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 206U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[206U])  /* 20207 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 207U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[207U])  /* 20208 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 208U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[208U])  /* 20209 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 209U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[209U])  /* 20210 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 210U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[210U])  /* 20211 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 211U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[211U])  /* 20212 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 212U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[212U])  /* 20213 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 213U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[213U])  /* 20214 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 214U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[214U])  /* 20215 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 215U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[215U])  /* 20216 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 216U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[216U])  /* 20217 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 217U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[217U])  /* 20218 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 218U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[218U])  /* 20219 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 219U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[219U])  /* 20220 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 220U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[220U])  /* 20221 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 221U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[221U])  /* 20222 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 222U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[222U])  /* 20223 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 223U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[223U])  /* 20224 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 224U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[224U])  /* 20225 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 225U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[225U])  /* 20226 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 226U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[226U])  /* 20227 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 227U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[227U])  /* 20228 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 228U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[228U])  /* 20229 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 229U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[229U])  /* 20230 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 230U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[230U])  /* 20231 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 231U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[231U])  /* 20232 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 232U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[232U])  /* 20233 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 233U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[233U])  /* 20234 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 234U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[234U])  /* 20235 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 235U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[235U])  /* 20236 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 236U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[236U])  /* 20237 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 237U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[237U])  /* 20238 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 238U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[238U])  /* 20239 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 239U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[239U])  /* 20240 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 240U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[240U])  /* 20241 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 241U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[241U])  /* 20242 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 242U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[242U])  /* 20243 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 243U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[243U])  /* 20244 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 244U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[244U])  /* 20245 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 245U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[245U])  /* 20246 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 246U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[246U])  /* 20247 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 247U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[247U])  /* 20248 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 248U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[248U])  /* 20249 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 249U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[249U])  /* 20250 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 250U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[250U])  /* 20251 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 251U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[251U])  /* 20252 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 252U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[252U])  /* 20253 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 253U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[253U])  /* 20254 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 254U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[254U])  /* 20255 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 255U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[255U])  /* 20256 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 256U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[256U])  /* 20257 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 257U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[257U])  /* 20258 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 258U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[258U])  /* 20259 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 259U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[259U])  /* 20260 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 260U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[260U])  /* 20261 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 261U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[261U])  /* 20262 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 262U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[262U])  /* 20263 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 263U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[263U])  /* 20264 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 264U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[264U])  /* 20265 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 265U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[265U])  /* 20266 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 266U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[266U])  /* 20267 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 267U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[267U])  /* 20268 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 268U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[268U])  /* 20269 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 269U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[269U])  /* 20270 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 270U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[270U])  /* 20271 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 271U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[271U])  /* 20272 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 272U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[272U])  /* 20273 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 273U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[273U])  /* 20274 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 274U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[274U])  /* 20275 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 275U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[275U])  /* 20276 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 276U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[276U])  /* 20277 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 277U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[277U])  /* 20278 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 278U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[278U])  /* 20279 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 279U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[279U])  /* 20280 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 280U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[280U])  /* 20281 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 281U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[281U])  /* 20282 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 282U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[282U])  /* 20283 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 283U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[283U])  /* 20284 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 284U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[284U])  /* 20285 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 285U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[285U])  /* 20286 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 286U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[286U])  /* 20287 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 287U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[287U])  /* 20288 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 288U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[288U])  /* 20289 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 289U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[289U])  /* 20290 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 290U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[290U])  /* 20291 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 291U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[291U])  /* 20292 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 292U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[292U])  /* 20293 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 293U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[293U])  /* 20294 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 294U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[294U])  /* 20295 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 295U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[295U])  /* 20296 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 296U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[296U])  /* 20297 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 297U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[297U])  /* 20298 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 298U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[298U])  /* 20299 */
#endif
#if (Modbus_Slave_Coils_Count_2 > 299U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_2[299U])  /* 20300 */
#endif
};

#if (Modbus_Slave_Coils_Count_2 > 300U)
#error Modbus_Slave_Coils_Count_2 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_3 != 0)
uint8_t ui8_Modbus_Coils_Data_3[Modbus_Slave_Coils_Count_3];

uint8_t * const ui8_Modbus_Coils_3[Modbus_Slave_Coils_Count_3] = {
    uint8_Pointer(ui8_Modbus_Coils_Data_3[0U])      /* 20001 */
#if (Modbus_Slave_Coils_Count_3 > 1U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[1U])    /* 20002 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 2U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[2U])    /* 20003 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 3U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[3U])    /* 20004 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 4U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[4U])    /* 20005 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 5U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[5U])    /* 20006 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 6U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[6U])    /* 20007 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 7U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[7U])    /* 20008 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 8U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[8U])    /* 20009 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 9U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[9U])    /* 20010 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 10U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[10U])   /* 20011 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 11U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[11U])   /* 20012 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 12U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[12U])   /* 20013 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 13U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[13U])   /* 20014 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 14U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[14U])   /* 20015 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 15U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[15U])   /* 20016 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 16U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[16U])   /* 20017 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 17U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[17U])   /* 20018 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 18U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[18U])   /* 20019 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 19U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[19U])   /* 20020 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 20U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[20U])   /* 20021 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 21U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[21U])   /* 20022 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 22U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[22U])   /* 20023 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 23U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[23U])   /* 20024 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 24U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[24U])   /* 20025 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 25U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[25U])   /* 20026 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 26U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[26U])   /* 20027 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 27U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[27U])   /* 20028 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 28U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[28U])   /* 20029 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 29U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[29U])   /* 20030 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 30U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[30U])   /* 20031 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 31U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[31U])   /* 20032 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 32U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[32U])   /* 20033 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 33U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[33U])   /* 20034 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 34U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[34U])   /* 20035 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 35U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[35U])   /* 20036 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 36U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[36U])   /* 20037 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 37U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[37U])   /* 20038 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 38U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[38U])   /* 20039 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 39U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[39U])   /* 20040 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 40U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[40U])   /* 20041 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 41U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[41U])   /* 20042 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 42U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[42U])   /* 20043 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 43U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[43U])   /* 20044 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 44U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[44U])   /* 20045 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 45U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[45U])   /* 20046 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 46U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[46U])   /* 20047 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 47U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[47U])   /* 20048 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 48U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[48U])   /* 20049 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 49U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[49U])   /* 20050 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 50U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[50U])   /* 20051 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 51U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[51U])   /* 20052 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 52U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[52U])   /* 20053 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 53U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[53U])   /* 20054 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 54U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[54U])   /* 20055 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 55U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[55U])   /* 20056 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 56U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[56U])   /* 20057 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 57U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[57U])   /* 20058 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 58U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[58U])   /* 20059 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 59U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[59U])   /* 20060 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 60U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[60U])   /* 20061 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 61U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[61U])   /* 20062 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 62U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[62U])   /* 20063 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 63U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[63U])   /* 20064 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 64U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[64U])   /* 20065 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 65U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[65U])   /* 20066 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 66U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[66U])   /* 20067 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 67U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[67U])   /* 20068 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 68U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[68U])   /* 20069 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 69U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[69U])   /* 20070 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 70U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[70U])   /* 20071 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 71U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[71U])   /* 20072 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 72U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[72U])   /* 20073 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 73U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[73U])   /* 20074 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 74U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[74U])   /* 20075 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 75U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[75U])   /* 20076 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 76U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[76U])   /* 20077 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 77U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[77U])   /* 20078 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 78U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[78U])   /* 20079 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 79U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[79U])   /* 20080 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 80U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[80U])   /* 20081 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 81U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[81U])   /* 20082 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 82U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[82U])   /* 20083 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 83U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[83U])   /* 20084 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 84U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[84U])   /* 20085 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 85U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[85U])   /* 20086 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 86U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[86U])   /* 20087 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 87U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[87U])   /* 20088 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 88U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[88U])   /* 20089 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 89U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[89U])   /* 20090 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 90U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[90U])   /* 20091 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 91U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[91U])   /* 20092 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 92U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[92U])   /* 20093 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 93U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[93U])   /* 20094 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 94U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[94U])   /* 20095 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 95U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[95U])   /* 20096 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 96U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[96U])   /* 20097 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 97U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[97U])   /* 20098 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 98U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[98U])   /* 20099 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 99U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[99U])   /* 20040 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 100U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[100U])  /* 20101 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 101U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[101U])  /* 20102 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 102U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[102U])  /* 20103 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 103U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[103U])  /* 20104 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 104U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[104U])  /* 20105 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 105U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[105U])  /* 20106 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 106U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[106U])  /* 20107 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 107U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[107U])  /* 20108 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 108U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[108U])  /* 20109 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 109U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[109U])  /* 20110 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 110U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[110U])  /* 20111 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 111U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[111U])  /* 20112 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 112U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[112U])  /* 20113 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 113U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[113U])  /* 20114 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 114U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[114U])  /* 20115 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 115U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[115U])  /* 20116 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 116U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[116U])  /* 20117 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 117U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[117U])  /* 20118 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 118U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[118U])  /* 20119 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 119U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[119U])  /* 20120 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 120U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[120U])  /* 20121 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 121U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[121U])  /* 20122 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 122U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[122U])  /* 20123 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 123U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[123U])  /* 20124 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 124U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[124U])  /* 20125 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 125U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[125U])  /* 20126 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 126U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[126U])  /* 20127 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 127U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[127U])  /* 20128 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 128U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[128U])  /* 20129 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 129U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[129U])  /* 20130 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 130U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[130U])  /* 20131 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 131U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[131U])  /* 20132 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 132U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[132U])  /* 20133 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 133U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[133U])  /* 20134 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 134U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[134U])  /* 20135 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 135U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[135U])  /* 20136 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 136U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[136U])  /* 20137 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 137U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[137U])  /* 20138 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 138U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[138U])  /* 20139 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 139U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[139U])  /* 20140 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 140U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[140U])  /* 20141 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 141U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[141U])  /* 20142 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 142U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[142U])  /* 20143 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 143U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[143U])  /* 20144 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 144U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[144U])  /* 20145 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 145U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[145U])  /* 20146 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 146U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[146U])  /* 20147 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 147U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[147U])  /* 20148 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 148U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[148U])  /* 20149 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 149U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[149U])  /* 20150 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 150U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[150U])  /* 20151 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 151U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[151U])  /* 20152 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 152U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[152U])  /* 20153 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 153U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[153U])  /* 20154 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 154U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[154U])  /* 20155 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 155U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[155U])  /* 20156 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 156U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[156U])  /* 20157 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 157U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[157U])  /* 20158 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 158U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[158U])  /* 20159 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 159U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[159U])  /* 20160 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 160U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[160U])  /* 20161 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 161U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[161U])  /* 20162 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 162U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[162U])  /* 20163 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 163U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[163U])  /* 20164 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 164U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[164U])  /* 20165 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 165U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[165U])  /* 20166 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 166U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[166U])  /* 20167 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 167U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[167U])  /* 20168 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 168U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[168U])  /* 20169 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 169U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[169U])  /* 20170 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 170U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[170U])  /* 20171 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 171U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[171U])  /* 20172 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 172U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[172U])  /* 20173 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 173U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[173U])  /* 20174 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 174U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[174U])  /* 20175 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 175U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[175U])  /* 20176 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 176U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[176U])  /* 20177 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 177U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[177U])  /* 20178 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 178U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[178U])  /* 20179 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 179U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[179U])  /* 20180 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 180U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[180U])  /* 20181 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 181U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[181U])  /* 20182 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 182U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[182U])  /* 20183 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 183U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[183U])  /* 20184 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 184U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[184U])  /* 20185 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 185U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[185U])  /* 20186 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 186U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[186U])  /* 20187 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 187U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[187U])  /* 20188 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 188U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[188U])  /* 20189 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 189U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[189U])  /* 20190 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 190U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[190U])  /* 20191 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 191U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[191U])  /* 20192 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 192U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[192U])  /* 20193 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 193U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[193U])  /* 20194 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 194U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[194U])  /* 20195 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 195U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[195U])  /* 20196 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 196U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[196U])  /* 20197 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 197U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[197U])  /* 20198 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 198U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[198U])  /* 20199 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 199U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[199U])  /* 20200 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 200U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[200U])  /* 20201 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 201U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[201U])  /* 20202 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 202U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[202U])  /* 20203 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 203U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[203U])  /* 20204 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 204U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[204U])  /* 20205 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 205U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[205U])  /* 20206 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 206U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[206U])  /* 20207 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 207U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[207U])  /* 20208 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 208U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[208U])  /* 20209 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 209U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[209U])  /* 20210 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 210U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[210U])  /* 20211 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 211U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[211U])  /* 20212 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 212U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[212U])  /* 20213 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 213U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[213U])  /* 20214 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 214U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[214U])  /* 20215 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 215U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[215U])  /* 20216 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 216U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[216U])  /* 20217 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 217U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[217U])  /* 20218 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 218U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[218U])  /* 20219 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 219U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[219U])  /* 20220 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 220U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[220U])  /* 20221 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 221U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[221U])  /* 20222 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 222U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[222U])  /* 20223 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 223U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[223U])  /* 20224 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 224U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[224U])  /* 20225 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 225U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[225U])  /* 20226 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 226U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[226U])  /* 20227 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 227U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[227U])  /* 20228 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 228U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[228U])  /* 20229 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 229U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[229U])  /* 20230 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 230U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[230U])  /* 20231 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 231U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[231U])  /* 20232 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 232U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[232U])  /* 20233 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 233U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[233U])  /* 20234 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 234U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[234U])  /* 20235 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 235U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[235U])  /* 20236 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 236U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[236U])  /* 20237 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 237U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[237U])  /* 20238 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 238U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[238U])  /* 20239 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 239U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[239U])  /* 20240 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 240U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[240U])  /* 20241 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 241U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[241U])  /* 20242 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 242U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[242U])  /* 20243 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 243U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[243U])  /* 20244 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 244U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[244U])  /* 20245 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 245U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[245U])  /* 20246 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 246U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[246U])  /* 20247 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 247U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[247U])  /* 20248 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 248U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[248U])  /* 20249 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 249U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[249U])  /* 20250 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 250U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[250U])  /* 20251 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 251U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[251U])  /* 20252 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 252U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[252U])  /* 20253 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 253U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[253U])  /* 20254 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 254U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[254U])  /* 20255 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 255U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[255U])  /* 20256 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 256U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[256U])  /* 20257 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 257U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[257U])  /* 20258 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 258U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[258U])  /* 20259 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 259U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[259U])  /* 20260 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 260U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[260U])  /* 20261 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 261U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[261U])  /* 20262 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 262U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[262U])  /* 20263 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 263U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[263U])  /* 20264 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 264U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[264U])  /* 20265 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 265U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[265U])  /* 20266 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 266U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[266U])  /* 20267 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 267U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[267U])  /* 20268 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 268U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[268U])  /* 20269 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 269U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[269U])  /* 20270 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 270U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[270U])  /* 20271 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 271U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[271U])  /* 20272 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 272U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[272U])  /* 20273 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 273U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[273U])  /* 20274 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 274U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[274U])  /* 20275 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 275U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[275U])  /* 20276 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 276U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[276U])  /* 20277 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 277U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[277U])  /* 20278 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 278U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[278U])  /* 20279 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 279U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[279U])  /* 20280 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 280U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[280U])  /* 20281 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 281U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[281U])  /* 20282 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 282U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[282U])  /* 20283 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 283U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[283U])  /* 20284 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 284U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[284U])  /* 20285 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 285U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[285U])  /* 20286 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 286U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[286U])  /* 20287 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 287U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[287U])  /* 20288 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 288U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[288U])  /* 20289 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 289U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[289U])  /* 20290 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 290U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[290U])  /* 20291 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 291U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[291U])  /* 20292 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 292U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[292U])  /* 20293 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 293U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[293U])  /* 20294 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 294U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[294U])  /* 20295 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 295U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[295U])  /* 20296 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 296U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[296U])  /* 20297 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 297U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[297U])  /* 20298 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 298U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[298U])  /* 20299 */
#endif
#if (Modbus_Slave_Coils_Count_3 > 299U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_3[299U])  /* 20300 */
#endif
};

#if (Modbus_Slave_Coils_Count_3 > 300U)
#error Modbus_Slave_Coils_Count_3 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_USB != 0)
uint8_t ui8_Modbus_Coils_Data_USB[Modbus_Slave_Coils_Count_USB];

uint8_t * const ui8_Modbus_Coils_USB[Modbus_Slave_Coils_Count_USB] = {
    uint8_Pointer(ui8_Modbus_Coils_Data_USB[0U])      /* 20001 */
#if (Modbus_Slave_Coils_Count_USB > 1U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[1U])    /* 20002 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 2U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[2U])    /* 20003 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 3U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[3U])    /* 20004 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 4U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[4U])    /* 20005 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 5U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[5U])    /* 20006 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 6U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[6U])    /* 20007 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 7U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[7U])    /* 20008 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 8U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[8U])    /* 20009 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 9U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[9U])    /* 20010 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 10U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[10U])   /* 20011 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 11U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[11U])   /* 20012 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 12U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[12U])   /* 20013 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 13U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[13U])   /* 20014 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 14U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[14U])   /* 20015 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 15U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[15U])   /* 20016 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 16U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[16U])   /* 20017 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 17U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[17U])   /* 20018 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 18U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[18U])   /* 20019 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 19U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[19U])   /* 20020 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 20U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[20U])   /* 20021 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 21U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[21U])   /* 20022 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 22U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[22U])   /* 20023 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 23U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[23U])   /* 20024 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 24U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[24U])   /* 20025 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 25U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[25U])   /* 20026 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 26U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[26U])   /* 20027 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 27U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[27U])   /* 20028 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 28U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[28U])   /* 20029 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 29U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[29U])   /* 20030 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 30U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[30U])   /* 20031 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 31U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[31U])   /* 20032 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 32U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[32U])   /* 20033 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 33U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[33U])   /* 20034 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 34U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[34U])   /* 20035 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 35U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[35U])   /* 20036 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 36U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[36U])   /* 20037 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 37U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[37U])   /* 20038 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 38U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[38U])   /* 20039 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 39U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[39U])   /* 20040 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 40U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[40U])   /* 20041 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 41U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[41U])   /* 20042 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 42U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[42U])   /* 20043 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 43U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[43U])   /* 20044 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 44U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[44U])   /* 20045 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 45U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[45U])   /* 20046 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 46U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[46U])   /* 20047 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 47U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[47U])   /* 20048 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 48U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[48U])   /* 20049 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 49U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[49U])   /* 20050 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 50U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[50U])   /* 20051 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 51U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[51U])   /* 20052 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 52U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[52U])   /* 20053 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 53U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[53U])   /* 20054 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 54U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[54U])   /* 20055 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 55U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[55U])   /* 20056 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 56U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[56U])   /* 20057 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 57U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[57U])   /* 20058 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 58U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[58U])   /* 20059 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 59U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[59U])   /* 20060 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 60U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[60U])   /* 20061 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 61U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[61U])   /* 20062 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 62U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[62U])   /* 20063 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 63U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[63U])   /* 20064 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 64U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[64U])   /* 20065 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 65U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[65U])   /* 20066 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 66U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[66U])   /* 20067 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 67U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[67U])   /* 20068 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 68U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[68U])   /* 20069 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 69U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[69U])   /* 20070 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 70U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[70U])   /* 20071 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 71U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[71U])   /* 20072 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 72U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[72U])   /* 20073 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 73U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[73U])   /* 20074 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 74U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[74U])   /* 20075 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 75U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[75U])   /* 20076 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 76U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[76U])   /* 20077 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 77U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[77U])   /* 20078 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 78U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[78U])   /* 20079 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 79U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[79U])   /* 20080 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 80U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[80U])   /* 20081 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 81U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[81U])   /* 20082 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 82U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[82U])   /* 20083 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 83U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[83U])   /* 20084 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 84U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[84U])   /* 20085 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 85U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[85U])   /* 20086 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 86U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[86U])   /* 20087 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 87U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[87U])   /* 20088 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 88U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[88U])   /* 20089 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 89U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[89U])   /* 20090 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 90U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[90U])   /* 20091 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 91U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[91U])   /* 20092 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 92U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[92U])   /* 20093 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 93U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[93U])   /* 20094 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 94U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[94U])   /* 20095 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 95U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[95U])   /* 20096 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 96U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[96U])   /* 20097 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 97U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[97U])   /* 20098 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 98U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[98U])   /* 20099 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 99U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[99U])   /* 20040 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 100U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[100U])  /* 20101 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 101U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[101U])  /* 20102 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 102U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[102U])  /* 20103 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 103U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[103U])  /* 20104 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 104U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[104U])  /* 20105 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 105U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[105U])  /* 20106 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 106U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[106U])  /* 20107 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 107U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[107U])  /* 20108 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 108U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[108U])  /* 20109 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 109U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[109U])  /* 20110 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 110U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[110U])  /* 20111 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 111U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[111U])  /* 20112 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 112U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[112U])  /* 20113 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 113U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[113U])  /* 20114 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 114U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[114U])  /* 20115 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 115U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[115U])  /* 20116 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 116U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[116U])  /* 20117 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 117U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[117U])  /* 20118 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 118U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[118U])  /* 20119 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 119U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[119U])  /* 20120 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 120U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[120U])  /* 20121 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 121U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[121U])  /* 20122 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 122U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[122U])  /* 20123 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 123U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[123U])  /* 20124 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 124U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[124U])  /* 20125 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 125U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[125U])  /* 20126 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 126U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[126U])  /* 20127 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 127U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[127U])  /* 20128 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 128U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[128U])  /* 20129 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 129U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[129U])  /* 20130 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 130U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[130U])  /* 20131 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 131U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[131U])  /* 20132 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 132U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[132U])  /* 20133 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 133U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[133U])  /* 20134 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 134U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[134U])  /* 20135 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 135U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[135U])  /* 20136 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 136U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[136U])  /* 20137 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 137U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[137U])  /* 20138 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 138U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[138U])  /* 20139 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 139U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[139U])  /* 20140 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 140U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[140U])  /* 20141 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 141U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[141U])  /* 20142 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 142U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[142U])  /* 20143 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 143U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[143U])  /* 20144 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 144U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[144U])  /* 20145 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 145U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[145U])  /* 20146 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 146U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[146U])  /* 20147 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 147U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[147U])  /* 20148 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 148U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[148U])  /* 20149 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 149U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[149U])  /* 20150 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 150U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[150U])  /* 20151 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 151U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[151U])  /* 20152 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 152U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[152U])  /* 20153 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 153U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[153U])  /* 20154 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 154U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[154U])  /* 20155 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 155U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[155U])  /* 20156 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 156U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[156U])  /* 20157 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 157U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[157U])  /* 20158 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 158U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[158U])  /* 20159 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 159U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[159U])  /* 20160 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 160U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[160U])  /* 20161 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 161U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[161U])  /* 20162 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 162U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[162U])  /* 20163 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 163U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[163U])  /* 20164 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 164U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[164U])  /* 20165 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 165U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[165U])  /* 20166 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 166U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[166U])  /* 20167 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 167U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[167U])  /* 20168 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 168U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[168U])  /* 20169 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 169U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[169U])  /* 20170 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 170U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[170U])  /* 20171 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 171U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[171U])  /* 20172 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 172U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[172U])  /* 20173 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 173U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[173U])  /* 20174 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 174U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[174U])  /* 20175 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 175U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[175U])  /* 20176 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 176U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[176U])  /* 20177 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 177U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[177U])  /* 20178 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 178U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[178U])  /* 20179 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 179U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[179U])  /* 20180 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 180U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[180U])  /* 20181 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 181U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[181U])  /* 20182 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 182U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[182U])  /* 20183 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 183U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[183U])  /* 20184 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 184U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[184U])  /* 20185 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 185U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[185U])  /* 20186 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 186U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[186U])  /* 20187 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 187U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[187U])  /* 20188 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 188U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[188U])  /* 20189 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 189U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[189U])  /* 20190 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 190U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[190U])  /* 20191 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 191U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[191U])  /* 20192 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 192U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[192U])  /* 20193 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 193U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[193U])  /* 20194 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 194U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[194U])  /* 20195 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 195U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[195U])  /* 20196 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 196U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[196U])  /* 20197 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 197U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[197U])  /* 20198 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 198U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[198U])  /* 20199 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 199U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[199U])  /* 20200 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 200U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[200U])  /* 20201 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 201U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[201U])  /* 20202 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 202U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[202U])  /* 20203 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 203U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[203U])  /* 20204 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 204U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[204U])  /* 20205 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 205U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[205U])  /* 20206 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 206U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[206U])  /* 20207 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 207U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[207U])  /* 20208 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 208U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[208U])  /* 20209 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 209U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[209U])  /* 20210 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 210U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[210U])  /* 20211 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 211U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[211U])  /* 20212 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 212U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[212U])  /* 20213 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 213U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[213U])  /* 20214 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 214U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[214U])  /* 20215 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 215U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[215U])  /* 20216 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 216U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[216U])  /* 20217 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 217U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[217U])  /* 20218 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 218U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[218U])  /* 20219 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 219U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[219U])  /* 20220 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 220U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[220U])  /* 20221 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 221U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[221U])  /* 20222 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 222U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[222U])  /* 20223 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 223U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[223U])  /* 20224 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 224U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[224U])  /* 20225 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 225U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[225U])  /* 20226 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 226U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[226U])  /* 20227 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 227U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[227U])  /* 20228 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 228U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[228U])  /* 20229 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 229U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[229U])  /* 20230 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 230U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[230U])  /* 20231 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 231U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[231U])  /* 20232 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 232U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[232U])  /* 20233 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 233U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[233U])  /* 20234 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 234U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[234U])  /* 20235 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 235U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[235U])  /* 20236 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 236U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[236U])  /* 20237 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 237U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[237U])  /* 20238 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 238U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[238U])  /* 20239 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 239U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[239U])  /* 20240 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 240U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[240U])  /* 20241 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 241U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[241U])  /* 20242 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 242U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[242U])  /* 20243 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 243U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[243U])  /* 20244 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 244U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[244U])  /* 20245 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 245U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[245U])  /* 20246 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 246U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[246U])  /* 20247 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 247U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[247U])  /* 20248 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 248U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[248U])  /* 20249 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 249U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[249U])  /* 20250 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 250U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[250U])  /* 20251 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 251U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[251U])  /* 20252 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 252U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[252U])  /* 20253 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 253U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[253U])  /* 20254 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 254U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[254U])  /* 20255 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 255U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[255U])  /* 20256 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 256U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[256U])  /* 20257 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 257U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[257U])  /* 20258 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 258U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[258U])  /* 20259 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 259U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[259U])  /* 20260 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 260U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[260U])  /* 20261 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 261U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[261U])  /* 20262 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 262U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[262U])  /* 20263 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 263U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[263U])  /* 20264 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 264U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[264U])  /* 20265 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 265U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[265U])  /* 20266 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 266U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[266U])  /* 20267 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 267U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[267U])  /* 20268 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 268U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[268U])  /* 20269 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 269U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[269U])  /* 20270 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 270U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[270U])  /* 20271 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 271U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[271U])  /* 20272 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 272U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[272U])  /* 20273 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 273U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[273U])  /* 20274 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 274U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[274U])  /* 20275 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 275U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[275U])  /* 20276 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 276U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[276U])  /* 20277 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 277U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[277U])  /* 20278 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 278U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[278U])  /* 20279 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 279U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[279U])  /* 20280 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 280U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[280U])  /* 20281 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 281U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[281U])  /* 20282 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 282U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[282U])  /* 20283 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 283U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[283U])  /* 20284 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 284U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[284U])  /* 20285 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 285U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[285U])  /* 20286 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 286U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[286U])  /* 20287 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 287U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[287U])  /* 20288 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 288U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[288U])  /* 20289 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 289U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[289U])  /* 20290 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 290U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[290U])  /* 20291 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 291U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[291U])  /* 20292 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 292U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[292U])  /* 20293 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 293U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[293U])  /* 20294 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 294U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[294U])  /* 20295 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 295U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[295U])  /* 20296 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 296U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[296U])  /* 20297 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 297U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[297U])  /* 20298 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 298U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[298U])  /* 20299 */
#endif
#if (Modbus_Slave_Coils_Count_USB > 299U)
    , uint8_Pointer(ui8_Modbus_Coils_Data_USB[299U])  /* 20300 */
#endif
};

#if (Modbus_Slave_Coils_Count_USB > 300U)
#error Modbus_Slave_Coils_Count_USB > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_1 != 0)
uint16_t ui16_Modbus_Input_Registers_Data_1[Modbus_Slave_Input_Registers_Count_1];

uint16_t * const ui16_Modbus_Input_Registers_1[Modbus_Slave_Input_Registers_Count_1] = {
    uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[0U])      /* 30001 */
#if (Modbus_Slave_Input_Registers_Count_1 > 1U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[1U])    /* 30002 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 2U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[2U])    /* 30003 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 3U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[3U])    /* 30004 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 4U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[4U])    /* 30005 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 5U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[5U])    /* 30006 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 6U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[6U])    /* 30007 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 7U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[7U])    /* 30008 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 8U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[8U])    /* 30009 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 9U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[9U])    /* 30010 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 10U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[10U])   /* 30011 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 11U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[11U])   /* 30012 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 12U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[12U])   /* 30013 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 13U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[13U])   /* 30014 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 14U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[14U])   /* 30015 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 15U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[15U])   /* 30016 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 16U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[16U])   /* 30017 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 17U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[17U])   /* 30018 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 18U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[18U])   /* 30019 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 19U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[19U])   /* 30020 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 20U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[20U])   /* 30021 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 21U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[21U])   /* 30022 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 22U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[22U])   /* 30023 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 23U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[23U])   /* 30024 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 24U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[24U])   /* 30025 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 25U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[25U])   /* 30026 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 26U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[26U])   /* 30027 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 27U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[27U])   /* 30028 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 28U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[28U])   /* 30029 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 29U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[29U])   /* 30030 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 30U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[30U])   /* 30031 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 31U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[31U])   /* 30032 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 32U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[32U])   /* 30033 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 33U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[33U])   /* 30034 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 34U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[34U])   /* 30035 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 35U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[35U])   /* 30036 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 36U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[36U])   /* 30037 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 37U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[37U])   /* 30038 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 38U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[38U])   /* 30039 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 39U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[39U])   /* 30040 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 40U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[40U])   /* 30041 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 41U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[41U])   /* 30042 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 42U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[42U])   /* 30043 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 43U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[43U])   /* 30044 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 44U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[44U])   /* 30045 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 45U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[45U])   /* 30046 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 46U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[46U])   /* 30047 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 47U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[47U])   /* 30048 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 48U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[48U])   /* 30049 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 49U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[49U])   /* 30050 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 50U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[50U])   /* 30051 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 51U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[51U])   /* 30052 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 52U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[52U])   /* 30053 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 53U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[53U])   /* 30054 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 54U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[54U])   /* 30055 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 55U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[55U])   /* 30056 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 56U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[56U])   /* 30057 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 57U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[57U])   /* 30058 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 58U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[58U])   /* 30059 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 59U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[59U])   /* 30060 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 60U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[60U])   /* 30061 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 61U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[61U])   /* 30062 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 62U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[62U])   /* 30063 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 63U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[63U])   /* 30064 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 64U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[64U])   /* 30065 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 65U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[65U])   /* 30066 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 66U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[66U])   /* 30067 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 67U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[67U])   /* 30068 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 68U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[68U])   /* 30069 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 69U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[69U])   /* 30070 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 70U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[70U])   /* 30071 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 71U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[71U])   /* 30072 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 72U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[72U])   /* 30073 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 73U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[73U])   /* 30074 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 74U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[74U])   /* 30075 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 75U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[75U])   /* 30076 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 76U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[76U])   /* 30077 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 77U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[77U])   /* 30078 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 78U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[78U])   /* 30079 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 79U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[79U])   /* 30080 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 80U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[80U])   /* 30081 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 81U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[81U])   /* 30082 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 82U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[82U])   /* 30083 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 83U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[83U])   /* 30084 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 84U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[84U])   /* 30085 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 85U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[85U])   /* 30086 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 86U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[86U])   /* 30087 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 87U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[87U])   /* 30088 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 88U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[88U])   /* 30089 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 89U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[89U])   /* 30090 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 90U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[90U])   /* 30091 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 91U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[91U])   /* 30092 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 92U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[92U])   /* 30093 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 93U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[93U])   /* 30094 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 94U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[94U])   /* 30095 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 95U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[95U])   /* 30096 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 96U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[96U])   /* 30097 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 97U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[97U])   /* 30098 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 98U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[98U])   /* 30099 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 99U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[99U])   /* 30040 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 100U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[100U])  /* 30101 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 101U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[101U])  /* 30102 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 102U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[102U])  /* 30103 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 103U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[103U])  /* 30104 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 104U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[104U])  /* 30105 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 105U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[105U])  /* 30106 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 106U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[106U])  /* 30107 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 107U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[107U])  /* 30108 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 108U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[108U])  /* 30109 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 109U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[109U])  /* 30110 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 110U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[110U])  /* 30111 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 111U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[111U])  /* 30112 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 112U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[112U])  /* 30113 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 113U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[113U])  /* 30114 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 114U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[114U])  /* 30115 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 115U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[115U])  /* 30116 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 116U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[116U])  /* 30117 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 117U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[117U])  /* 30118 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 118U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[118U])  /* 30119 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 119U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[119U])  /* 30120 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 120U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[120U])  /* 30121 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 121U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[121U])  /* 30122 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 122U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[122U])  /* 30123 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 123U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[123U])  /* 30124 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 124U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[124U])  /* 30125 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 125U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[125U])  /* 30126 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 126U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[126U])  /* 30127 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 127U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[127U])  /* 30128 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 128U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[128U])  /* 30129 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 129U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[129U])  /* 30130 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 130U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[130U])  /* 30131 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 131U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[131U])  /* 30132 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 132U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[132U])  /* 30133 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 133U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[133U])  /* 30134 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 134U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[134U])  /* 30135 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 135U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[135U])  /* 30136 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 136U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[136U])  /* 30137 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 137U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[137U])  /* 30138 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 138U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[138U])  /* 30139 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 139U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[139U])  /* 30140 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 140U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[140U])  /* 30141 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 141U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[141U])  /* 30142 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 142U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[142U])  /* 30143 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 143U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[143U])  /* 30144 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 144U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[144U])  /* 30145 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 145U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[145U])  /* 30146 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 146U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[146U])  /* 30147 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 147U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[147U])  /* 30148 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 148U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[148U])  /* 30149 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 149U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[149U])  /* 30150 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 150U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[150U])  /* 30151 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 151U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[151U])  /* 30152 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 152U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[152U])  /* 30153 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 153U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[153U])  /* 30154 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 154U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[154U])  /* 30155 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 155U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[155U])  /* 30156 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 156U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[156U])  /* 30157 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 157U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[157U])  /* 30158 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 158U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[158U])  /* 30159 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 159U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[159U])  /* 30160 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 160U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[160U])  /* 30161 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 161U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[161U])  /* 30162 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 162U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[162U])  /* 30163 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 163U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[163U])  /* 30164 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 164U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[164U])  /* 30165 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 165U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[165U])  /* 30166 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 166U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[166U])  /* 30167 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 167U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[167U])  /* 30168 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 168U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[168U])  /* 30169 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 169U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[169U])  /* 30170 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 170U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[170U])  /* 30171 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 171U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[171U])  /* 30172 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 172U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[172U])  /* 30173 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 173U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[173U])  /* 30174 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 174U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[174U])  /* 30175 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 175U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[175U])  /* 30176 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 176U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[176U])  /* 30177 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 177U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[177U])  /* 30178 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 178U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[178U])  /* 30179 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 179U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[179U])  /* 30180 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 180U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[180U])  /* 30181 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 181U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[181U])  /* 30182 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 182U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[182U])  /* 30183 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 183U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[183U])  /* 30184 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 184U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[184U])  /* 30185 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 185U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[185U])  /* 30186 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 186U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[186U])  /* 30187 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 187U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[187U])  /* 30188 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 188U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[188U])  /* 30189 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 189U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[189U])  /* 30190 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 190U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[190U])  /* 30191 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 191U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[191U])  /* 30192 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 192U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[192U])  /* 30193 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 193U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[193U])  /* 30194 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 194U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[194U])  /* 30195 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 195U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[195U])  /* 30196 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 196U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[196U])  /* 30197 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 197U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[197U])  /* 30198 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 198U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[198U])  /* 30199 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 199U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[199U])  /* 30200 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 200U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[200U])  /* 30201 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 201U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[201U])  /* 30202 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 202U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[202U])  /* 30203 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 203U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[203U])  /* 30204 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 204U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[204U])  /* 30205 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 205U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[205U])  /* 30206 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 206U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[206U])  /* 30207 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 207U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[207U])  /* 30208 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 208U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[208U])  /* 30209 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 209U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[209U])  /* 30210 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 210U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[210U])  /* 30211 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 211U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[211U])  /* 30212 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 212U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[212U])  /* 30213 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 213U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[213U])  /* 30214 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 214U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[214U])  /* 30215 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 215U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[215U])  /* 30216 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 216U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[216U])  /* 30217 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 217U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[217U])  /* 30218 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 218U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[218U])  /* 30219 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 219U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[219U])  /* 30220 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 220U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[220U])  /* 30221 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 221U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[221U])  /* 30222 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 222U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[222U])  /* 30223 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 223U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[223U])  /* 30224 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 224U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[224U])  /* 30225 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 225U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[225U])  /* 30226 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 226U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[226U])  /* 30227 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 227U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[227U])  /* 30228 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 228U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[228U])  /* 30229 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 229U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[229U])  /* 30230 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 230U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[230U])  /* 30231 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 231U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[231U])  /* 30232 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 232U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[232U])  /* 30233 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 233U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[233U])  /* 30234 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 234U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[234U])  /* 30235 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 235U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[235U])  /* 30236 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 236U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[236U])  /* 30237 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 237U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[237U])  /* 30238 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 238U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[238U])  /* 30239 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 239U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[239U])  /* 30240 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 240U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[240U])  /* 30241 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 241U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[241U])  /* 30242 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 242U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[242U])  /* 30243 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 243U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[243U])  /* 30244 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 244U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[244U])  /* 30245 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 245U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[245U])  /* 30246 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 246U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[246U])  /* 30247 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 247U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[247U])  /* 30248 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 248U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[248U])  /* 30249 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 249U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[249U])  /* 30250 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 250U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[250U])  /* 30251 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 251U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[251U])  /* 30252 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 252U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[252U])  /* 30253 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 253U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[253U])  /* 30254 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 254U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[254U])  /* 30255 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 255U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[255U])  /* 30256 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 256U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[256U])  /* 30257 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 257U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[257U])  /* 30258 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 258U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[258U])  /* 30259 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 259U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[259U])  /* 30260 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 260U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[260U])  /* 30261 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 261U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[261U])  /* 30262 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 262U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[262U])  /* 30263 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 263U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[263U])  /* 30264 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 264U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[264U])  /* 30265 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 265U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[265U])  /* 30266 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 266U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[266U])  /* 30267 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 267U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[267U])  /* 30268 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 268U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[268U])  /* 30269 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 269U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[269U])  /* 30270 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 270U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[270U])  /* 30271 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 271U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[271U])  /* 30272 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 272U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[272U])  /* 30273 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 273U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[273U])  /* 30274 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 274U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[274U])  /* 30275 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 275U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[275U])  /* 30276 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 276U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[276U])  /* 30277 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 277U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[277U])  /* 30278 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 278U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[278U])  /* 30279 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 279U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[279U])  /* 30280 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 280U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[280U])  /* 30281 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 281U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[281U])  /* 30282 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 282U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[282U])  /* 30283 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 283U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[283U])  /* 30284 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 284U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[284U])  /* 30285 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 285U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[285U])  /* 30286 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 286U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[286U])  /* 30287 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 287U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[287U])  /* 30288 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 288U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[288U])  /* 30289 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 289U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[289U])  /* 30290 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 290U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[290U])  /* 30291 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 291U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[291U])  /* 30292 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 292U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[292U])  /* 30293 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 293U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[293U])  /* 30294 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 294U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[294U])  /* 30295 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 295U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[295U])  /* 30296 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 296U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[296U])  /* 30297 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 297U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[297U])  /* 30298 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 298U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[298U])  /* 30299 */
#endif
#if (Modbus_Slave_Input_Registers_Count_1 > 299U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_1[299U])  /* 30300 */
#endif
};

#if (Modbus_Slave_Input_Registers_Count_1 > 300U)
#error Modbus_Slave_Input_Registers_Count_1 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_2 != 0)
uint16_t ui16_Modbus_Input_Registers_Data_2[Modbus_Slave_Input_Registers_Count_2];

uint16_t * const ui16_Modbus_Input_Registers_2[Modbus_Slave_Input_Registers_Count_2] = {
    uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[0U])      /* 30001 */
#if (Modbus_Slave_Input_Registers_Count_2 > 1U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[1U])    /* 30002 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 2U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[2U])    /* 30003 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 3U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[3U])    /* 30004 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 4U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[4U])    /* 30005 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 5U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[5U])    /* 30006 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 6U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[6U])    /* 30007 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 7U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[7U])    /* 30008 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 8U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[8U])    /* 30009 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 9U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[9U])    /* 30010 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 10U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[10U])   /* 30011 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 11U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[11U])   /* 30012 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 12U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[12U])   /* 30013 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 13U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[13U])   /* 30014 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 14U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[14U])   /* 30015 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 15U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[15U])   /* 30016 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 16U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[16U])   /* 30017 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 17U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[17U])   /* 30018 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 18U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[18U])   /* 30019 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 19U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[19U])   /* 30020 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 20U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[20U])   /* 30021 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 21U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[21U])   /* 30022 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 22U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[22U])   /* 30023 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 23U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[23U])   /* 30024 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 24U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[24U])   /* 30025 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 25U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[25U])   /* 30026 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 26U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[26U])   /* 30027 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 27U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[27U])   /* 30028 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 28U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[28U])   /* 30029 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 29U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[29U])   /* 30030 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 30U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[30U])   /* 30031 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 31U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[31U])   /* 30032 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 32U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[32U])   /* 30033 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 33U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[33U])   /* 30034 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 34U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[34U])   /* 30035 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 35U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[35U])   /* 30036 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 36U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[36U])   /* 30037 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 37U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[37U])   /* 30038 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 38U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[38U])   /* 30039 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 39U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[39U])   /* 30040 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 40U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[40U])   /* 30041 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 41U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[41U])   /* 30042 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 42U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[42U])   /* 30043 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 43U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[43U])   /* 30044 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 44U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[44U])   /* 30045 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 45U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[45U])   /* 30046 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 46U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[46U])   /* 30047 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 47U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[47U])   /* 30048 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 48U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[48U])   /* 30049 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 49U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[49U])   /* 30050 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 50U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[50U])   /* 30051 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 51U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[51U])   /* 30052 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 52U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[52U])   /* 30053 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 53U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[53U])   /* 30054 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 54U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[54U])   /* 30055 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 55U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[55U])   /* 30056 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 56U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[56U])   /* 30057 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 57U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[57U])   /* 30058 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 58U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[58U])   /* 30059 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 59U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[59U])   /* 30060 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 60U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[60U])   /* 30061 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 61U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[61U])   /* 30062 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 62U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[62U])   /* 30063 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 63U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[63U])   /* 30064 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 64U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[64U])   /* 30065 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 65U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[65U])   /* 30066 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 66U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[66U])   /* 30067 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 67U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[67U])   /* 30068 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 68U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[68U])   /* 30069 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 69U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[69U])   /* 30070 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 70U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[70U])   /* 30071 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 71U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[71U])   /* 30072 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 72U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[72U])   /* 30073 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 73U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[73U])   /* 30074 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 74U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[74U])   /* 30075 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 75U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[75U])   /* 30076 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 76U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[76U])   /* 30077 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 77U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[77U])   /* 30078 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 78U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[78U])   /* 30079 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 79U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[79U])   /* 30080 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 80U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[80U])   /* 30081 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 81U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[81U])   /* 30082 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 82U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[82U])   /* 30083 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 83U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[83U])   /* 30084 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 84U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[84U])   /* 30085 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 85U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[85U])   /* 30086 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 86U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[86U])   /* 30087 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 87U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[87U])   /* 30088 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 88U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[88U])   /* 30089 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 89U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[89U])   /* 30090 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 90U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[90U])   /* 30091 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 91U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[91U])   /* 30092 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 92U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[92U])   /* 30093 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 93U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[93U])   /* 30094 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 94U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[94U])   /* 30095 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 95U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[95U])   /* 30096 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 96U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[96U])   /* 30097 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 97U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[97U])   /* 30098 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 98U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[98U])   /* 30099 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 99U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[99U])   /* 30040 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 100U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[100U])  /* 30101 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 101U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[101U])  /* 30102 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 102U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[102U])  /* 30103 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 103U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[103U])  /* 30104 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 104U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[104U])  /* 30105 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 105U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[105U])  /* 30106 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 106U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[106U])  /* 30107 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 107U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[107U])  /* 30108 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 108U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[108U])  /* 30109 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 109U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[109U])  /* 30110 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 110U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[110U])  /* 30111 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 111U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[111U])  /* 30112 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 112U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[112U])  /* 30113 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 113U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[113U])  /* 30114 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 114U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[114U])  /* 30115 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 115U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[115U])  /* 30116 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 116U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[116U])  /* 30117 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 117U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[117U])  /* 30118 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 118U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[118U])  /* 30119 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 119U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[119U])  /* 30120 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 120U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[120U])  /* 30121 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 121U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[121U])  /* 30122 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 122U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[122U])  /* 30123 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 123U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[123U])  /* 30124 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 124U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[124U])  /* 30125 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 125U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[125U])  /* 30126 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 126U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[126U])  /* 30127 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 127U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[127U])  /* 30128 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 128U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[128U])  /* 30129 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 129U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[129U])  /* 30130 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 130U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[130U])  /* 30131 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 131U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[131U])  /* 30132 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 132U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[132U])  /* 30133 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 133U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[133U])  /* 30134 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 134U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[134U])  /* 30135 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 135U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[135U])  /* 30136 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 136U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[136U])  /* 30137 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 137U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[137U])  /* 30138 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 138U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[138U])  /* 30139 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 139U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[139U])  /* 30140 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 140U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[140U])  /* 30141 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 141U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[141U])  /* 30142 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 142U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[142U])  /* 30143 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 143U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[143U])  /* 30144 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 144U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[144U])  /* 30145 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 145U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[145U])  /* 30146 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 146U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[146U])  /* 30147 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 147U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[147U])  /* 30148 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 148U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[148U])  /* 30149 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 149U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[149U])  /* 30150 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 150U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[150U])  /* 30151 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 151U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[151U])  /* 30152 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 152U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[152U])  /* 30153 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 153U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[153U])  /* 30154 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 154U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[154U])  /* 30155 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 155U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[155U])  /* 30156 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 156U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[156U])  /* 30157 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 157U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[157U])  /* 30158 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 158U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[158U])  /* 30159 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 159U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[159U])  /* 30160 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 160U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[160U])  /* 30161 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 161U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[161U])  /* 30162 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 162U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[162U])  /* 30163 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 163U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[163U])  /* 30164 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 164U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[164U])  /* 30165 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 165U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[165U])  /* 30166 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 166U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[166U])  /* 30167 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 167U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[167U])  /* 30168 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 168U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[168U])  /* 30169 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 169U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[169U])  /* 30170 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 170U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[170U])  /* 30171 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 171U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[171U])  /* 30172 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 172U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[172U])  /* 30173 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 173U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[173U])  /* 30174 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 174U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[174U])  /* 30175 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 175U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[175U])  /* 30176 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 176U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[176U])  /* 30177 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 177U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[177U])  /* 30178 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 178U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[178U])  /* 30179 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 179U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[179U])  /* 30180 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 180U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[180U])  /* 30181 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 181U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[181U])  /* 30182 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 182U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[182U])  /* 30183 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 183U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[183U])  /* 30184 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 184U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[184U])  /* 30185 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 185U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[185U])  /* 30186 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 186U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[186U])  /* 30187 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 187U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[187U])  /* 30188 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 188U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[188U])  /* 30189 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 189U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[189U])  /* 30190 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 190U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[190U])  /* 30191 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 191U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[191U])  /* 30192 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 192U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[192U])  /* 30193 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 193U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[193U])  /* 30194 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 194U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[194U])  /* 30195 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 195U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[195U])  /* 30196 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 196U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[196U])  /* 30197 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 197U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[197U])  /* 30198 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 198U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[198U])  /* 30199 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 199U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[199U])  /* 30200 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 200U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[200U])  /* 30201 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 201U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[201U])  /* 30202 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 202U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[202U])  /* 30203 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 203U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[203U])  /* 30204 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 204U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[204U])  /* 30205 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 205U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[205U])  /* 30206 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 206U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[206U])  /* 30207 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 207U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[207U])  /* 30208 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 208U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[208U])  /* 30209 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 209U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[209U])  /* 30210 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 210U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[210U])  /* 30211 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 211U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[211U])  /* 30212 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 212U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[212U])  /* 30213 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 213U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[213U])  /* 30214 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 214U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[214U])  /* 30215 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 215U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[215U])  /* 30216 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 216U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[216U])  /* 30217 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 217U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[217U])  /* 30218 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 218U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[218U])  /* 30219 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 219U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[219U])  /* 30220 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 220U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[220U])  /* 30221 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 221U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[221U])  /* 30222 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 222U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[222U])  /* 30223 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 223U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[223U])  /* 30224 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 224U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[224U])  /* 30225 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 225U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[225U])  /* 30226 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 226U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[226U])  /* 30227 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 227U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[227U])  /* 30228 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 228U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[228U])  /* 30229 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 229U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[229U])  /* 30230 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 230U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[230U])  /* 30231 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 231U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[231U])  /* 30232 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 232U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[232U])  /* 30233 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 233U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[233U])  /* 30234 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 234U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[234U])  /* 30235 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 235U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[235U])  /* 30236 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 236U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[236U])  /* 30237 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 237U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[237U])  /* 30238 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 238U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[238U])  /* 30239 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 239U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[239U])  /* 30240 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 240U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[240U])  /* 30241 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 241U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[241U])  /* 30242 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 242U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[242U])  /* 30243 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 243U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[243U])  /* 30244 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 244U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[244U])  /* 30245 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 245U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[245U])  /* 30246 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 246U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[246U])  /* 30247 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 247U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[247U])  /* 30248 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 248U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[248U])  /* 30249 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 249U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[249U])  /* 30250 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 250U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[250U])  /* 30251 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 251U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[251U])  /* 30252 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 252U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[252U])  /* 30253 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 253U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[253U])  /* 30254 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 254U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[254U])  /* 30255 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 255U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[255U])  /* 30256 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 256U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[256U])  /* 30257 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 257U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[257U])  /* 30258 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 258U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[258U])  /* 30259 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 259U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[259U])  /* 30260 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 260U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[260U])  /* 30261 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 261U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[261U])  /* 30262 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 262U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[262U])  /* 30263 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 263U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[263U])  /* 30264 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 264U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[264U])  /* 30265 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 265U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[265U])  /* 30266 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 266U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[266U])  /* 30267 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 267U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[267U])  /* 30268 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 268U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[268U])  /* 30269 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 269U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[269U])  /* 30270 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 270U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[270U])  /* 30271 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 271U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[271U])  /* 30272 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 272U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[272U])  /* 30273 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 273U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[273U])  /* 30274 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 274U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[274U])  /* 30275 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 275U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[275U])  /* 30276 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 276U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[276U])  /* 30277 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 277U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[277U])  /* 30278 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 278U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[278U])  /* 30279 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 279U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[279U])  /* 30280 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 280U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[280U])  /* 30281 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 281U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[281U])  /* 30282 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 282U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[282U])  /* 30283 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 283U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[283U])  /* 30284 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 284U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[284U])  /* 30285 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 285U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[285U])  /* 30286 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 286U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[286U])  /* 30287 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 287U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[287U])  /* 30288 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 288U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[288U])  /* 30289 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 289U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[289U])  /* 30290 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 290U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[290U])  /* 30291 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 291U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[291U])  /* 30292 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 292U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[292U])  /* 30293 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 293U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[293U])  /* 30294 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 294U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[294U])  /* 30295 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 295U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[295U])  /* 30296 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 296U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[296U])  /* 30297 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 297U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[297U])  /* 30298 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 298U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[298U])  /* 30299 */
#endif
#if (Modbus_Slave_Input_Registers_Count_2 > 299U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_2[299U])  /* 30300 */
#endif
};

#if (Modbus_Slave_Input_Registers_Count_2 > 300U)
#error Modbus_Slave_Input_Registers_Count_2 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_3 != 0)
uint16_t ui16_Modbus_Input_Registers_Data_3[Modbus_Slave_Input_Registers_Count_3];

uint16_t * const ui16_Modbus_Input_Registers_3[Modbus_Slave_Input_Registers_Count_3] = {
    uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[0U])      /* 30001 */
#if (Modbus_Slave_Input_Registers_Count_3 > 1U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[1U])    /* 30002 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 2U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[2U])    /* 30003 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 3U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[3U])    /* 30004 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 4U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[4U])    /* 30005 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 5U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[5U])    /* 30006 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 6U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[6U])    /* 30007 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 7U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[7U])    /* 30008 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 8U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[8U])    /* 30009 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 9U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[9U])    /* 30010 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 10U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[10U])   /* 30011 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 11U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[11U])   /* 30012 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 12U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[12U])   /* 30013 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 13U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[13U])   /* 30014 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 14U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[14U])   /* 30015 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 15U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[15U])   /* 30016 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 16U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[16U])   /* 30017 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 17U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[17U])   /* 30018 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 18U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[18U])   /* 30019 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 19U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[19U])   /* 30020 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 20U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[20U])   /* 30021 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 21U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[21U])   /* 30022 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 22U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[22U])   /* 30023 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 23U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[23U])   /* 30024 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 24U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[24U])   /* 30025 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 25U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[25U])   /* 30026 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 26U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[26U])   /* 30027 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 27U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[27U])   /* 30028 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 28U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[28U])   /* 30029 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 29U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[29U])   /* 30030 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 30U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[30U])   /* 30031 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 31U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[31U])   /* 30032 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 32U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[32U])   /* 30033 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 33U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[33U])   /* 30034 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 34U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[34U])   /* 30035 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 35U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[35U])   /* 30036 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 36U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[36U])   /* 30037 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 37U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[37U])   /* 30038 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 38U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[38U])   /* 30039 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 39U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[39U])   /* 30040 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 40U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[40U])   /* 30041 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 41U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[41U])   /* 30042 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 42U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[42U])   /* 30043 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 43U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[43U])   /* 30044 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 44U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[44U])   /* 30045 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 45U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[45U])   /* 30046 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 46U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[46U])   /* 30047 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 47U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[47U])   /* 30048 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 48U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[48U])   /* 30049 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 49U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[49U])   /* 30050 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 50U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[50U])   /* 30051 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 51U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[51U])   /* 30052 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 52U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[52U])   /* 30053 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 53U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[53U])   /* 30054 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 54U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[54U])   /* 30055 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 55U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[55U])   /* 30056 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 56U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[56U])   /* 30057 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 57U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[57U])   /* 30058 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 58U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[58U])   /* 30059 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 59U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[59U])   /* 30060 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 60U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[60U])   /* 30061 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 61U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[61U])   /* 30062 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 62U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[62U])   /* 30063 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 63U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[63U])   /* 30064 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 64U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[64U])   /* 30065 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 65U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[65U])   /* 30066 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 66U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[66U])   /* 30067 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 67U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[67U])   /* 30068 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 68U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[68U])   /* 30069 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 69U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[69U])   /* 30070 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 70U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[70U])   /* 30071 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 71U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[71U])   /* 30072 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 72U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[72U])   /* 30073 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 73U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[73U])   /* 30074 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 74U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[74U])   /* 30075 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 75U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[75U])   /* 30076 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 76U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[76U])   /* 30077 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 77U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[77U])   /* 30078 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 78U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[78U])   /* 30079 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 79U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[79U])   /* 30080 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 80U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[80U])   /* 30081 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 81U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[81U])   /* 30082 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 82U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[82U])   /* 30083 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 83U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[83U])   /* 30084 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 84U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[84U])   /* 30085 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 85U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[85U])   /* 30086 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 86U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[86U])   /* 30087 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 87U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[87U])   /* 30088 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 88U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[88U])   /* 30089 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 89U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[89U])   /* 30090 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 90U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[90U])   /* 30091 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 91U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[91U])   /* 30092 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 92U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[92U])   /* 30093 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 93U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[93U])   /* 30094 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 94U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[94U])   /* 30095 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 95U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[95U])   /* 30096 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 96U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[96U])   /* 30097 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 97U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[97U])   /* 30098 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 98U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[98U])   /* 30099 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 99U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[99U])   /* 30040 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 100U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[100U])  /* 30101 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 101U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[101U])  /* 30102 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 102U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[102U])  /* 30103 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 103U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[103U])  /* 30104 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 104U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[104U])  /* 30105 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 105U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[105U])  /* 30106 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 106U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[106U])  /* 30107 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 107U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[107U])  /* 30108 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 108U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[108U])  /* 30109 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 109U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[109U])  /* 30110 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 110U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[110U])  /* 30111 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 111U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[111U])  /* 30112 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 112U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[112U])  /* 30113 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 113U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[113U])  /* 30114 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 114U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[114U])  /* 30115 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 115U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[115U])  /* 30116 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 116U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[116U])  /* 30117 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 117U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[117U])  /* 30118 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 118U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[118U])  /* 30119 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 119U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[119U])  /* 30120 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 120U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[120U])  /* 30121 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 121U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[121U])  /* 30122 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 122U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[122U])  /* 30123 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 123U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[123U])  /* 30124 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 124U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[124U])  /* 30125 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 125U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[125U])  /* 30126 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 126U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[126U])  /* 30127 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 127U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[127U])  /* 30128 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 128U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[128U])  /* 30129 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 129U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[129U])  /* 30130 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 130U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[130U])  /* 30131 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 131U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[131U])  /* 30132 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 132U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[132U])  /* 30133 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 133U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[133U])  /* 30134 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 134U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[134U])  /* 30135 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 135U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[135U])  /* 30136 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 136U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[136U])  /* 30137 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 137U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[137U])  /* 30138 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 138U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[138U])  /* 30139 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 139U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[139U])  /* 30140 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 140U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[140U])  /* 30141 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 141U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[141U])  /* 30142 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 142U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[142U])  /* 30143 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 143U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[143U])  /* 30144 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 144U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[144U])  /* 30145 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 145U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[145U])  /* 30146 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 146U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[146U])  /* 30147 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 147U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[147U])  /* 30148 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 148U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[148U])  /* 30149 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 149U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[149U])  /* 30150 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 150U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[150U])  /* 30151 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 151U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[151U])  /* 30152 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 152U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[152U])  /* 30153 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 153U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[153U])  /* 30154 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 154U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[154U])  /* 30155 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 155U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[155U])  /* 30156 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 156U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[156U])  /* 30157 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 157U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[157U])  /* 30158 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 158U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[158U])  /* 30159 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 159U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[159U])  /* 30160 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 160U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[160U])  /* 30161 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 161U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[161U])  /* 30162 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 162U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[162U])  /* 30163 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 163U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[163U])  /* 30164 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 164U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[164U])  /* 30165 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 165U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[165U])  /* 30166 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 166U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[166U])  /* 30167 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 167U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[167U])  /* 30168 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 168U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[168U])  /* 30169 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 169U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[169U])  /* 30170 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 170U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[170U])  /* 30171 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 171U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[171U])  /* 30172 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 172U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[172U])  /* 30173 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 173U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[173U])  /* 30174 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 174U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[174U])  /* 30175 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 175U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[175U])  /* 30176 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 176U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[176U])  /* 30177 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 177U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[177U])  /* 30178 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 178U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[178U])  /* 30179 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 179U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[179U])  /* 30180 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 180U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[180U])  /* 30181 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 181U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[181U])  /* 30182 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 182U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[182U])  /* 30183 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 183U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[183U])  /* 30184 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 184U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[184U])  /* 30185 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 185U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[185U])  /* 30186 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 186U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[186U])  /* 30187 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 187U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[187U])  /* 30188 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 188U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[188U])  /* 30189 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 189U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[189U])  /* 30190 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 190U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[190U])  /* 30191 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 191U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[191U])  /* 30192 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 192U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[192U])  /* 30193 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 193U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[193U])  /* 30194 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 194U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[194U])  /* 30195 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 195U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[195U])  /* 30196 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 196U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[196U])  /* 30197 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 197U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[197U])  /* 30198 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 198U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[198U])  /* 30199 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 199U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[199U])  /* 30200 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 200U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[200U])  /* 30201 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 201U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[201U])  /* 30202 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 202U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[202U])  /* 30203 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 203U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[203U])  /* 30204 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 204U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[204U])  /* 30205 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 205U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[205U])  /* 30206 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 206U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[206U])  /* 30207 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 207U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[207U])  /* 30208 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 208U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[208U])  /* 30209 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 209U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[209U])  /* 30210 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 210U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[210U])  /* 30211 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 211U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[211U])  /* 30212 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 212U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[212U])  /* 30213 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 213U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[213U])  /* 30214 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 214U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[214U])  /* 30215 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 215U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[215U])  /* 30216 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 216U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[216U])  /* 30217 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 217U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[217U])  /* 30218 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 218U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[218U])  /* 30219 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 219U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[219U])  /* 30220 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 220U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[220U])  /* 30221 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 221U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[221U])  /* 30222 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 222U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[222U])  /* 30223 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 223U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[223U])  /* 30224 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 224U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[224U])  /* 30225 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 225U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[225U])  /* 30226 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 226U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[226U])  /* 30227 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 227U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[227U])  /* 30228 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 228U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[228U])  /* 30229 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 229U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[229U])  /* 30230 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 230U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[230U])  /* 30231 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 231U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[231U])  /* 30232 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 232U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[232U])  /* 30233 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 233U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[233U])  /* 30234 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 234U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[234U])  /* 30235 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 235U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[235U])  /* 30236 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 236U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[236U])  /* 30237 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 237U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[237U])  /* 30238 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 238U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[238U])  /* 30239 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 239U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[239U])  /* 30240 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 240U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[240U])  /* 30241 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 241U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[241U])  /* 30242 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 242U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[242U])  /* 30243 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 243U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[243U])  /* 30244 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 244U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[244U])  /* 30245 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 245U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[245U])  /* 30246 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 246U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[246U])  /* 30247 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 247U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[247U])  /* 30248 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 248U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[248U])  /* 30249 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 249U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[249U])  /* 30250 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 250U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[250U])  /* 30251 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 251U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[251U])  /* 30252 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 252U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[252U])  /* 30253 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 253U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[253U])  /* 30254 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 254U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[254U])  /* 30255 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 255U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[255U])  /* 30256 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 256U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[256U])  /* 30257 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 257U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[257U])  /* 30258 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 258U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[258U])  /* 30259 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 259U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[259U])  /* 30260 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 260U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[260U])  /* 30261 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 261U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[261U])  /* 30262 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 262U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[262U])  /* 30263 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 263U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[263U])  /* 30264 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 264U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[264U])  /* 30265 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 265U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[265U])  /* 30266 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 266U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[266U])  /* 30267 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 267U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[267U])  /* 30268 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 268U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[268U])  /* 30269 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 269U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[269U])  /* 30270 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 270U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[270U])  /* 30271 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 271U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[271U])  /* 30272 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 272U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[272U])  /* 30273 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 273U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[273U])  /* 30274 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 274U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[274U])  /* 30275 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 275U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[275U])  /* 30276 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 276U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[276U])  /* 30277 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 277U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[277U])  /* 30278 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 278U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[278U])  /* 30279 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 279U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[279U])  /* 30280 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 280U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[280U])  /* 30281 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 281U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[281U])  /* 30282 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 282U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[282U])  /* 30283 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 283U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[283U])  /* 30284 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 284U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[284U])  /* 30285 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 285U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[285U])  /* 30286 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 286U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[286U])  /* 30287 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 287U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[287U])  /* 30288 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 288U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[288U])  /* 30289 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 289U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[289U])  /* 30290 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 290U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[290U])  /* 30291 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 291U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[291U])  /* 30292 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 292U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[292U])  /* 30293 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 293U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[293U])  /* 30294 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 294U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[294U])  /* 30295 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 295U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[295U])  /* 30296 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 296U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[296U])  /* 30297 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 297U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[297U])  /* 30298 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 298U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[298U])  /* 30299 */
#endif
#if (Modbus_Slave_Input_Registers_Count_3 > 299U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_3[299U])  /* 30300 */
#endif
};

#if (Modbus_Slave_Input_Registers_Count_3 > 300U)
#error Modbus_Slave_Input_Registers_Count_3 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_USB != 0)
uint16_t ui16_Modbus_Input_Registers_Data_USB[Modbus_Slave_Input_Registers_Count_USB];

uint16_t * const ui16_Modbus_Input_Registers_USB[Modbus_Slave_Input_Registers_Count_USB] = {
    uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[0U])      /* 30001 */
#if (Modbus_Slave_Input_Registers_Count_USB > 1U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[1U])    /* 30002 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 2U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[2U])    /* 30003 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 3U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[3U])    /* 30004 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 4U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[4U])    /* 30005 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 5U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[5U])    /* 30006 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 6U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[6U])    /* 30007 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 7U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[7U])    /* 30008 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 8U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[8U])    /* 30009 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 9U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[9U])    /* 30010 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 10U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[10U])   /* 30011 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 11U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[11U])   /* 30012 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 12U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[12U])   /* 30013 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 13U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[13U])   /* 30014 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 14U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[14U])   /* 30015 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 15U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[15U])   /* 30016 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 16U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[16U])   /* 30017 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 17U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[17U])   /* 30018 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 18U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[18U])   /* 30019 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 19U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[19U])   /* 30020 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 20U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[20U])   /* 30021 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 21U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[21U])   /* 30022 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 22U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[22U])   /* 30023 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 23U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[23U])   /* 30024 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 24U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[24U])   /* 30025 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 25U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[25U])   /* 30026 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 26U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[26U])   /* 30027 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 27U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[27U])   /* 30028 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 28U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[28U])   /* 30029 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 29U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[29U])   /* 30030 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 30U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[30U])   /* 30031 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 31U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[31U])   /* 30032 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 32U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[32U])   /* 30033 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 33U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[33U])   /* 30034 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 34U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[34U])   /* 30035 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 35U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[35U])   /* 30036 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 36U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[36U])   /* 30037 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 37U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[37U])   /* 30038 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 38U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[38U])   /* 30039 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 39U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[39U])   /* 30040 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 40U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[40U])   /* 30041 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 41U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[41U])   /* 30042 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 42U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[42U])   /* 30043 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 43U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[43U])   /* 30044 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 44U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[44U])   /* 30045 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 45U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[45U])   /* 30046 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 46U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[46U])   /* 30047 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 47U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[47U])   /* 30048 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 48U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[48U])   /* 30049 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 49U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[49U])   /* 30050 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 50U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[50U])   /* 30051 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 51U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[51U])   /* 30052 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 52U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[52U])   /* 30053 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 53U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[53U])   /* 30054 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 54U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[54U])   /* 30055 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 55U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[55U])   /* 30056 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 56U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[56U])   /* 30057 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 57U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[57U])   /* 30058 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 58U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[58U])   /* 30059 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 59U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[59U])   /* 30060 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 60U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[60U])   /* 30061 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 61U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[61U])   /* 30062 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 62U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[62U])   /* 30063 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 63U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[63U])   /* 30064 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 64U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[64U])   /* 30065 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 65U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[65U])   /* 30066 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 66U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[66U])   /* 30067 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 67U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[67U])   /* 30068 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 68U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[68U])   /* 30069 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 69U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[69U])   /* 30070 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 70U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[70U])   /* 30071 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 71U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[71U])   /* 30072 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 72U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[72U])   /* 30073 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 73U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[73U])   /* 30074 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 74U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[74U])   /* 30075 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 75U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[75U])   /* 30076 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 76U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[76U])   /* 30077 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 77U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[77U])   /* 30078 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 78U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[78U])   /* 30079 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 79U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[79U])   /* 30080 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 80U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[80U])   /* 30081 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 81U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[81U])   /* 30082 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 82U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[82U])   /* 30083 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 83U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[83U])   /* 30084 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 84U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[84U])   /* 30085 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 85U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[85U])   /* 30086 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 86U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[86U])   /* 30087 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 87U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[87U])   /* 30088 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 88U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[88U])   /* 30089 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 89U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[89U])   /* 30090 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 90U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[90U])   /* 30091 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 91U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[91U])   /* 30092 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 92U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[92U])   /* 30093 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 93U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[93U])   /* 30094 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 94U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[94U])   /* 30095 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 95U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[95U])   /* 30096 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 96U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[96U])   /* 30097 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 97U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[97U])   /* 30098 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 98U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[98U])   /* 30099 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 99U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[99U])   /* 30040 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 100U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[100U])  /* 30101 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 101U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[101U])  /* 30102 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 102U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[102U])  /* 30103 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 103U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[103U])  /* 30104 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 104U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[104U])  /* 30105 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 105U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[105U])  /* 30106 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 106U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[106U])  /* 30107 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 107U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[107U])  /* 30108 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 108U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[108U])  /* 30109 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 109U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[109U])  /* 30110 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 110U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[110U])  /* 30111 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 111U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[111U])  /* 30112 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 112U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[112U])  /* 30113 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 113U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[113U])  /* 30114 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 114U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[114U])  /* 30115 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 115U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[115U])  /* 30116 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 116U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[116U])  /* 30117 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 117U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[117U])  /* 30118 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 118U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[118U])  /* 30119 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 119U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[119U])  /* 30120 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 120U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[120U])  /* 30121 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 121U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[121U])  /* 30122 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 122U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[122U])  /* 30123 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 123U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[123U])  /* 30124 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 124U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[124U])  /* 30125 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 125U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[125U])  /* 30126 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 126U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[126U])  /* 30127 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 127U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[127U])  /* 30128 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 128U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[128U])  /* 30129 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 129U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[129U])  /* 30130 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 130U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[130U])  /* 30131 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 131U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[131U])  /* 30132 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 132U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[132U])  /* 30133 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 133U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[133U])  /* 30134 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 134U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[134U])  /* 30135 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 135U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[135U])  /* 30136 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 136U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[136U])  /* 30137 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 137U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[137U])  /* 30138 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 138U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[138U])  /* 30139 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 139U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[139U])  /* 30140 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 140U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[140U])  /* 30141 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 141U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[141U])  /* 30142 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 142U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[142U])  /* 30143 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 143U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[143U])  /* 30144 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 144U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[144U])  /* 30145 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 145U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[145U])  /* 30146 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 146U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[146U])  /* 30147 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 147U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[147U])  /* 30148 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 148U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[148U])  /* 30149 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 149U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[149U])  /* 30150 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 150U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[150U])  /* 30151 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 151U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[151U])  /* 30152 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 152U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[152U])  /* 30153 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 153U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[153U])  /* 30154 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 154U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[154U])  /* 30155 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 155U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[155U])  /* 30156 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 156U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[156U])  /* 30157 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 157U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[157U])  /* 30158 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 158U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[158U])  /* 30159 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 159U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[159U])  /* 30160 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 160U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[160U])  /* 30161 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 161U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[161U])  /* 30162 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 162U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[162U])  /* 30163 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 163U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[163U])  /* 30164 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 164U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[164U])  /* 30165 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 165U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[165U])  /* 30166 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 166U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[166U])  /* 30167 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 167U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[167U])  /* 30168 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 168U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[168U])  /* 30169 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 169U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[169U])  /* 30170 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 170U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[170U])  /* 30171 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 171U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[171U])  /* 30172 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 172U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[172U])  /* 30173 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 173U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[173U])  /* 30174 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 174U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[174U])  /* 30175 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 175U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[175U])  /* 30176 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 176U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[176U])  /* 30177 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 177U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[177U])  /* 30178 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 178U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[178U])  /* 30179 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 179U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[179U])  /* 30180 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 180U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[180U])  /* 30181 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 181U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[181U])  /* 30182 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 182U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[182U])  /* 30183 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 183U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[183U])  /* 30184 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 184U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[184U])  /* 30185 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 185U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[185U])  /* 30186 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 186U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[186U])  /* 30187 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 187U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[187U])  /* 30188 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 188U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[188U])  /* 30189 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 189U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[189U])  /* 30190 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 190U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[190U])  /* 30191 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 191U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[191U])  /* 30192 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 192U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[192U])  /* 30193 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 193U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[193U])  /* 30194 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 194U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[194U])  /* 30195 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 195U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[195U])  /* 30196 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 196U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[196U])  /* 30197 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 197U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[197U])  /* 30198 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 198U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[198U])  /* 30199 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 199U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[199U])  /* 30200 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 200U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[200U])  /* 30201 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 201U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[201U])  /* 30202 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 202U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[202U])  /* 30203 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 203U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[203U])  /* 30204 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 204U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[204U])  /* 30205 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 205U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[205U])  /* 30206 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 206U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[206U])  /* 30207 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 207U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[207U])  /* 30208 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 208U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[208U])  /* 30209 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 209U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[209U])  /* 30210 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 210U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[210U])  /* 30211 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 211U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[211U])  /* 30212 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 212U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[212U])  /* 30213 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 213U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[213U])  /* 30214 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 214U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[214U])  /* 30215 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 215U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[215U])  /* 30216 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 216U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[216U])  /* 30217 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 217U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[217U])  /* 30218 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 218U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[218U])  /* 30219 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 219U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[219U])  /* 30220 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 220U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[220U])  /* 30221 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 221U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[221U])  /* 30222 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 222U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[222U])  /* 30223 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 223U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[223U])  /* 30224 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 224U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[224U])  /* 30225 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 225U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[225U])  /* 30226 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 226U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[226U])  /* 30227 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 227U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[227U])  /* 30228 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 228U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[228U])  /* 30229 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 229U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[229U])  /* 30230 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 230U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[230U])  /* 30231 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 231U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[231U])  /* 30232 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 232U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[232U])  /* 30233 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 233U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[233U])  /* 30234 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 234U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[234U])  /* 30235 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 235U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[235U])  /* 30236 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 236U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[236U])  /* 30237 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 237U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[237U])  /* 30238 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 238U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[238U])  /* 30239 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 239U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[239U])  /* 30240 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 240U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[240U])  /* 30241 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 241U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[241U])  /* 30242 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 242U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[242U])  /* 30243 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 243U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[243U])  /* 30244 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 244U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[244U])  /* 30245 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 245U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[245U])  /* 30246 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 246U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[246U])  /* 30247 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 247U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[247U])  /* 30248 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 248U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[248U])  /* 30249 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 249U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[249U])  /* 30250 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 250U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[250U])  /* 30251 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 251U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[251U])  /* 30252 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 252U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[252U])  /* 30253 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 253U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[253U])  /* 30254 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 254U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[254U])  /* 30255 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 255U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[255U])  /* 30256 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 256U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[256U])  /* 30257 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 257U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[257U])  /* 30258 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 258U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[258U])  /* 30259 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 259U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[259U])  /* 30260 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 260U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[260U])  /* 30261 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 261U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[261U])  /* 30262 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 262U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[262U])  /* 30263 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 263U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[263U])  /* 30264 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 264U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[264U])  /* 30265 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 265U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[265U])  /* 30266 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 266U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[266U])  /* 30267 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 267U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[267U])  /* 30268 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 268U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[268U])  /* 30269 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 269U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[269U])  /* 30270 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 270U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[270U])  /* 30271 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 271U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[271U])  /* 30272 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 272U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[272U])  /* 30273 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 273U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[273U])  /* 30274 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 274U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[274U])  /* 30275 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 275U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[275U])  /* 30276 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 276U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[276U])  /* 30277 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 277U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[277U])  /* 30278 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 278U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[278U])  /* 30279 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 279U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[279U])  /* 30280 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 280U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[280U])  /* 30281 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 281U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[281U])  /* 30282 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 282U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[282U])  /* 30283 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 283U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[283U])  /* 30284 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 284U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[284U])  /* 30285 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 285U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[285U])  /* 30286 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 286U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[286U])  /* 30287 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 287U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[287U])  /* 30288 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 288U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[288U])  /* 30289 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 289U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[289U])  /* 30290 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 290U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[290U])  /* 30291 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 291U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[291U])  /* 30292 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 292U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[292U])  /* 30293 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 293U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[293U])  /* 30294 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 294U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[294U])  /* 30295 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 295U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[295U])  /* 30296 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 296U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[296U])  /* 30297 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 297U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[297U])  /* 30298 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 298U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[298U])  /* 30299 */
#endif
#if (Modbus_Slave_Input_Registers_Count_USB > 299U)
    , uint16_Pointer(ui16_Modbus_Input_Registers_Data_USB[299U])  /* 30300 */
#endif
};

#if (Modbus_Slave_Input_Registers_Count_USB > 300U)
#error Modbus_Slave_Input_Registers_Count_USB > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_1 != 0)
uint16_t ui16_Modbus_Holding_Registers_Data_1[Modbus_Slave_Holding_Registers_Count_1];

uint16_t * const ui16_Modbus_Holding_Registers_1[Modbus_Slave_Holding_Registers_Count_1] = {
    uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[0U])      /* 40001 */
#if (Modbus_Slave_Holding_Registers_Count_1 > 1U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[1U])    /* 40002 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 2U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[2U])    /* 40003 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 3U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[3U])    /* 40004 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 4U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[4U])    /* 40005 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 5U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[5U])    /* 40006 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 6U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[6U])    /* 40007 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 7U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[7U])    /* 40008 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 8U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[8U])    /* 40009 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 9U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[9U])    /* 40010 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 10U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[10U])   /* 40011 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 11U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[11U])   /* 40012 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 12U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[12U])   /* 40013 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 13U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[13U])   /* 40014 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 14U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[14U])   /* 40015 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 15U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[15U])   /* 40016 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 16U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[16U])   /* 40017 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 17U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[17U])   /* 40018 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 18U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[18U])   /* 40019 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 19U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[19U])   /* 40020 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 20U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[20U])   /* 40021 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 21U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[21U])   /* 40022 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 22U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[22U])   /* 40023 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 23U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[23U])   /* 40024 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 24U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[24U])   /* 40025 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 25U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[25U])   /* 40026 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 26U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[26U])   /* 40027 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 27U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[27U])   /* 40028 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 28U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[28U])   /* 40029 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 29U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[29U])   /* 40030 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 30U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[30U])   /* 40031 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 31U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[31U])   /* 40032 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 32U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[32U])   /* 40033 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 33U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[33U])   /* 40034 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 34U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[34U])   /* 40035 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 35U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[35U])   /* 40036 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 36U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[36U])   /* 40037 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 37U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[37U])   /* 40038 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 38U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[38U])   /* 40039 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 39U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[39U])   /* 40040 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 40U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[40U])   /* 40041 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 41U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[41U])   /* 40042 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 42U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[42U])   /* 40043 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 43U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[43U])   /* 40044 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 44U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[44U])   /* 40045 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 45U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[45U])   /* 40046 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 46U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[46U])   /* 40047 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 47U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[47U])   /* 40048 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 48U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[48U])   /* 40049 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 49U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[49U])   /* 40050 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 50U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[50U])   /* 40051 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 51U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[51U])   /* 40052 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 52U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[52U])   /* 40053 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 53U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[53U])   /* 40054 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 54U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[54U])   /* 40055 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 55U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[55U])   /* 40056 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 56U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[56U])   /* 40057 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 57U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[57U])   /* 40058 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 58U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[58U])   /* 40059 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 59U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[59U])   /* 40060 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 60U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[60U])   /* 40061 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 61U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[61U])   /* 40062 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 62U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[62U])   /* 40063 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 63U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[63U])   /* 40064 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 64U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[64U])   /* 40065 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 65U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[65U])   /* 40066 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 66U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[66U])   /* 40067 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 67U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[67U])   /* 40068 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 68U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[68U])   /* 40069 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 69U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[69U])   /* 40070 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 70U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[70U])   /* 40071 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 71U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[71U])   /* 40072 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 72U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[72U])   /* 40073 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 73U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[73U])   /* 40074 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 74U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[74U])   /* 40075 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 75U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[75U])   /* 40076 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 76U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[76U])   /* 40077 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 77U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[77U])   /* 40078 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 78U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[78U])   /* 40079 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 79U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[79U])   /* 40080 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 80U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[80U])   /* 40081 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 81U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[81U])   /* 40082 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 82U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[82U])   /* 40083 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 83U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[83U])   /* 40084 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 84U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[84U])   /* 40085 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 85U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[85U])   /* 40086 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 86U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[86U])   /* 40087 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 87U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[87U])   /* 40088 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 88U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[88U])   /* 40089 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 89U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[89U])   /* 40090 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 90U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[90U])   /* 40091 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 91U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[91U])   /* 40092 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 92U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[92U])   /* 40093 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 93U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[93U])   /* 40094 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 94U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[94U])   /* 40095 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 95U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[95U])   /* 40096 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 96U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[96U])   /* 40097 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 97U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[97U])   /* 40098 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 98U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[98U])   /* 40099 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 99U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[99U])   /* 40040 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 100U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[100U])  /* 40101 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 101U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[101U])  /* 40102 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 102U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[102U])  /* 40103 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 103U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[103U])  /* 40104 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 104U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[104U])  /* 40105 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 105U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[105U])  /* 40106 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 106U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[106U])  /* 40107 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 107U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[107U])  /* 40108 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 108U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[108U])  /* 40109 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 109U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[109U])  /* 40110 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 110U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[110U])  /* 40111 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 111U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[111U])  /* 40112 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 112U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[112U])  /* 40113 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 113U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[113U])  /* 40114 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 114U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[114U])  /* 40115 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 115U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[115U])  /* 40116 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 116U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[116U])  /* 40117 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 117U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[117U])  /* 40118 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 118U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[118U])  /* 40119 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 119U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[119U])  /* 40120 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 120U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[120U])  /* 40121 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 121U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[121U])  /* 40122 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 122U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[122U])  /* 40123 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 123U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[123U])  /* 40124 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 124U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[124U])  /* 40125 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 125U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[125U])  /* 40126 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 126U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[126U])  /* 40127 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 127U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[127U])  /* 40128 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 128U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[128U])  /* 40129 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 129U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[129U])  /* 40130 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 130U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[130U])  /* 40131 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 131U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[131U])  /* 40132 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 132U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[132U])  /* 40133 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 133U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[133U])  /* 40134 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 134U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[134U])  /* 40135 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 135U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[135U])  /* 40136 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 136U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[136U])  /* 40137 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 137U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[137U])  /* 40138 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 138U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[138U])  /* 40139 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 139U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[139U])  /* 40140 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 140U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[140U])  /* 40141 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 141U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[141U])  /* 40142 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 142U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[142U])  /* 40143 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 143U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[143U])  /* 40144 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 144U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[144U])  /* 40145 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 145U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[145U])  /* 40146 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 146U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[146U])  /* 40147 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 147U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[147U])  /* 40148 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 148U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[148U])  /* 40149 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 149U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[149U])  /* 40150 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 150U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[150U])  /* 40151 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 151U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[151U])  /* 40152 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 152U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[152U])  /* 40153 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 153U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[153U])  /* 40154 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 154U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[154U])  /* 40155 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 155U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[155U])  /* 40156 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 156U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[156U])  /* 40157 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 157U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[157U])  /* 40158 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 158U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[158U])  /* 40159 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 159U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[159U])  /* 40160 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 160U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[160U])  /* 40161 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 161U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[161U])  /* 40162 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 162U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[162U])  /* 40163 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 163U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[163U])  /* 40164 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 164U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[164U])  /* 40165 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 165U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[165U])  /* 40166 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 166U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[166U])  /* 40167 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 167U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[167U])  /* 40168 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 168U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[168U])  /* 40169 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 169U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[169U])  /* 40170 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 170U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[170U])  /* 40171 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 171U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[171U])  /* 40172 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 172U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[172U])  /* 40173 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 173U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[173U])  /* 40174 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 174U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[174U])  /* 40175 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 175U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[175U])  /* 40176 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 176U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[176U])  /* 40177 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 177U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[177U])  /* 40178 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 178U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[178U])  /* 40179 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 179U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[179U])  /* 40180 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 180U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[180U])  /* 40181 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 181U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[181U])  /* 40182 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 182U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[182U])  /* 40183 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 183U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[183U])  /* 40184 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 184U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[184U])  /* 40185 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 185U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[185U])  /* 40186 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 186U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[186U])  /* 40187 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 187U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[187U])  /* 40188 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 188U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[188U])  /* 40189 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 189U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[189U])  /* 40190 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 190U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[190U])  /* 40191 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 191U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[191U])  /* 40192 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 192U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[192U])  /* 40193 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 193U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[193U])  /* 40194 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 194U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[194U])  /* 40195 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 195U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[195U])  /* 40196 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 196U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[196U])  /* 40197 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 197U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[197U])  /* 40198 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 198U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[198U])  /* 40199 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 199U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[199U])  /* 40200 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 200U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[200U])  /* 40201 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 201U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[201U])  /* 40202 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 202U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[202U])  /* 40203 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 203U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[203U])  /* 40204 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 204U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[204U])  /* 40205 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 205U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[205U])  /* 40206 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 206U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[206U])  /* 40207 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 207U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[207U])  /* 40208 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 208U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[208U])  /* 40209 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 209U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[209U])  /* 40210 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 210U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[210U])  /* 40211 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 211U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[211U])  /* 40212 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 212U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[212U])  /* 40213 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 213U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[213U])  /* 40214 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 214U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[214U])  /* 40215 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 215U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[215U])  /* 40216 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 216U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[216U])  /* 40217 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 217U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[217U])  /* 40218 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 218U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[218U])  /* 40219 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 219U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[219U])  /* 40220 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 220U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[220U])  /* 40221 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 221U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[221U])  /* 40222 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 222U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[222U])  /* 40223 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 223U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[223U])  /* 40224 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 224U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[224U])  /* 40225 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 225U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[225U])  /* 40226 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 226U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[226U])  /* 40227 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 227U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[227U])  /* 40228 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 228U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[228U])  /* 40229 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 229U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[229U])  /* 40230 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 230U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[230U])  /* 40231 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 231U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[231U])  /* 40232 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 232U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[232U])  /* 40233 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 233U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[233U])  /* 40234 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 234U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[234U])  /* 40235 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 235U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[235U])  /* 40236 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 236U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[236U])  /* 40237 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 237U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[237U])  /* 40238 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 238U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[238U])  /* 40239 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 239U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[239U])  /* 40240 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 240U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[240U])  /* 40241 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 241U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[241U])  /* 40242 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 242U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[242U])  /* 40243 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 243U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[243U])  /* 40244 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 244U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[244U])  /* 40245 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 245U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[245U])  /* 40246 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 246U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[246U])  /* 40247 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 247U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[247U])  /* 40248 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 248U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[248U])  /* 40249 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 249U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[249U])  /* 40250 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 250U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[250U])  /* 40251 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 251U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[251U])  /* 40252 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 252U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[252U])  /* 40253 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 253U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[253U])  /* 40254 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 254U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[254U])  /* 40255 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 255U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[255U])  /* 40256 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 256U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[256U])  /* 40257 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 257U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[257U])  /* 40258 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 258U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[258U])  /* 40259 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 259U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[259U])  /* 40260 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 260U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[260U])  /* 40261 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 261U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[261U])  /* 40262 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 262U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[262U])  /* 40263 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 263U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[263U])  /* 40264 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 264U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[264U])  /* 40265 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 265U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[265U])  /* 40266 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 266U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[266U])  /* 40267 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 267U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[267U])  /* 40268 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 268U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[268U])  /* 40269 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 269U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[269U])  /* 40270 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 270U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[270U])  /* 40271 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 271U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[271U])  /* 40272 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 272U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[272U])  /* 40273 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 273U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[273U])  /* 40274 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 274U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[274U])  /* 40275 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 275U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[275U])  /* 40276 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 276U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[276U])  /* 40277 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 277U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[277U])  /* 40278 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 278U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[278U])  /* 40279 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 279U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[279U])  /* 40280 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 280U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[280U])  /* 40281 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 281U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[281U])  /* 40282 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 282U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[282U])  /* 40283 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 283U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[283U])  /* 40284 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 284U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[284U])  /* 40285 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 285U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[285U])  /* 40286 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 286U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[286U])  /* 40287 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 287U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[287U])  /* 40288 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 288U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[288U])  /* 40289 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 289U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[289U])  /* 40290 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 290U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[290U])  /* 40291 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 291U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[291U])  /* 40292 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 292U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[292U])  /* 40293 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 293U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[293U])  /* 40294 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 294U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[294U])  /* 40295 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 295U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[295U])  /* 40296 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 296U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[296U])  /* 40297 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 297U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[297U])  /* 40298 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 298U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[298U])  /* 40299 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_1 > 299U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_1[299U])  /* 40300 */
#endif
};

#if (Modbus_Slave_Holding_Registers_Count_1 > 300U)
#error Modbus_Slave_Holding_Registers_Count_1 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_2 != 0)
uint16_t ui16_Modbus_Holding_Registers_Data_2[Modbus_Slave_Holding_Registers_Count_2];

uint16_t * const ui16_Modbus_Holding_Registers_2[Modbus_Slave_Holding_Registers_Count_2] = {
    uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[0U])      /* 40001 */
#if (Modbus_Slave_Holding_Registers_Count_2 > 1U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[1U])    /* 40002 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 2U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[2U])    /* 40003 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 3U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[3U])    /* 40004 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 4U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[4U])    /* 40005 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 5U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[5U])    /* 40006 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 6U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[6U])    /* 40007 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 7U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[7U])    /* 40008 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 8U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[8U])    /* 40009 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 9U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[9U])    /* 40010 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 10U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[10U])   /* 40011 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 11U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[11U])   /* 40012 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 12U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[12U])   /* 40013 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 13U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[13U])   /* 40014 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 14U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[14U])   /* 40015 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 15U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[15U])   /* 40016 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 16U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[16U])   /* 40017 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 17U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[17U])   /* 40018 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 18U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[18U])   /* 40019 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 19U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[19U])   /* 40020 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 20U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[20U])   /* 40021 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 21U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[21U])   /* 40022 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 22U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[22U])   /* 40023 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 23U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[23U])   /* 40024 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 24U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[24U])   /* 40025 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 25U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[25U])   /* 40026 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 26U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[26U])   /* 40027 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 27U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[27U])   /* 40028 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 28U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[28U])   /* 40029 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 29U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[29U])   /* 40030 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 30U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[30U])   /* 40031 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 31U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[31U])   /* 40032 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 32U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[32U])   /* 40033 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 33U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[33U])   /* 40034 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 34U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[34U])   /* 40035 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 35U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[35U])   /* 40036 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 36U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[36U])   /* 40037 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 37U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[37U])   /* 40038 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 38U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[38U])   /* 40039 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 39U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[39U])   /* 40040 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 40U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[40U])   /* 40041 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 41U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[41U])   /* 40042 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 42U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[42U])   /* 40043 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 43U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[43U])   /* 40044 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 44U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[44U])   /* 40045 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 45U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[45U])   /* 40046 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 46U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[46U])   /* 40047 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 47U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[47U])   /* 40048 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 48U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[48U])   /* 40049 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 49U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[49U])   /* 40050 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 50U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[50U])   /* 40051 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 51U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[51U])   /* 40052 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 52U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[52U])   /* 40053 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 53U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[53U])   /* 40054 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 54U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[54U])   /* 40055 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 55U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[55U])   /* 40056 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 56U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[56U])   /* 40057 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 57U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[57U])   /* 40058 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 58U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[58U])   /* 40059 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 59U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[59U])   /* 40060 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 60U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[60U])   /* 40061 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 61U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[61U])   /* 40062 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 62U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[62U])   /* 40063 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 63U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[63U])   /* 40064 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 64U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[64U])   /* 40065 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 65U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[65U])   /* 40066 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 66U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[66U])   /* 40067 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 67U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[67U])   /* 40068 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 68U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[68U])   /* 40069 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 69U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[69U])   /* 40070 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 70U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[70U])   /* 40071 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 71U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[71U])   /* 40072 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 72U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[72U])   /* 40073 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 73U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[73U])   /* 40074 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 74U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[74U])   /* 40075 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 75U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[75U])   /* 40076 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 76U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[76U])   /* 40077 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 77U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[77U])   /* 40078 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 78U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[78U])   /* 40079 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 79U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[79U])   /* 40080 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 80U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[80U])   /* 40081 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 81U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[81U])   /* 40082 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 82U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[82U])   /* 40083 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 83U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[83U])   /* 40084 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 84U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[84U])   /* 40085 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 85U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[85U])   /* 40086 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 86U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[86U])   /* 40087 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 87U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[87U])   /* 40088 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 88U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[88U])   /* 40089 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 89U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[89U])   /* 40090 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 90U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[90U])   /* 40091 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 91U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[91U])   /* 40092 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 92U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[92U])   /* 40093 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 93U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[93U])   /* 40094 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 94U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[94U])   /* 40095 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 95U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[95U])   /* 40096 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 96U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[96U])   /* 40097 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 97U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[97U])   /* 40098 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 98U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[98U])   /* 40099 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 99U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[99U])   /* 40040 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 100U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[100U])  /* 40101 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 101U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[101U])  /* 40102 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 102U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[102U])  /* 40103 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 103U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[103U])  /* 40104 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 104U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[104U])  /* 40105 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 105U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[105U])  /* 40106 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 106U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[106U])  /* 40107 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 107U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[107U])  /* 40108 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 108U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[108U])  /* 40109 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 109U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[109U])  /* 40110 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 110U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[110U])  /* 40111 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 111U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[111U])  /* 40112 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 112U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[112U])  /* 40113 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 113U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[113U])  /* 40114 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 114U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[114U])  /* 40115 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 115U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[115U])  /* 40116 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 116U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[116U])  /* 40117 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 117U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[117U])  /* 40118 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 118U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[118U])  /* 40119 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 119U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[119U])  /* 40120 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 120U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[120U])  /* 40121 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 121U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[121U])  /* 40122 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 122U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[122U])  /* 40123 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 123U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[123U])  /* 40124 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 124U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[124U])  /* 40125 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 125U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[125U])  /* 40126 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 126U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[126U])  /* 40127 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 127U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[127U])  /* 40128 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 128U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[128U])  /* 40129 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 129U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[129U])  /* 40130 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 130U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[130U])  /* 40131 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 131U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[131U])  /* 40132 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 132U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[132U])  /* 40133 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 133U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[133U])  /* 40134 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 134U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[134U])  /* 40135 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 135U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[135U])  /* 40136 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 136U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[136U])  /* 40137 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 137U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[137U])  /* 40138 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 138U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[138U])  /* 40139 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 139U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[139U])  /* 40140 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 140U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[140U])  /* 40141 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 141U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[141U])  /* 40142 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 142U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[142U])  /* 40143 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 143U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[143U])  /* 40144 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 144U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[144U])  /* 40145 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 145U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[145U])  /* 40146 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 146U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[146U])  /* 40147 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 147U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[147U])  /* 40148 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 148U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[148U])  /* 40149 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 149U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[149U])  /* 40150 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 150U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[150U])  /* 40151 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 151U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[151U])  /* 40152 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 152U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[152U])  /* 40153 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 153U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[153U])  /* 40154 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 154U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[154U])  /* 40155 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 155U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[155U])  /* 40156 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 156U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[156U])  /* 40157 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 157U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[157U])  /* 40158 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 158U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[158U])  /* 40159 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 159U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[159U])  /* 40160 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 160U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[160U])  /* 40161 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 161U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[161U])  /* 40162 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 162U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[162U])  /* 40163 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 163U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[163U])  /* 40164 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 164U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[164U])  /* 40165 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 165U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[165U])  /* 40166 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 166U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[166U])  /* 40167 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 167U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[167U])  /* 40168 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 168U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[168U])  /* 40169 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 169U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[169U])  /* 40170 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 170U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[170U])  /* 40171 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 171U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[171U])  /* 40172 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 172U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[172U])  /* 40173 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 173U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[173U])  /* 40174 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 174U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[174U])  /* 40175 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 175U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[175U])  /* 40176 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 176U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[176U])  /* 40177 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 177U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[177U])  /* 40178 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 178U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[178U])  /* 40179 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 179U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[179U])  /* 40180 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 180U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[180U])  /* 40181 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 181U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[181U])  /* 40182 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 182U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[182U])  /* 40183 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 183U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[183U])  /* 40184 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 184U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[184U])  /* 40185 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 185U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[185U])  /* 40186 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 186U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[186U])  /* 40187 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 187U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[187U])  /* 40188 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 188U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[188U])  /* 40189 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 189U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[189U])  /* 40190 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 190U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[190U])  /* 40191 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 191U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[191U])  /* 40192 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 192U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[192U])  /* 40193 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 193U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[193U])  /* 40194 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 194U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[194U])  /* 40195 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 195U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[195U])  /* 40196 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 196U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[196U])  /* 40197 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 197U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[197U])  /* 40198 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 198U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[198U])  /* 40199 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 199U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[199U])  /* 40200 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 200U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[200U])  /* 40201 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 201U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[201U])  /* 40202 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 202U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[202U])  /* 40203 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 203U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[203U])  /* 40204 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 204U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[204U])  /* 40205 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 205U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[205U])  /* 40206 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 206U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[206U])  /* 40207 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 207U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[207U])  /* 40208 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 208U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[208U])  /* 40209 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 209U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[209U])  /* 40210 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 210U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[210U])  /* 40211 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 211U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[211U])  /* 40212 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 212U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[212U])  /* 40213 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 213U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[213U])  /* 40214 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 214U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[214U])  /* 40215 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 215U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[215U])  /* 40216 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 216U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[216U])  /* 40217 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 217U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[217U])  /* 40218 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 218U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[218U])  /* 40219 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 219U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[219U])  /* 40220 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 220U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[220U])  /* 40221 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 221U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[221U])  /* 40222 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 222U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[222U])  /* 40223 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 223U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[223U])  /* 40224 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 224U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[224U])  /* 40225 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 225U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[225U])  /* 40226 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 226U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[226U])  /* 40227 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 227U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[227U])  /* 40228 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 228U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[228U])  /* 40229 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 229U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[229U])  /* 40230 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 230U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[230U])  /* 40231 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 231U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[231U])  /* 40232 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 232U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[232U])  /* 40233 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 233U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[233U])  /* 40234 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 234U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[234U])  /* 40235 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 235U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[235U])  /* 40236 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 236U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[236U])  /* 40237 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 237U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[237U])  /* 40238 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 238U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[238U])  /* 40239 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 239U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[239U])  /* 40240 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 240U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[240U])  /* 40241 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 241U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[241U])  /* 40242 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 242U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[242U])  /* 40243 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 243U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[243U])  /* 40244 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 244U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[244U])  /* 40245 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 245U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[245U])  /* 40246 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 246U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[246U])  /* 40247 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 247U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[247U])  /* 40248 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 248U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[248U])  /* 40249 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 249U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[249U])  /* 40250 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 250U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[250U])  /* 40251 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 251U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[251U])  /* 40252 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 252U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[252U])  /* 40253 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 253U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[253U])  /* 40254 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 254U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[254U])  /* 40255 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 255U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[255U])  /* 40256 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 256U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[256U])  /* 40257 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 257U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[257U])  /* 40258 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 258U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[258U])  /* 40259 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 259U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[259U])  /* 40260 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 260U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[260U])  /* 40261 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 261U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[261U])  /* 40262 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 262U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[262U])  /* 40263 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 263U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[263U])  /* 40264 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 264U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[264U])  /* 40265 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 265U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[265U])  /* 40266 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 266U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[266U])  /* 40267 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 267U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[267U])  /* 40268 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 268U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[268U])  /* 40269 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 269U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[269U])  /* 40270 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 270U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[270U])  /* 40271 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 271U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[271U])  /* 40272 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 272U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[272U])  /* 40273 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 273U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[273U])  /* 40274 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 274U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[274U])  /* 40275 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 275U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[275U])  /* 40276 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 276U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[276U])  /* 40277 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 277U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[277U])  /* 40278 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 278U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[278U])  /* 40279 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 279U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[279U])  /* 40280 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 280U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[280U])  /* 40281 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 281U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[281U])  /* 40282 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 282U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[282U])  /* 40283 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 283U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[283U])  /* 40284 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 284U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[284U])  /* 40285 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 285U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[285U])  /* 40286 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 286U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[286U])  /* 40287 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 287U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[287U])  /* 40288 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 288U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[288U])  /* 40289 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 289U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[289U])  /* 40290 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 290U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[290U])  /* 40291 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 291U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[291U])  /* 40292 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 292U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[292U])  /* 40293 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 293U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[293U])  /* 40294 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 294U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[294U])  /* 40295 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 295U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[295U])  /* 40296 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 296U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[296U])  /* 40297 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 297U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[297U])  /* 40298 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 298U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[298U])  /* 40299 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_2 > 299U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_2[299U])  /* 40300 */
#endif
};

#if (Modbus_Slave_Holding_Registers_Count_2 > 300U)
#error Modbus_Slave_Holding_Registers_Count_2 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_3 != 0)
uint16_t ui16_Modbus_Holding_Registers_Data_3[Modbus_Slave_Holding_Registers_Count_3];

uint16_t * const ui16_Modbus_Holding_Registers_3[Modbus_Slave_Holding_Registers_Count_3] = {
    uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[0U])      /* 40001 */
#if (Modbus_Slave_Holding_Registers_Count_3 > 1U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[1U])    /* 40002 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 2U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[2U])    /* 40003 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 3U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[3U])    /* 40004 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 4U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[4U])    /* 40005 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 5U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[5U])    /* 40006 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 6U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[6U])    /* 40007 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 7U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[7U])    /* 40008 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 8U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[8U])    /* 40009 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 9U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[9U])    /* 40010 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 10U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[10U])   /* 40011 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 11U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[11U])   /* 40012 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 12U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[12U])   /* 40013 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 13U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[13U])   /* 40014 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 14U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[14U])   /* 40015 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 15U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[15U])   /* 40016 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 16U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[16U])   /* 40017 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 17U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[17U])   /* 40018 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 18U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[18U])   /* 40019 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 19U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[19U])   /* 40020 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 20U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[20U])   /* 40021 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 21U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[21U])   /* 40022 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 22U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[22U])   /* 40023 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 23U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[23U])   /* 40024 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 24U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[24U])   /* 40025 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 25U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[25U])   /* 40026 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 26U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[26U])   /* 40027 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 27U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[27U])   /* 40028 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 28U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[28U])   /* 40029 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 29U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[29U])   /* 40030 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 30U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[30U])   /* 40031 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 31U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[31U])   /* 40032 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 32U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[32U])   /* 40033 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 33U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[33U])   /* 40034 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 34U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[34U])   /* 40035 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 35U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[35U])   /* 40036 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 36U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[36U])   /* 40037 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 37U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[37U])   /* 40038 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 38U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[38U])   /* 40039 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 39U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[39U])   /* 40040 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 40U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[40U])   /* 40041 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 41U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[41U])   /* 40042 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 42U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[42U])   /* 40043 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 43U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[43U])   /* 40044 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 44U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[44U])   /* 40045 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 45U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[45U])   /* 40046 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 46U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[46U])   /* 40047 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 47U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[47U])   /* 40048 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 48U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[48U])   /* 40049 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 49U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[49U])   /* 40050 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 50U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[50U])   /* 40051 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 51U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[51U])   /* 40052 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 52U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[52U])   /* 40053 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 53U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[53U])   /* 40054 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 54U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[54U])   /* 40055 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 55U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[55U])   /* 40056 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 56U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[56U])   /* 40057 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 57U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[57U])   /* 40058 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 58U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[58U])   /* 40059 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 59U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[59U])   /* 40060 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 60U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[60U])   /* 40061 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 61U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[61U])   /* 40062 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 62U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[62U])   /* 40063 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 63U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[63U])   /* 40064 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 64U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[64U])   /* 40065 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 65U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[65U])   /* 40066 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 66U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[66U])   /* 40067 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 67U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[67U])   /* 40068 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 68U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[68U])   /* 40069 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 69U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[69U])   /* 40070 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 70U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[70U])   /* 40071 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 71U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[71U])   /* 40072 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 72U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[72U])   /* 40073 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 73U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[73U])   /* 40074 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 74U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[74U])   /* 40075 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 75U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[75U])   /* 40076 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 76U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[76U])   /* 40077 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 77U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[77U])   /* 40078 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 78U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[78U])   /* 40079 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 79U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[79U])   /* 40080 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 80U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[80U])   /* 40081 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 81U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[81U])   /* 40082 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 82U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[82U])   /* 40083 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 83U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[83U])   /* 40084 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 84U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[84U])   /* 40085 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 85U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[85U])   /* 40086 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 86U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[86U])   /* 40087 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 87U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[87U])   /* 40088 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 88U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[88U])   /* 40089 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 89U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[89U])   /* 40090 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 90U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[90U])   /* 40091 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 91U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[91U])   /* 40092 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 92U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[92U])   /* 40093 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 93U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[93U])   /* 40094 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 94U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[94U])   /* 40095 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 95U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[95U])   /* 40096 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 96U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[96U])   /* 40097 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 97U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[97U])   /* 40098 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 98U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[98U])   /* 40099 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 99U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[99U])   /* 40040 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 100U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[100U])  /* 40101 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 101U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[101U])  /* 40102 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 102U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[102U])  /* 40103 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 103U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[103U])  /* 40104 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 104U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[104U])  /* 40105 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 105U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[105U])  /* 40106 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 106U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[106U])  /* 40107 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 107U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[107U])  /* 40108 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 108U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[108U])  /* 40109 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 109U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[109U])  /* 40110 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 110U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[110U])  /* 40111 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 111U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[111U])  /* 40112 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 112U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[112U])  /* 40113 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 113U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[113U])  /* 40114 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 114U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[114U])  /* 40115 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 115U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[115U])  /* 40116 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 116U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[116U])  /* 40117 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 117U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[117U])  /* 40118 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 118U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[118U])  /* 40119 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 119U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[119U])  /* 40120 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 120U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[120U])  /* 40121 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 121U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[121U])  /* 40122 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 122U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[122U])  /* 40123 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 123U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[123U])  /* 40124 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 124U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[124U])  /* 40125 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 125U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[125U])  /* 40126 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 126U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[126U])  /* 40127 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 127U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[127U])  /* 40128 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 128U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[128U])  /* 40129 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 129U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[129U])  /* 40130 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 130U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[130U])  /* 40131 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 131U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[131U])  /* 40132 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 132U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[132U])  /* 40133 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 133U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[133U])  /* 40134 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 134U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[134U])  /* 40135 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 135U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[135U])  /* 40136 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 136U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[136U])  /* 40137 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 137U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[137U])  /* 40138 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 138U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[138U])  /* 40139 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 139U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[139U])  /* 40140 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 140U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[140U])  /* 40141 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 141U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[141U])  /* 40142 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 142U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[142U])  /* 40143 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 143U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[143U])  /* 40144 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 144U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[144U])  /* 40145 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 145U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[145U])  /* 40146 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 146U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[146U])  /* 40147 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 147U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[147U])  /* 40148 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 148U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[148U])  /* 40149 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 149U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[149U])  /* 40150 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 150U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[150U])  /* 40151 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 151U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[151U])  /* 40152 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 152U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[152U])  /* 40153 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 153U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[153U])  /* 40154 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 154U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[154U])  /* 40155 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 155U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[155U])  /* 40156 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 156U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[156U])  /* 40157 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 157U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[157U])  /* 40158 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 158U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[158U])  /* 40159 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 159U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[159U])  /* 40160 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 160U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[160U])  /* 40161 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 161U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[161U])  /* 40162 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 162U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[162U])  /* 40163 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 163U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[163U])  /* 40164 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 164U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[164U])  /* 40165 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 165U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[165U])  /* 40166 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 166U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[166U])  /* 40167 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 167U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[167U])  /* 40168 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 168U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[168U])  /* 40169 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 169U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[169U])  /* 40170 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 170U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[170U])  /* 40171 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 171U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[171U])  /* 40172 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 172U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[172U])  /* 40173 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 173U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[173U])  /* 40174 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 174U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[174U])  /* 40175 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 175U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[175U])  /* 40176 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 176U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[176U])  /* 40177 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 177U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[177U])  /* 40178 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 178U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[178U])  /* 40179 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 179U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[179U])  /* 40180 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 180U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[180U])  /* 40181 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 181U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[181U])  /* 40182 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 182U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[182U])  /* 40183 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 183U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[183U])  /* 40184 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 184U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[184U])  /* 40185 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 185U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[185U])  /* 40186 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 186U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[186U])  /* 40187 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 187U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[187U])  /* 40188 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 188U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[188U])  /* 40189 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 189U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[189U])  /* 40190 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 190U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[190U])  /* 40191 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 191U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[191U])  /* 40192 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 192U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[192U])  /* 40193 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 193U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[193U])  /* 40194 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 194U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[194U])  /* 40195 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 195U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[195U])  /* 40196 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 196U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[196U])  /* 40197 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 197U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[197U])  /* 40198 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 198U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[198U])  /* 40199 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 199U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[199U])  /* 40200 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 200U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[200U])  /* 40201 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 201U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[201U])  /* 40202 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 202U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[202U])  /* 40203 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 203U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[203U])  /* 40204 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 204U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[204U])  /* 40205 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 205U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[205U])  /* 40206 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 206U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[206U])  /* 40207 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 207U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[207U])  /* 40208 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 208U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[208U])  /* 40209 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 209U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[209U])  /* 40210 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 210U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[210U])  /* 40211 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 211U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[211U])  /* 40212 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 212U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[212U])  /* 40213 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 213U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[213U])  /* 40214 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 214U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[214U])  /* 40215 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 215U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[215U])  /* 40216 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 216U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[216U])  /* 40217 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 217U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[217U])  /* 40218 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 218U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[218U])  /* 40219 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 219U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[219U])  /* 40220 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 220U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[220U])  /* 40221 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 221U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[221U])  /* 40222 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 222U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[222U])  /* 40223 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 223U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[223U])  /* 40224 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 224U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[224U])  /* 40225 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 225U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[225U])  /* 40226 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 226U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[226U])  /* 40227 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 227U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[227U])  /* 40228 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 228U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[228U])  /* 40229 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 229U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[229U])  /* 40230 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 230U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[230U])  /* 40231 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 231U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[231U])  /* 40232 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 232U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[232U])  /* 40233 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 233U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[233U])  /* 40234 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 234U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[234U])  /* 40235 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 235U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[235U])  /* 40236 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 236U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[236U])  /* 40237 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 237U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[237U])  /* 40238 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 238U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[238U])  /* 40239 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 239U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[239U])  /* 40240 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 240U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[240U])  /* 40241 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 241U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[241U])  /* 40242 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 242U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[242U])  /* 40243 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 243U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[243U])  /* 40244 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 244U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[244U])  /* 40245 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 245U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[245U])  /* 40246 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 246U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[246U])  /* 40247 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 247U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[247U])  /* 40248 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 248U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[248U])  /* 40249 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 249U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[249U])  /* 40250 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 250U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[250U])  /* 40251 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 251U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[251U])  /* 40252 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 252U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[252U])  /* 40253 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 253U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[253U])  /* 40254 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 254U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[254U])  /* 40255 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 255U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[255U])  /* 40256 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 256U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[256U])  /* 40257 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 257U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[257U])  /* 40258 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 258U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[258U])  /* 40259 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 259U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[259U])  /* 40260 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 260U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[260U])  /* 40261 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 261U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[261U])  /* 40262 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 262U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[262U])  /* 40263 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 263U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[263U])  /* 40264 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 264U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[264U])  /* 40265 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 265U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[265U])  /* 40266 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 266U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[266U])  /* 40267 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 267U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[267U])  /* 40268 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 268U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[268U])  /* 40269 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 269U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[269U])  /* 40270 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 270U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[270U])  /* 40271 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 271U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[271U])  /* 40272 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 272U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[272U])  /* 40273 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 273U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[273U])  /* 40274 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 274U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[274U])  /* 40275 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 275U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[275U])  /* 40276 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 276U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[276U])  /* 40277 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 277U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[277U])  /* 40278 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 278U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[278U])  /* 40279 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 279U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[279U])  /* 40280 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 280U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[280U])  /* 40281 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 281U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[281U])  /* 40282 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 282U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[282U])  /* 40283 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 283U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[283U])  /* 40284 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 284U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[284U])  /* 40285 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 285U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[285U])  /* 40286 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 286U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[286U])  /* 40287 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 287U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[287U])  /* 40288 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 288U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[288U])  /* 40289 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 289U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[289U])  /* 40290 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 290U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[290U])  /* 40291 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 291U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[291U])  /* 40292 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 292U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[292U])  /* 40293 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 293U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[293U])  /* 40294 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 294U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[294U])  /* 40295 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 295U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[295U])  /* 40296 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 296U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[296U])  /* 40297 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 297U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[297U])  /* 40298 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 298U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[298U])  /* 40299 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_3 > 299U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_3[299U])  /* 40300 */
#endif
};

#if (Modbus_Slave_Holding_Registers_Count_3 > 300U)
#error Modbus_Slave_Holding_Registers_Count_3 > 300U
#endif
#endif

#if (bl_Modbus_Slave_Use_USB != 0)
uint16_t ui16_Modbus_Holding_Registers_Data_USB[Modbus_Slave_Holding_Registers_Count_USB];

uint16_t * const ui16_Modbus_Holding_Registers_USB[Modbus_Slave_Holding_Registers_Count_USB] = {
    uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[0U])      /* 40001 */
#if (Modbus_Slave_Holding_Registers_Count_USB > 1U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[1U])    /* 40002 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 2U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[2U])    /* 40003 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 3U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[3U])    /* 40004 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 4U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[4U])    /* 40005 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 5U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[5U])    /* 40006 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 6U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[6U])    /* 40007 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 7U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[7U])    /* 40008 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 8U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[8U])    /* 40009 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 9U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[9U])    /* 40010 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 10U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[10U])   /* 40011 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 11U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[11U])   /* 40012 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 12U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[12U])   /* 40013 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 13U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[13U])   /* 40014 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 14U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[14U])   /* 40015 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 15U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[15U])   /* 40016 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 16U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[16U])   /* 40017 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 17U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[17U])   /* 40018 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 18U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[18U])   /* 40019 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 19U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[19U])   /* 40020 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 20U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[20U])   /* 40021 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 21U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[21U])   /* 40022 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 22U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[22U])   /* 40023 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 23U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[23U])   /* 40024 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 24U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[24U])   /* 40025 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 25U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[25U])   /* 40026 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 26U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[26U])   /* 40027 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 27U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[27U])   /* 40028 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 28U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[28U])   /* 40029 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 29U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[29U])   /* 40030 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 30U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[30U])   /* 40031 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 31U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[31U])   /* 40032 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 32U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[32U])   /* 40033 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 33U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[33U])   /* 40034 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 34U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[34U])   /* 40035 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 35U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[35U])   /* 40036 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 36U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[36U])   /* 40037 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 37U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[37U])   /* 40038 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 38U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[38U])   /* 40039 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 39U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[39U])   /* 40040 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 40U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[40U])   /* 40041 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 41U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[41U])   /* 40042 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 42U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[42U])   /* 40043 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 43U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[43U])   /* 40044 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 44U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[44U])   /* 40045 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 45U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[45U])   /* 40046 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 46U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[46U])   /* 40047 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 47U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[47U])   /* 40048 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 48U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[48U])   /* 40049 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 49U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[49U])   /* 40050 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 50U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[50U])   /* 40051 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 51U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[51U])   /* 40052 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 52U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[52U])   /* 40053 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 53U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[53U])   /* 40054 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 54U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[54U])   /* 40055 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 55U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[55U])   /* 40056 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 56U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[56U])   /* 40057 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 57U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[57U])   /* 40058 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 58U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[58U])   /* 40059 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 59U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[59U])   /* 40060 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 60U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[60U])   /* 40061 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 61U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[61U])   /* 40062 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 62U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[62U])   /* 40063 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 63U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[63U])   /* 40064 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 64U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[64U])   /* 40065 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 65U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[65U])   /* 40066 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 66U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[66U])   /* 40067 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 67U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[67U])   /* 40068 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 68U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[68U])   /* 40069 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 69U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[69U])   /* 40070 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 70U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[70U])   /* 40071 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 71U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[71U])   /* 40072 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 72U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[72U])   /* 40073 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 73U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[73U])   /* 40074 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 74U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[74U])   /* 40075 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 75U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[75U])   /* 40076 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 76U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[76U])   /* 40077 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 77U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[77U])   /* 40078 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 78U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[78U])   /* 40079 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 79U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[79U])   /* 40080 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 80U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[80U])   /* 40081 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 81U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[81U])   /* 40082 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 82U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[82U])   /* 40083 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 83U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[83U])   /* 40084 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 84U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[84U])   /* 40085 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 85U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[85U])   /* 40086 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 86U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[86U])   /* 40087 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 87U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[87U])   /* 40088 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 88U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[88U])   /* 40089 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 89U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[89U])   /* 40090 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 90U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[90U])   /* 40091 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 91U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[91U])   /* 40092 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 92U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[92U])   /* 40093 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 93U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[93U])   /* 40094 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 94U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[94U])   /* 40095 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 95U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[95U])   /* 40096 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 96U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[96U])   /* 40097 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 97U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[97U])   /* 40098 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 98U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[98U])   /* 40099 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 99U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[99U])   /* 40040 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 100U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[100U])  /* 40101 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 101U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[101U])  /* 40102 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 102U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[102U])  /* 40103 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 103U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[103U])  /* 40104 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 104U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[104U])  /* 40105 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 105U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[105U])  /* 40106 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 106U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[106U])  /* 40107 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 107U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[107U])  /* 40108 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 108U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[108U])  /* 40109 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 109U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[109U])  /* 40110 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 110U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[110U])  /* 40111 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 111U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[111U])  /* 40112 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 112U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[112U])  /* 40113 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 113U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[113U])  /* 40114 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 114U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[114U])  /* 40115 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 115U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[115U])  /* 40116 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 116U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[116U])  /* 40117 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 117U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[117U])  /* 40118 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 118U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[118U])  /* 40119 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 119U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[119U])  /* 40120 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 120U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[120U])  /* 40121 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 121U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[121U])  /* 40122 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 122U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[122U])  /* 40123 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 123U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[123U])  /* 40124 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 124U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[124U])  /* 40125 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 125U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[125U])  /* 40126 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 126U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[126U])  /* 40127 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 127U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[127U])  /* 40128 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 128U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[128U])  /* 40129 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 129U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[129U])  /* 40130 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 130U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[130U])  /* 40131 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 131U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[131U])  /* 40132 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 132U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[132U])  /* 40133 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 133U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[133U])  /* 40134 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 134U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[134U])  /* 40135 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 135U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[135U])  /* 40136 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 136U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[136U])  /* 40137 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 137U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[137U])  /* 40138 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 138U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[138U])  /* 40139 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 139U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[139U])  /* 40140 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 140U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[140U])  /* 40141 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 141U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[141U])  /* 40142 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 142U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[142U])  /* 40143 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 143U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[143U])  /* 40144 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 144U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[144U])  /* 40145 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 145U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[145U])  /* 40146 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 146U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[146U])  /* 40147 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 147U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[147U])  /* 40148 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 148U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[148U])  /* 40149 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 149U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[149U])  /* 40150 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 150U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[150U])  /* 40151 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 151U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[151U])  /* 40152 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 152U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[152U])  /* 40153 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 153U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[153U])  /* 40154 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 154U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[154U])  /* 40155 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 155U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[155U])  /* 40156 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 156U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[156U])  /* 40157 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 157U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[157U])  /* 40158 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 158U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[158U])  /* 40159 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 159U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[159U])  /* 40160 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 160U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[160U])  /* 40161 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 161U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[161U])  /* 40162 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 162U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[162U])  /* 40163 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 163U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[163U])  /* 40164 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 164U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[164U])  /* 40165 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 165U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[165U])  /* 40166 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 166U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[166U])  /* 40167 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 167U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[167U])  /* 40168 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 168U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[168U])  /* 40169 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 169U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[169U])  /* 40170 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 170U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[170U])  /* 40171 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 171U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[171U])  /* 40172 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 172U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[172U])  /* 40173 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 173U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[173U])  /* 40174 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 174U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[174U])  /* 40175 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 175U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[175U])  /* 40176 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 176U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[176U])  /* 40177 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 177U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[177U])  /* 40178 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 178U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[178U])  /* 40179 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 179U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[179U])  /* 40180 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 180U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[180U])  /* 40181 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 181U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[181U])  /* 40182 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 182U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[182U])  /* 40183 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 183U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[183U])  /* 40184 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 184U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[184U])  /* 40185 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 185U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[185U])  /* 40186 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 186U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[186U])  /* 40187 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 187U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[187U])  /* 40188 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 188U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[188U])  /* 40189 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 189U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[189U])  /* 40190 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 190U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[190U])  /* 40191 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 191U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[191U])  /* 40192 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 192U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[192U])  /* 40193 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 193U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[193U])  /* 40194 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 194U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[194U])  /* 40195 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 195U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[195U])  /* 40196 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 196U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[196U])  /* 40197 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 197U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[197U])  /* 40198 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 198U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[198U])  /* 40199 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 199U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[199U])  /* 40200 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 200U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[200U])  /* 40201 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 201U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[201U])  /* 40202 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 202U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[202U])  /* 40203 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 203U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[203U])  /* 40204 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 204U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[204U])  /* 40205 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 205U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[205U])  /* 40206 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 206U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[206U])  /* 40207 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 207U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[207U])  /* 40208 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 208U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[208U])  /* 40209 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 209U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[209U])  /* 40210 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 210U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[210U])  /* 40211 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 211U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[211U])  /* 40212 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 212U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[212U])  /* 40213 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 213U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[213U])  /* 40214 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 214U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[214U])  /* 40215 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 215U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[215U])  /* 40216 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 216U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[216U])  /* 40217 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 217U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[217U])  /* 40218 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 218U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[218U])  /* 40219 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 219U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[219U])  /* 40220 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 220U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[220U])  /* 40221 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 221U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[221U])  /* 40222 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 222U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[222U])  /* 40223 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 223U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[223U])  /* 40224 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 224U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[224U])  /* 40225 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 225U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[225U])  /* 40226 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 226U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[226U])  /* 40227 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 227U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[227U])  /* 40228 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 228U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[228U])  /* 40229 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 229U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[229U])  /* 40230 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 230U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[230U])  /* 40231 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 231U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[231U])  /* 40232 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 232U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[232U])  /* 40233 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 233U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[233U])  /* 40234 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 234U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[234U])  /* 40235 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 235U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[235U])  /* 40236 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 236U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[236U])  /* 40237 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 237U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[237U])  /* 40238 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 238U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[238U])  /* 40239 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 239U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[239U])  /* 40240 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 240U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[240U])  /* 40241 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 241U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[241U])  /* 40242 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 242U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[242U])  /* 40243 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 243U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[243U])  /* 40244 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 244U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[244U])  /* 40245 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 245U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[245U])  /* 40246 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 246U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[246U])  /* 40247 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 247U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[247U])  /* 40248 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 248U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[248U])  /* 40249 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 249U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[249U])  /* 40250 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 250U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[250U])  /* 40251 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 251U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[251U])  /* 40252 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 252U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[252U])  /* 40253 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 253U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[253U])  /* 40254 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 254U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[254U])  /* 40255 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 255U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[255U])  /* 40256 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 256U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[256U])  /* 40257 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 257U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[257U])  /* 40258 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 258U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[258U])  /* 40259 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 259U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[259U])  /* 40260 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 260U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[260U])  /* 40261 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 261U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[261U])  /* 40262 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 262U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[262U])  /* 40263 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 263U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[263U])  /* 40264 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 264U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[264U])  /* 40265 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 265U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[265U])  /* 40266 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 266U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[266U])  /* 40267 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 267U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[267U])  /* 40268 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 268U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[268U])  /* 40269 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 269U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[269U])  /* 40270 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 270U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[270U])  /* 40271 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 271U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[271U])  /* 40272 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 272U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[272U])  /* 40273 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 273U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[273U])  /* 40274 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 274U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[274U])  /* 40275 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 275U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[275U])  /* 40276 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 276U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[276U])  /* 40277 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 277U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[277U])  /* 40278 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 278U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[278U])  /* 40279 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 279U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[279U])  /* 40280 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 280U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[280U])  /* 40281 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 281U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[281U])  /* 40282 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 282U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[282U])  /* 40283 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 283U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[283U])  /* 40284 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 284U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[284U])  /* 40285 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 285U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[285U])  /* 40286 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 286U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[286U])  /* 40287 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 287U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[287U])  /* 40288 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 288U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[288U])  /* 40289 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 289U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[289U])  /* 40290 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 290U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[290U])  /* 40291 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 291U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[291U])  /* 40292 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 292U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[292U])  /* 40293 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 293U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[293U])  /* 40294 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 294U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[294U])  /* 40295 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 295U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[295U])  /* 40296 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 296U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[296U])  /* 40297 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 297U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[297U])  /* 40298 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 298U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[298U])  /* 40299 */
#endif
#if (Modbus_Slave_Holding_Registers_Count_USB > 299U)
    , uint16_Pointer(ui16_Modbus_Holding_Registers_Data_USB[299U])  /* 40300 */
#endif
};

#if (Modbus_Slave_Holding_Registers_Count_USB > 300U)
#error Modbus_Slave_Holding_Registers_Count_USB > 300U
#endif
#endif

/******************************************************************************
 *     Function Prototypes
 ******************************************************************************/

/******************************************************************************
 * Function Name: Modbus_Read_Coils
 * Description: Чтение дискретных выходов (0x01)
 ******************************************************************************/
uint8_t Modbus_Read_Coils(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count)
{
#if ((bl_Modbus_Slave_Use_USB != 0) || (bl_Modbus_Slave_Use_1 != 0) || (bl_Modbus_Slave_Use_2 != 0) || (bl_Modbus_Slave_Use_3 != 0))
  uint8_t ui8_Temp8;
  uint8_t *ui8_Pointer = ui8_Data;
  uint16_t ui16_Address, ui16_Quantity, ui16_FullByteQuantity, ui16_BitIndex, ui16_BitIndexMax;

  ui16_Address = ((SHL(INT_TO_UINT16(ui8_Data[0U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[1U]));
  ui16_Quantity = ((SHL(INT_TO_UINT16(ui8_Data[2U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[3U]));

  ui16_FullByteQuantity = SHR(ui16_Quantity, 3);
  if (SHL(ui16_FullByteQuantity, 3) != ui16_Quantity)
  {
    ui16_FullByteQuantity = (ui16_FullByteQuantity + 1);
  }
  *ui8_Pointer++ = INT_TO_UINT8(ui16_FullByteQuantity);
  *ui16_Count = (ui16_FullByteQuantity + 1);

  if ((ui16_Quantity < 1) || (ui16_Quantity > 0x007D0))
  {
    return MODBUS_ILLEGAL_DATA_VALUE;
  }

  switch (ui8_ArrayIndex)
  {
#if (bl_Modbus_Slave_Use_1 != 0)
    case 0x00:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Coils_Count_1)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_FullByteQuantity--)
      {
        ui16_BitIndex = 0;
        if (ui16_FullByteQuantity == 0)
        {
          ui16_BitIndexMax = (7 - (SHL(ui16_FullByteQuantity, 3) - ui16_Quantity));
        }
        else
        {
          ui16_BitIndexMax = 7;
        }
        ui8_Temp8 = 0;
        while (ui16_BitIndex <= ui16_BitIndexMax)
        {
          if (!ui8_Modbus_Coils_1[ui16_Address])
          {
            return MODBUS_SERVER_DEVICE_FAILURE;
          }

          ui8_Temp8 |= SHL((*ui8_Modbus_Coils_1[ui16_Address++]), (ui16_BitIndex++));
        }
        *ui8_Pointer++ = ui8_Temp8;
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_2 != 0)
    case 0x01:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Coils_Count_2)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_FullByteQuantity--)
      {
        ui16_BitIndex = 0;
        if (ui16_FullByteQuantity == 0)
        {
          ui16_BitIndexMax = (7 - (SHL(ui16_FullByteQuantity, 3) - ui16_Quantity));
        }
        else
        {
          ui16_BitIndexMax = 7;
        }
        ui8_Temp8 = 0;
        while (ui16_BitIndex <= ui16_BitIndexMax)
        {
          if (!ui8_Modbus_Coils_2[ui16_Address])
          {
            return MODBUS_SERVER_DEVICE_FAILURE;
          }

          ui8_Temp8 |= SHL((*ui8_Modbus_Coils_2[ui16_Address++]), (ui16_BitIndex++));
        }
        *ui8_Pointer++ = ui8_Temp8;
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_3 != 0)
    case 0x02:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Coils_Count_3)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_FullByteQuantity--)
      {
        ui16_BitIndex = 0;
        if (ui16_FullByteQuantity == 0)
        {
          ui16_BitIndexMax = (7 - (SHL(ui16_FullByteQuantity, 3) - ui16_Quantity));
        }
        else
        {
          ui16_BitIndexMax = 7;
        }
        ui8_Temp8 = 0;
        while (ui16_BitIndex <= ui16_BitIndexMax)
        {
          if (!ui8_Modbus_Coils_3[ui16_Address])
          {
            return MODBUS_SERVER_DEVICE_FAILURE;
          }

          ui8_Temp8 |= SHL((*ui8_Modbus_Coils_3[ui16_Address++]), (ui16_BitIndex++));
        }
        *ui8_Pointer++ = ui8_Temp8;
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_USB != 0)
    case 0x03:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Coils_Count_USB)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_FullByteQuantity--)
      {
        ui16_BitIndex = 0;
        if (ui16_FullByteQuantity == 0)
        {
          ui16_BitIndexMax = (7 - (SHL(ui16_FullByteQuantity, 3) - ui16_Quantity));
        }
        else
        {
          ui16_BitIndexMax = 7;
        }
        ui8_Temp8 = 0;
        while (ui16_BitIndex <= ui16_BitIndexMax)
        {
          if (!ui8_Modbus_Coils_USB[ui16_Address])
          {
            return MODBUS_SERVER_DEVICE_FAILURE;
          }

          ui8_Temp8 |= SHL((*ui8_Modbus_Coils_USB[ui16_Address++]), (ui16_BitIndex++));
        }
        *ui8_Pointer++ = ui8_Temp8;
      }
      break;
#endif
  }
#endif

  return MODBUS_NO_ERROR;
}

/******************************************************************************
 * Function Name: Modbus_Read_Discrete_Inputs
 * Description: Чтение дискретных входов (0x02)
 ******************************************************************************/
uint8_t Modbus_Read_Discrete_Inputs(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count)
{
#if ((bl_Modbus_Slave_Use_USB != 0) || (bl_Modbus_Slave_Use_1 != 0) || (bl_Modbus_Slave_Use_2 != 0) || (bl_Modbus_Slave_Use_3 != 0))
  uint8_t ui8_Temp8;
  uint8_t *ui8_Pointer = ui8_Data;
  uint16_t ui16_Address, ui16_Quantity, ui16_FullByteQuantity, ui16_BitIndex, ui16_BitIndexMax;

  ui16_Address = ((SHL(INT_TO_UINT16(ui8_Data[0U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[1U]));
  ui16_Quantity = ((SHL(INT_TO_UINT16(ui8_Data[2U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[3U]));

  ui16_FullByteQuantity = SHR(ui16_Quantity, 3);
  if (SHL(ui16_FullByteQuantity, 3) != ui16_Quantity)
  {
    ui16_FullByteQuantity = (ui16_FullByteQuantity + 1);
  }
  *ui8_Pointer++ = INT_TO_UINT8(ui16_FullByteQuantity);
  *ui16_Count = (ui16_FullByteQuantity + 1);

  if ((ui16_Quantity < 1) || (ui16_Quantity > 0x007D0))
  {
    return MODBUS_ILLEGAL_DATA_VALUE;
  }

  switch (ui8_ArrayIndex)
  {
#if (bl_Modbus_Slave_Use_1 != 0)
    case 0x00:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Discrete_Inputs_Count_1)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_FullByteQuantity--)
      {
        ui16_BitIndex = 0;
        if (ui16_FullByteQuantity == 0)
        {
          ui16_BitIndexMax = (7 - (SHL(ui16_FullByteQuantity, 3) - ui16_Quantity));
        }
        else
        {
          ui16_BitIndexMax = 7;
        }
        ui8_Temp8 = 0;
        while (ui16_BitIndex <= ui16_BitIndexMax)
        {
          if (!ui8_Modbus_Discrete_Inputs_1[ui16_Address])
          {
            return MODBUS_SERVER_DEVICE_FAILURE;
          }

          ui8_Temp8 |= SHL((*ui8_Modbus_Discrete_Inputs_1[ui16_Address++]), (ui16_BitIndex++));
        }
        *ui8_Pointer++ = ui8_Temp8;
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_2 != 0)
    case 0x01:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Discrete_Inputs_Count_2)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_FullByteQuantity--)
      {
        ui16_BitIndex = 0;
        if (ui16_FullByteQuantity == 0)
        {
          ui16_BitIndexMax = (7 - (SHL(ui16_FullByteQuantity, 3) - ui16_Quantity));
        }
        else
        {
          ui16_BitIndexMax = 7;
        }
        ui8_Temp8 = 0;
        while (ui16_BitIndex <= ui16_BitIndexMax)
        {
          if (!ui8_Modbus_Discrete_Inputs_2[ui16_Address])
          {
            return MODBUS_SERVER_DEVICE_FAILURE;
          }

          ui8_Temp8 |= SHL((*ui8_Modbus_Discrete_Inputs_2[ui16_Address++]), (ui16_BitIndex++));
        }
        *ui8_Pointer++ = ui8_Temp8;
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_3 != 0)
    case 0x02:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Discrete_Inputs_Count_3)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_FullByteQuantity--)
      {
        ui16_BitIndex = 0;
        if (ui16_FullByteQuantity == 0)
        {
          ui16_BitIndexMax = (7 - (SHL(ui16_FullByteQuantity, 3) - ui16_Quantity));
        }
        else
        {
          ui16_BitIndexMax = 7;
        }
        ui8_Temp8 = 0;
        while (ui16_BitIndex <= ui16_BitIndexMax)
        {
          if (!ui8_Modbus_Discrete_Inputs_3[ui16_Address])
          {
            return MODBUS_SERVER_DEVICE_FAILURE;
          }

          ui8_Temp8 |= SHL((*ui8_Modbus_Discrete_Inputs_3[ui16_Address++]), (ui16_BitIndex++));
        }
        *ui8_Pointer++ = ui8_Temp8;
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_USB != 0)
    case 0x03:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Discrete_Inputs_Count_USB)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_FullByteQuantity--)
      {
        ui16_BitIndex = 0;
        if (ui16_FullByteQuantity == 0)
        {
          ui16_BitIndexMax = (7 - (SHL(ui16_FullByteQuantity, 3) - ui16_Quantity));
        }
        else
        {
          ui16_BitIndexMax = 7;
        }
        ui8_Temp8 = 0;
        while (ui16_BitIndex <= ui16_BitIndexMax)
        {
          if (!ui8_Modbus_Discrete_Inputs_USB[ui16_Address])
          {
            return MODBUS_SERVER_DEVICE_FAILURE;
          }

          ui8_Temp8 |= SHL((*ui8_Modbus_Discrete_Inputs_USB[ui16_Address++]), (ui16_BitIndex++));
        }
        *ui8_Pointer++ = ui8_Temp8;
      }
      break;
#endif
  }
#endif

  return MODBUS_NO_ERROR;
}

/******************************************************************************
 * Function Name: Modbus_Read_Holding_Register
 * Description: Чтение регистра хранения (0x03)
 ******************************************************************************/
uint8_t Modbus_Read_Holding_Register(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count)
{
#if ((bl_Modbus_Slave_Use_USB != 0) || (bl_Modbus_Slave_Use_1 != 0) || (bl_Modbus_Slave_Use_2 != 0) || (bl_Modbus_Slave_Use_3 != 0))
  uint8_t *ui8_Pointer = ui8_Data;
  uint16_t ui16_Address, ui16_Quantity, ui16_Temp;

  ui16_Address = ((SHL(INT_TO_UINT16(ui8_Data[0U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[1U]));
  ui16_Quantity = ((SHL(INT_TO_UINT16(ui8_Data[2U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[3U]));

  *ui8_Pointer++ = INT_TO_UINT8(SHL(ui16_Quantity, 1));
  *ui16_Count = (SHL(ui16_Quantity, 1) + 1);

  if ((ui16_Quantity < 1) || (ui16_Quantity > 0x007D))
  {
    return MODBUS_ILLEGAL_DATA_VALUE;
  }

  switch (ui8_ArrayIndex)
  {
#if (bl_Modbus_Slave_Use_1 != 0)
    case 0x00:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Holding_Registers_Count_1)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Holding_Registers_1[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Holding_Registers_1[ui16_Address++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_2 != 0)
    case 0x01:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Holding_Registers_Count_2)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Holding_Registers_2[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Holding_Registers_2[ui16_Address++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_3 != 0)
    case 0x02:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Holding_Registers_Count_3)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Holding_Registers_3[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Holding_Registers_3[ui16_Address++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_USB != 0)
    case 0x03:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Holding_Registers_Count_USB)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Holding_Registers_USB[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Holding_Registers_USB[ui16_Address++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
  }
#endif

  return MODBUS_NO_ERROR;
}

/******************************************************************************
 * Function Name: Modbus_Read_Input_Register
 * Description: Чтение регистра входов (0x04)
 ******************************************************************************/
uint8_t Modbus_Read_Input_Register(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count)
{
#if ((bl_Modbus_Slave_Use_USB != 0) || (bl_Modbus_Slave_Use_1 != 0) || (bl_Modbus_Slave_Use_2 != 0) || (bl_Modbus_Slave_Use_3 != 0))
  uint8_t *ui8_Pointer = ui8_Data;
  uint16_t ui16_Address, ui16_Quantity, ui16_Temp;

  ui16_Address = ((SHL(INT_TO_UINT16(ui8_Data[0U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[1U]));
  ui16_Quantity = ((SHL(INT_TO_UINT16(ui8_Data[2U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[3U]));

  *ui8_Pointer++ = INT_TO_UINT8(SHL(ui16_Quantity, 1));
  *ui16_Count = (SHL(ui16_Quantity, 1) + 1);

  if ((ui16_Quantity < 1) || (ui16_Quantity > 0x007D))
  {
    return MODBUS_ILLEGAL_DATA_VALUE;
  }

  switch (ui8_ArrayIndex)
  {
#if (bl_Modbus_Slave_Use_1 != 0)
    case 0x00:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Input_Registers_Count_1)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Input_Registers_1[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Input_Registers_1[ui16_Address++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_2 != 0)
    case 0x01:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Input_Registers_Count_2)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Input_Registers_2[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Input_Registers_2[ui16_Address++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_3 != 0)
    case 0x02:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Input_Registers_Count_3)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Input_Registers_3[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Input_Registers_3[ui16_Address++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_USB != 0)
    case 0x03:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Input_Registers_Count_USB)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Input_Registers_USB[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Input_Registers_USB[ui16_Address++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
  }
#endif

  return MODBUS_NO_ERROR;
}

/******************************************************************************
 * Function Name: Modbus_Write_Single_Register
 * Description: Запись регистра хранения (0x06)
 ******************************************************************************/
uint8_t Modbus_Write_Single_Register(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count)
{
#if ((bl_Modbus_Slave_Use_USB != 0) || (bl_Modbus_Slave_Use_1 != 0) || (bl_Modbus_Slave_Use_2 != 0) || (bl_Modbus_Slave_Use_3 != 0))
  uint16_t ui16_Address;

  ui16_Address = ((SHL(INT_TO_UINT16(ui8_Data[0U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[1U]));

  *ui16_Count = 4;

  switch (ui8_ArrayIndex)
  {
#if (bl_Modbus_Slave_Use_1 != 0)
    case 0x00:
      if (ui16_Address >= Modbus_Slave_Holding_Registers_Count_1)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      if (!ui16_Modbus_Holding_Registers_1[ui16_Address])
      {
        return MODBUS_SERVER_DEVICE_FAILURE;
      }

      *ui16_Modbus_Holding_Registers_1[ui16_Address] = (SHL(INT_TO_UINT16(ui8_Data[2U]), 8) | INT_TO_UINT16(ui8_Data[3U]));
      break;
#endif
#if (bl_Modbus_Slave_Use_2 != 0)
    case 0x01:
      if (ui16_Address >= Modbus_Slave_Holding_Registers_Count_2)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      if (!ui16_Modbus_Holding_Registers_2[ui16_Address])
      {
        return MODBUS_SERVER_DEVICE_FAILURE;
      }

      *ui16_Modbus_Holding_Registers_2[ui16_Address] = (SHL(INT_TO_UINT16(ui8_Data[2U]), 8) | INT_TO_UINT16(ui8_Data[3U]));
      break;
#endif
#if (bl_Modbus_Slave_Use_3 != 0)
    case 0x02:
      if (ui16_Address >= Modbus_Slave_Holding_Registers_Count_3)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      if (!ui16_Modbus_Holding_Registers_3[ui16_Address])
      {
        return MODBUS_SERVER_DEVICE_FAILURE;
      }

      *ui16_Modbus_Holding_Registers_3[ui16_Address] = (SHL(INT_TO_UINT16(ui8_Data[2U]), 8) | INT_TO_UINT16(ui8_Data[3U]));
      break;
#endif
#if (bl_Modbus_Slave_Use_USB != 0)
    case 0x03:
      if (ui16_Address >= Modbus_Slave_Holding_Registers_Count_USB)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      if (!ui16_Modbus_Holding_Registers_USB[ui16_Address])
      {
        return MODBUS_SERVER_DEVICE_FAILURE;
      }

      *ui16_Modbus_Holding_Registers_USB[ui16_Address] = (SHL(INT_TO_UINT16(ui8_Data[2U]), 8) | INT_TO_UINT16(ui8_Data[3U]));
      break;
#endif
  }
#endif

  return MODBUS_NO_ERROR;
}

/******************************************************************************
 * Function Name: Modbus_Write_Multiple_Register
 * Description: Запись регистров хранения (0x10)
 ******************************************************************************/
uint8_t Modbus_Write_Multiple_Register(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count)
{
#if ((bl_Modbus_Slave_Use_USB != 0) || (bl_Modbus_Slave_Use_1 != 0) || (bl_Modbus_Slave_Use_2 != 0) || (bl_Modbus_Slave_Use_3 != 0))
  uint8_t *ui8_Pointer = &ui8_Data[5U];
  uint16_t ui16_Address, ui16_Quantity, ui16_Temp;

  ui16_Address = ((SHL(INT_TO_UINT16(ui8_Data[0U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[1U]));
  ui16_Quantity = ((SHL(INT_TO_UINT16(ui8_Data[2U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[3U]));

  *ui16_Count = 4;

  if ((ui16_Quantity < 1) || (ui16_Quantity > 0x007B) || (ui8_Data[4U] != SHL(ui16_Quantity, 1)))
  {
    return MODBUS_ILLEGAL_DATA_VALUE;
  }

  switch (ui8_ArrayIndex)
  {
#if (bl_Modbus_Slave_Use_1 != 0)
    case 0x00:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Holding_Registers_Count_1)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Holding_Registers_1[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = SHL(INT_TO_UINT16(*ui8_Pointer++), 8);
        ui16_Temp |= INT_TO_UINT16(*ui8_Pointer++);
        *ui16_Modbus_Holding_Registers_1[ui16_Address++] = ui16_Temp;
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_2 != 0)
    case 0x01:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Holding_Registers_Count_2)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Holding_Registers_2[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = SHL(INT_TO_UINT16(*ui8_Pointer++), 8);
        ui16_Temp |= INT_TO_UINT16(*ui8_Pointer++);
        *ui16_Modbus_Holding_Registers_2[ui16_Address++] = ui16_Temp;
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_3 != 0)
    case 0x02:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Holding_Registers_Count_3)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Holding_Registers_3[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = SHL(INT_TO_UINT16(*ui8_Pointer++), 8);
        ui16_Temp |= INT_TO_UINT16(*ui8_Pointer++);
        *ui16_Modbus_Holding_Registers_3[ui16_Address++] = ui16_Temp;
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_USB != 0)
    case 0x03:
      if ((ui16_Address + ui16_Quantity) > Modbus_Slave_Holding_Registers_Count_USB)
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity--)
      {
        if (!ui16_Modbus_Holding_Registers_USB[ui16_Address])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = SHL(INT_TO_UINT16(*ui8_Pointer++), 8);
        ui16_Temp |= INT_TO_UINT16(*ui8_Pointer++);
        *ui16_Modbus_Holding_Registers_USB[ui16_Address++] = ui16_Temp;
      }
      break;
#endif
  }
#endif

  return MODBUS_NO_ERROR;
}

/******************************************************************************
 * Function Name: Modbus_Read_Write_Multiple_Registers
 * Description: Запись регистров хранения, а затем чтение регистров хранения (0x17)
 ******************************************************************************/
uint8_t Modbus_Read_Write_Multiple_Registers(uint8_t ui8_ArrayIndex, uint8_t ui8_Data[], uint16_t *ui16_Count)
{
#if ((bl_Modbus_Slave_Use_USB != 0) || (bl_Modbus_Slave_Use_1 != 0) || (bl_Modbus_Slave_Use_2 != 0) || (bl_Modbus_Slave_Use_3 != 0))
  uint8_t *ui8_Pointer = &ui8_Data[9U];
  uint16_t ui16_Address_Read, ui16_Quantity_Read, ui16_Address_Write, ui16_Quantity_Write, ui16_Temp;

  ui16_Address_Read = ((SHL(INT_TO_UINT16(ui8_Data[0U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[1U]));
  ui16_Quantity_Read = ((SHL(INT_TO_UINT16(ui8_Data[2U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[3U]));
  ui16_Address_Write = ((SHL(INT_TO_UINT16(ui8_Data[4U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[5U]));
  ui16_Quantity_Write = ((SHL(INT_TO_UINT16(ui8_Data[6U]), 8) & 0xFF00) | INT_TO_UINT16(ui8_Data[7U]));

  *ui16_Count = INT_TO_UINT16(SHL(ui16_Quantity_Read, 1) + 1);

  if (
      (ui16_Quantity_Read < 1) || (ui16_Quantity_Read > 0x007D) ||
      (ui16_Quantity_Write < 1) || (ui16_Quantity_Write > 0x0079) ||
      (INT_TO_UINT16(ui8_Data[8U]) != SHL(ui16_Quantity_Write, 1))
  )
  {
    return MODBUS_ILLEGAL_DATA_VALUE;
  }

  switch (ui8_ArrayIndex)
  {
#if (bl_Modbus_Slave_Use_1 != 0)
    case 0x00:
      if (
          ((ui16_Address_Read + ui16_Quantity_Read) > Modbus_Slave_Holding_Registers_Count_1) ||
          ((ui16_Address_Write + ui16_Quantity_Write) > Modbus_Slave_Holding_Registers_Count_1)
      )
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity_Write--)
      {
        if (!ui16_Modbus_Holding_Registers_1[ui16_Address_Write])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = SHL(INT_TO_UINT16(*ui8_Pointer++), 8);
        ui16_Temp |= INT_TO_UINT16(*ui8_Pointer++);
        *ui16_Modbus_Holding_Registers_1[ui16_Address_Write++] = ui16_Temp;
      }

      ui8_Pointer = ui8_Data;
      *ui8_Pointer++ = INT_TO_UINT8(SHL(ui16_Quantity_Read, 1));

      while (ui16_Quantity_Read--)
      {
        if (!ui16_Modbus_Holding_Registers_1[ui16_Address_Read])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Holding_Registers_1[ui16_Address_Read++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_2 != 0)
    case 0x01:
      if (
          ((ui16_Address_Read + ui16_Quantity_Read) > Modbus_Slave_Holding_Registers_Count_2) ||
          ((ui16_Address_Write + ui16_Quantity_Write) > Modbus_Slave_Holding_Registers_Count_2)
      )
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity_Write--)
      {
        if (!ui16_Modbus_Holding_Registers_2[ui16_Address_Write])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = SHL(INT_TO_UINT16(*ui8_Pointer++), 8);
        ui16_Temp |= INT_TO_UINT16(*ui8_Pointer++);
        *ui16_Modbus_Holding_Registers_2[ui16_Address_Write++] = ui16_Temp;
      }

      ui8_Pointer = ui8_Data;
      *ui8_Pointer++ = INT_TO_UINT8(SHL(ui16_Quantity_Read, 1));

      while (ui16_Quantity_Read--)
      {
        if (!ui16_Modbus_Holding_Registers_2[ui16_Address_Read])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Holding_Registers_2[ui16_Address_Read++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_3 != 0)
    case 0x02:
      if (
          ((ui16_Address_Read + ui16_Quantity_Read) > Modbus_Slave_Holding_Registers_Count_3) ||
          ((ui16_Address_Write + ui16_Quantity_Write) > Modbus_Slave_Holding_Registers_Count_3)
      )
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity_Write--)
      {
        if (!ui16_Modbus_Holding_Registers_3[ui16_Address_Write])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = SHL(INT_TO_UINT16(*ui8_Pointer++), 8);
        ui16_Temp |= INT_TO_UINT16(*ui8_Pointer++);
        *ui16_Modbus_Holding_Registers_3[ui16_Address_Write++] = ui16_Temp;
      }

      ui8_Pointer = ui8_Data;
      *ui8_Pointer++ = INT_TO_UINT8(SHL(ui16_Quantity_Read, 1));

      while (ui16_Quantity_Read--)
      {
        if (!ui16_Modbus_Holding_Registers_3[ui16_Address_Read])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Holding_Registers_3[ui16_Address_Read++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
#if (bl_Modbus_Slave_Use_USB != 0)
    case 0x03:
      if (
          ((ui16_Address_Read + ui16_Quantity_Read) > Modbus_Slave_Holding_Registers_Count_USB) ||
          ((ui16_Address_Write + ui16_Quantity_Write) > Modbus_Slave_Holding_Registers_Count_USB)
      )
      {
        return MODBUS_ILLEGAL_DATA_ADDRESS;
      }

      while (ui16_Quantity_Write--)
      {
        if (!ui16_Modbus_Holding_Registers_USB[ui16_Address_Write])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = SHL(INT_TO_UINT16(*ui8_Pointer++), 8);
        ui16_Temp |= INT_TO_UINT16(*ui8_Pointer++);
        *ui16_Modbus_Holding_Registers_USB[ui16_Address_Write++] = ui16_Temp;
      }

      ui8_Pointer = ui8_Data;
      *ui8_Pointer++ = INT_TO_UINT8(SHL(ui16_Quantity_Read, 1));

      while (ui16_Quantity_Read--)
      {
        if (!ui16_Modbus_Holding_Registers_USB[ui16_Address_Read])
        {
          return MODBUS_SERVER_DEVICE_FAILURE;
        }

        ui16_Temp = *ui16_Modbus_Holding_Registers_USB[ui16_Address_Read++];
        *ui8_Pointer++ = INT_TO_UINT8(SHR(ui16_Temp, 8) & 0x00FF);
        *ui8_Pointer++ = INT_TO_UINT8(ui16_Temp & 0x00FF);
      }
      break;
#endif
  }
#endif

  return MODBUS_NO_ERROR;
}
