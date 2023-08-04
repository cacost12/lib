/*******************************************************************************
*                                                                              *
* FILE:                                                                        * 
* 		zav_pin_defines_A0003.h                                                *
*                                                                              *
* DESCRIPTION:                                                                 * 
* 	    Contains all the MCU pin definitions for the legacy flight computer    *
*                                                                              *
*******************************************************************************/


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef ZAV_PIN_DEFINES 
#define ZAV_PIN_DEFINES 

#ifdef __cplusplus
extern "C" {
#endif


/*------------------------------------------------------------------------------
Includes 
------------------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"


/*-----------------------------------------------------------------------------
 MCU Pin Assignments                                                          
------------------------------------------------------------------------------*/

/* LED */
#define STATUS_B_PIN	          GPIO_PIN_9    
#define STATUS_G_PIN              GPIO_PIN_10  
#define STATUS_R_PIN              GPIO_PIN_11  

/* Ignition */
#define SWITCH_PIN                GPIO_PIN_7
#define MAIN_PIN                  GPIO_PIN_6
#define MAIN_CONT_PIN             GPIO_PIN_4
#define DROGUE_PIN                GPIO_PIN_13
#define DROGUE_CONT_PIN           GPIO_PIN_14

/* External Flash */
#define FLASH_SS_PIN			  GPIO_PIN_12
#define FLASH_SCK_PIN             GPIO_PIN_13
#define FLASH_MISO_PIN            GPIO_PIN_14
#define FLASH_MOSI_PIN            GPIO_PIN_15
#define FLASH_WP_PIN              GPIO_PIN_12
#define FLASH_HOLD_PIN            GPIO_PIN_13

/* SD Card */
#define SDR_SD_DETECT_PIN         GPIO_PIN_15

/* Baro Pressure Sensor */
#define BP_INT_PIN                GPIO_PIN_3
#define BARO_SCL_PIN              GPIO_PIN_6
#define BARO_SDA_PIN              GPIO_PIN_7

/* IMU */
#define IMU_INT1_PIN              GPIO_PIN_2
#define IMU_INT2_PIN              GPIO_PIN_2
#define IMU_SCL_PIN               GPIO_PIN_10
#define IMU_SDA_PIN               GPIO_PIN_11

/* USB */
#define USB_SUSPEND_PIN           GPIO_PIN_8
#define USB_RST_PIN               GPIO_PIN_12
#define USB_DETECT_PIN            GPIO_PIN_9
#define USB_RX_PIN                GPIO_PIN_6
#define USB_TX_PIN                GPIO_PIN_7

/* Magnetometer */
#define MAG_INT_PIN               GPIO_PIN_7
#define MAG_DRDY_PIN              GPIO_PIN_2


/*-----------------------------------------------------------------------------
 MCU Port Assignments                                                          
------------------------------------------------------------------------------*/

/* LED */
#define STATUS_GPIO_PORT          GPIOA

/* Ignition */
#define SWITCH_GPIO_PORT          GPIOD
#define MAIN_GPIO_PORT            GPIOD
#define MAIN_CONT_GPIO_PORT       GPIOE
#define DROGUE_GPIO_PORT          GPIOC
#define DROGUE_CONT_GPIO_PORT     GPIOC

/* External Flash */
#define FLASH_SS_GPIO_PORT        GPIOB
#define FLASH_SCK_GPIO_PORT       GPIOB
#define FLASH_MISO_GPIO_PORT      GPIOB
#define FLASH_MOSI_GPIO_PORT      GPIOB
#define FLASH_WP_GPIO_PORT        GPIOD
#define FLASH_HOLD_GPIO_PORT      GPIOD

/* SD Card */
#define SDR_SD_DETECT_GPIO_PORT   GPIOD

/* Baro Pressure Sensor */
#define BP_INT_GPIO_PORT          GPIOE
#define BARO_SCL_GPIO_PORT        GPIOB
#define BARO_SDA_GPIO_PORT        GPIOB

/* IMU */
#define IMU_INT1_GPIO_PORT        GPIOC 
#define IMU_INT2_GPIO_PORT        GPIOA 
#define IMU_SCL_GPIO_PORT         GPIOB
#define IMU_SDA_GPIO_PORT         GPIOB

/* USB */
#define USB_SUSPEND_GPIO_PORT     GPIOA 
#define USB_RST_GPIO_PORT         GPIOA 
#define USB_DETECT_GPIO_PORT      GPIOD 
#define USB_RX_GPIO_PORT          GPIOC
#define USB_TX_GPIO_PORT          GPIOC

/* Magnetometer */
#define MAG_INT_GPIO_PORT         GPIOE
#define MAG_DRDY_GPIO_PORT        GPIOB 


/*--------------------------------------------------------------------------
 MCU Peripheral Configuration 
--------------------------------------------------------------------------*/

/* MCU Peripheral Handles */
extern I2C_HandleTypeDef  baro_hi2c;  /* Baro I2C     */
extern I2C_HandleTypeDef  imu_hi2c;  /* IMU I2C      */
extern SPI_HandleTypeDef  flash_hspi;  /* Flash SPI    */
//extern TIM_HandleTypeDef  htim4;  /* Buzzer Timer */
extern UART_HandleTypeDef usb_huart; /* USB UART     */

/* Peripheral Compatibility Macros */
#define BARO_I2C                 I2C1 
#define FLASH_SPI                SPI2 
#define IMU_I2C                  I2C2 
#define USB_UART                 USART6 
//#define BUZZ_TIM                  htim4

/* Timer channels */
//#define BUZZ_TIM_CHANNEL         TIM_CHANNEL_3


#ifdef __cplusplus
}
#endif

#endif /* ZAV_PIN_DEFINES */


/*******************************************************************************
* END OF FILE                                                                  *
*******************************************************************************/