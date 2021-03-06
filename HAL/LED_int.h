/*
 * LED_int.h
 *
 *  Created on	: Mar 31, 2020
 *  Version		: 1.0.0
 *  Author		: Ahmed El-Gaafarwy
 */

#ifndef LED_INT_H_
#define LED_INT_H_


/*****************************************************************************/
/*****************************************************************************/
/** 	Define the LED order here to passing to your function at run time	**/
/**			  Attention!!!!, you must use the same sequence of number 	    **/
/*****************************************************************************/
/*****************************************************************************/

#define 	FIRST_LED		0
#define 	SECOND_LED		1
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/



/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: LED_enuInit. 											**/
/**	Return Type		: ERROR_STATES enum.					   		   		**/
/**	Arguments		: void.					   								**/
/**	Functionality	: Setting the directions and Turning off the LEDs' pins.**/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES LED_enuInit 		(void);


/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: LED_enuTurnON. 										**/
/**	Return Type		: ERROR_STATES enum.					   		   		**/
/**	Arguments		: Number of LED order.					   				**/
/**	Functionality	: Turnning on the specific LED at run time.				**/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES LED_enuTurnON 		(u8 Copy_u8LED_Order);


/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: LED_enuTurnON. 										**/
/**	Return Type		: ERROR_STATES enum.					   		   		**/
/**	Arguments		: Number of LED order.					   				**/
/**	Functionality	: Toggling the specific LED at run time.				**/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES LED_enuTurnToggle 	(u8 Copy_u8LED_Order);


/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: LED_enuTurnOFF. 										**/
/**	Return Type		: ERROR_STATES enum.					   		   		**/
/**	Arguments		: Number of LED order.					   				**/
/**	Functionality	: Turnning off the specific LED at run time.			**/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES LED_enuTurnOFF 	(u8 Copy_u8LED_Order);

#endif /* LED_INT_H_ */
