/*******************************************************************************
*                                                                              *
* FILE:                                                                        * 
* 		sdr_pin_defines_L0005.h                                                *
*                                                                              *
* DESCRIPTION:                                                                 * 
* 	    Contains all the MCU pin definitions of the valve controller           *	
*                                                                              *
*******************************************************************************/


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef SDR_PIN_DEFINES 
#define SDR_PIN_DEFINES 

#ifdef __cplusplus
extern "C" {
#endif


/*------------------------------------------------------------------------------
 Includes                                                                    
------------------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"


/* Rev 2.0 */
#ifdef L0005_REV2
	/*-------------------------------------------------------------------------
	 MCU Pin Assignments                                                          
	--------------------------------------------------------------------------*/

	/* LEDs */
	#define STATUS_PIN    GPIO_PIN_15
	#define EXCEPT_PIN    GPIO_PIN_13


	/*-------------------------------------------------------------------------
	 MCU Port Assignments                                                          
	--------------------------------------------------------------------------*/

	/* LEDs */
	#define STATUS_PORT    GPIOA
	#define EXCEPT_PORT    GPIOD


	/*--------------------------------------------------------------------------
	 MCU Peripheral Configuration 
	--------------------------------------------------------------------------*/

	/* Peripheral handles */
	extern UART_HandleTypeDef huart4; /* USB UART */

	/* Peripheral Macros */
	#define USB_HUART         huart4

#endif /* L0005_REV2 */


#ifdef __cplusplus
}
#endif

#endif /* SDR_PIN_DEFINES */
