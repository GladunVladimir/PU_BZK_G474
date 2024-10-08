/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IN_D_14_Pin GPIO_PIN_2
#define IN_D_14_GPIO_Port GPIOE
#define IN_D_15_Pin GPIO_PIN_3
#define IN_D_15_GPIO_Port GPIOE
#define IN_D_16_Pin GPIO_PIN_4
#define IN_D_16_GPIO_Port GPIOE
#define IN_D_20_Pin GPIO_PIN_6
#define IN_D_20_GPIO_Port GPIOE
#define IN_D_19_Pin GPIO_PIN_13
#define IN_D_19_GPIO_Port GPIOC
#define IN_D_18_Pin GPIO_PIN_15
#define IN_D_18_GPIO_Port GPIOC
#define IN_D_17_Pin GPIO_PIN_10
#define IN_D_17_GPIO_Port GPIOF
#define OSC_IN_Pin GPIO_PIN_0
#define OSC_IN_GPIO_Port GPIOF
#define OSC_OUT_Pin GPIO_PIN_1
#define OSC_OUT_GPIO_Port GPIOF
#define LED_GREEN_Pin GPIO_PIN_5
#define LED_GREEN_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_6
#define LED_RED_GPIO_Port GPIOA
#define OUT_D_24_Pin GPIO_PIN_5
#define OUT_D_24_GPIO_Port GPIOC
#define OUT_D_23_Pin GPIO_PIN_0
#define OUT_D_23_GPIO_Port GPIOB
#define OUT_D_22_Pin GPIO_PIN_1
#define OUT_D_22_GPIO_Port GPIOB
#define OUT_D_21_Pin GPIO_PIN_2
#define OUT_D_21_GPIO_Port GPIOB
#define OUT_D_20_Pin GPIO_PIN_7
#define OUT_D_20_GPIO_Port GPIOE
#define OUT_D_19_Pin GPIO_PIN_8
#define OUT_D_19_GPIO_Port GPIOE
#define OUT_D_18_Pin GPIO_PIN_9
#define OUT_D_18_GPIO_Port GPIOE
#define OUT_D_17_Pin GPIO_PIN_10
#define OUT_D_17_GPIO_Port GPIOE
#define OUT_D_25_Pin GPIO_PIN_11
#define OUT_D_25_GPIO_Port GPIOE
#define IN_D_21_Pin GPIO_PIN_12
#define IN_D_21_GPIO_Port GPIOE
#define IN_D_23_Pin GPIO_PIN_13
#define IN_D_23_GPIO_Port GPIOE
#define IN_D_22_Pin GPIO_PIN_14
#define IN_D_22_GPIO_Port GPIOE
#define IN_D_24_Pin GPIO_PIN_15
#define IN_D_24_GPIO_Port GPIOE
#define OUT_D_12_Pin GPIO_PIN_11
#define OUT_D_12_GPIO_Port GPIOB
#define OUT_D_11_Pin GPIO_PIN_13
#define OUT_D_11_GPIO_Port GPIOB
#define OUT_D_10_Pin GPIO_PIN_14
#define OUT_D_10_GPIO_Port GPIOB
#define OUT_D_9_Pin GPIO_PIN_15
#define OUT_D_9_GPIO_Port GPIOB
#define OUT_D_8_Pin GPIO_PIN_8
#define OUT_D_8_GPIO_Port GPIOD
#define OUT_D_7_Pin GPIO_PIN_9
#define OUT_D_7_GPIO_Port GPIOD
#define OUT_D_6_Pin GPIO_PIN_10
#define OUT_D_6_GPIO_Port GPIOD
#define OUT_D_5_Pin GPIO_PIN_11
#define OUT_D_5_GPIO_Port GPIOD
#define OUT_D_4_Pin GPIO_PIN_12
#define OUT_D_4_GPIO_Port GPIOD
#define OUT_D_3_Pin GPIO_PIN_13
#define OUT_D_3_GPIO_Port GPIOD
#define OUT_D_2_Pin GPIO_PIN_14
#define OUT_D_2_GPIO_Port GPIOD
#define OUT_D_1_Pin GPIO_PIN_15
#define OUT_D_1_GPIO_Port GPIOD
#define IN_D_1_Pin GPIO_PIN_7
#define IN_D_1_GPIO_Port GPIOC
#define IN_D_2_Pin GPIO_PIN_9
#define IN_D_2_GPIO_Port GPIOC
#define IN_D_3_Pin GPIO_PIN_8
#define IN_D_3_GPIO_Port GPIOA
#define IN_D_4_Pin GPIO_PIN_9
#define IN_D_4_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_10
#define LED_YELLOW_GPIO_Port GPIOC
#define CAN_1_RX_Pin GPIO_PIN_0
#define CAN_1_RX_GPIO_Port GPIOD
#define CAN_1_TX_Pin GPIO_PIN_1
#define CAN_1_TX_GPIO_Port GPIOD
#define IN_D_5_Pin GPIO_PIN_3
#define IN_D_5_GPIO_Port GPIOD
#define IN_D_6_Pin GPIO_PIN_4
#define IN_D_6_GPIO_Port GPIOD
#define IN_D_7_Pin GPIO_PIN_5
#define IN_D_7_GPIO_Port GPIOD
#define IN_D_8_Pin GPIO_PIN_6
#define IN_D_8_GPIO_Port GPIOD
#define IN_D_9_Pin GPIO_PIN_7
#define IN_D_9_GPIO_Port GPIOD
#define IN_D_10_Pin GPIO_PIN_3
#define IN_D_10_GPIO_Port GPIOB
#define IN_D_13_Pin GPIO_PIN_4
#define IN_D_13_GPIO_Port GPIOB
#define IN_D_12_Pin GPIO_PIN_5
#define IN_D_12_GPIO_Port GPIOB
#define IN_D_11_Pin GPIO_PIN_6
#define IN_D_11_GPIO_Port GPIOB
#define OUT_D_13_Pin GPIO_PIN_7
#define OUT_D_13_GPIO_Port GPIOB
#define OUT_D_14_Pin GPIO_PIN_8
#define OUT_D_14_GPIO_Port GPIOB
#define OUT_D_15_Pin GPIO_PIN_9
#define OUT_D_15_GPIO_Port GPIOB
#define OUT_D_16_Pin GPIO_PIN_0
#define OUT_D_16_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
