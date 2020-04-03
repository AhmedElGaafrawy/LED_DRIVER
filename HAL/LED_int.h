/*
 * LED_int.h
 *
 *  Created on	: Mar 31, 2020
 *  Version			: 1.0.1
 *  Author			: Ahmed El-Gaafarwyy
 */

#ifndef LED_INT_H_
#define LED_INT_H_

#define 	FIRST_LED		0
#define 	SECOND_LED		1


ERROR_STATES LED_enuInit 		(void);

ERROR_STATES LED_enuTurnON 		(u8 Copy_u8LED_Order);

ERROR_STATES LED_enuTurnToggle 	(u8 Copy_u8LED_Order);

ERROR_STATES LED_enuTurnOFF 	(u8 Copy_u8LED_Order);

#endif /* LED_INT_H_ */
