/*******************************************************************************
*                                                                              *
* FILE:                                                                        * 
* 		pin_defines_A0002.h                                                    *
*                                                                              *
* DESCRIPTION:                                                                 * 
* 	    Contains all the MCU pin definitions for the full feature flight       *
*       computer (A0002), all revisions
*                                                                              *
*******************************************************************************/


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef ZENITH_PIN_DEFINES 
#define ZENITH_PIN_DEFINES 

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
#define STATUS_R_PIN              GPIO_PIN_9 
#define STATUS_G_PIN              GPIO_PIN_13
#define STATUS_B_PIN	          GPIO_PIN_11  

/* Ignition */
#define SWITCH_PIN                GPIO_PIN_15
#define MAIN_PIN                  GPIO_PIN_1
#define MAIN_CONT_PIN             GPIO_PIN_0
#define DROGUE_PIN                GPIO_PIN_2
#define DROGUE_CONT_PIN           GPIO_PIN_3
#define AUX1_PIN                  GPIO_PIN_14
#define AUX1_CONT_PIN             GPIO_PIN_0
#define AUX2_PIN                  GPIO_PIN_13
#define AUX2_CONT_PIN             GPIO_PIN_6

/* External Flash */
#define FLASH_SS_PIN			  GPIO_PIN_12
#define FLASH_SCK_PIN             GPIO_PIN_13
#define FLASH_MISO_PIN            GPIO_PIN_14
#define FLASH_MOSI_PIN            GPIO_PIN_15
#define FLASH_WP_PIN              GPIO_PIN_12
#define FLASH_HOLD_PIN            GPIO_PIN_13

/* Baro Pressure Sensor */
#define BARO_SCL_PIN              GPIO_PIN_6
#define BARO_SDA_PIN              GPIO_PIN_7
#define BARO_INT_PIN              GPIO_PIN_5

/* IMU */
#define IMU_SDA_PIN               GPIO_PIN_11
#define IMU_SCL_PIN               GPIO_PIN_10
#define IMU_INT1_PIN          	  GPIO_PIN_2
#define IMU_INT2_PIN              GPIO_PIN_3

/* Magnetometer */
#define MAG_SDA_PIN               IMU_SDA_PIN
#define MAG_SCL_PIN               IMU_SCL_PIN
#define MAG_INT_PIN               GPIO_PIN_4
#define MAG_DRDY_PIN              GPIO_PIN_7

/* High-G Accelerometer */
#define HG_ACC_SCL_PIN            GPIO_PIN_8
#define HG_ACC_SDA_PIN            GPIO_PIN_9
#define HG_ACC_INT1_PIN           GPIO_PIN_8
#define HG_ACC_INT2_PIN           GPIO_PIN_9

/* USB */
#define USB_RX_PIN                GPIO_PIN_6
#define USB_TX_PIN                GPIO_PIN_7
#define USB_SUSPEND_PIN           GPIO_PIN_8
#define USB_RST_PIN               GPIO_PIN_12
#define USB_DETECT_PIN        	  GPIO_PIN_10

/* Buzzer */
#define BUZZER_PIN                GPIO_PIN_14

/* Battery Voltage Measurement */
#define VBAT_SENSE_PIN            GPIO_PIN_6


/*-----------------------------------------------------------------------------
 MCU Port Assignments                                                          
------------------------------------------------------------------------------*/

/* LED */
#define STATUS_GPIO_PORT          GPIOE

/* Ignition */
#define SWITCH_GPIO_PORT          GPIOC
#define MAIN_GPIO_PORT            GPIOC
#define MAIN_CONT_GPIO_PORT       GPIOA
#define DROGUE_GPIO_PORT          GPIOC 
#define DROGUE_CONT_GPIO_PORT     GPIOC
#define AUX1_GPIO_PORT            GPIOC
#define AUX1_CONT_GPIO_PORT       GPIOC 
#define AUX2_GPIO_PORT            GPIOC
#define AUX2_CONT_GPIO_PORT       GPIOE 

/* External Flash */
#define FLASH_SS_GPIO_PORT        GPIOB
#define FLASH_SCK_GPIO_PORT       GPIOB
#define FLASH_MISO_GPIO_PORT      GPIOB
#define FLASH_MOSI_GPIO_PORT      GPIOB
#define FLASH_WP_GPIO_PORT        GPIOD
#define FLASH_HOLD_GPIO_PORT      GPIOD

/* Baro Pressure Sensor */
#define BARO_SCL_GPIO_PORT        GPIOB
#define BARO_SDA_GPIO_PORT        GPIOB
#define BARO_INT_GPIO_PORT        GPIOE

/* IMU */
#define IMU_SDA_GPIO_PORT         GPIOB
#define IMU_SCL_GPIO_PORT         GPIOB
#define IMU_INT1_GPIO_PORT        GPIOA
#define IMU_INT2_GPIO_PORT        GPIOA

/* Magnetometer */
#define MAG_SDA_GPIO_PORT         IMU_SDA_GPIO_PORT
#define MAG_SCL_GPIO_PORT         IMU_SCL_GPIO_PORT
#define MAG_INT_GPIO_PORT         GPIOC
#define MAG_DRDY_GPIO_PORT        GPIOA

/* High-G Accelerometer */
#define HG_ACC_SCL_GPIO_PORT      GPIOB
#define HG_ACC_SDA_GPIO_PORT      GPIOB
#define HG_ACC_INT1_GPIO_PORT     GPIOD
#define HG_ACC_INT2_GPIO_PORT     GPIOD

/* USB */
#define USB_RX_GPIO_PORT          GPIOC
#define USB_TX_GPIO_PORT          GPIOC
#define USB_SUSPEND_GPIO_PORT     GPIOA
#define USB_RST_GPIO_PORT         GPIOA
#define USB_DETECT_GPIO_PORT      GPIOD

/* Buzzer */
#define BUZZER_GPIO_PORT          GPIOD

/* Battery Voltage Measurement */
#define VBAT_SENSE_GPIO_PORT      GPIOA


/*--------------------------------------------------------------------------
 MCU Peripheral Configuration 
--------------------------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif /* ZENITH_PIN_DEFINES */

/*******************************************************************************
* END OF FILE                                                                  * 
*******************************************************************************/