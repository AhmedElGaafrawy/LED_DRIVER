/*
 * LED_prog.c
 *
 *  Created on	: Mar 31, 2020
 *  Version		: 1.0.1
 *  Author		: Ahmed El-Gaafarwy
 */
#include "../LIBRARY/stdTypes.h"
#include "../LIBRARY/BIT_MATH.h"
#include "../LIBRARY/errorStates.h"

#include "../MCAL/DIO_priv.h"
#include "../MCAL/DIO_config.h"
#include "../MCAL/DIO_int.h"

#include "LED_priv.h"
#include "LED_config.h"


/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: LED_enuInit. 											**/
/**	Return Type		: ERROR_STATES enum.					   		   		**/
/**	Arguments		: void.					   								**/
/**	Functionality	: Setting the directions and Turning off the LEDs' pins.**/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES LED_enuInit 		(void)
{
	ERROR_STATES error_enuState = ES_NOT_OK;
	u8 Local_u8Iter = 0;
	for (Local_u8Iter = 0 ; Local_u8Iter < NUM_OF_LEDS ; Local_u8Iter ++ )
	{
		DIO_enuSetPinDirection(LED_AstrNumOfLeds[Local_u8Iter].LED_u8Port ,LED_AstrNumOfLeds[Local_u8Iter].LED_u8Pin, PIN_OUTPUT );
		DIO_enuGetPinValue(LED_AstrNumOfLeds[Local_u8Iter].LED_u8Port ,LED_AstrNumOfLeds[Local_u8Iter].LED_u8Pin, PIN_LOW );
		error_enuState = ES_OK;
	}
	return error_enuState;
}



/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: LED_enuTurnON. 										**/
/**	Return Type		: ERROR_STATES enum.					   		   		**/
/**	Arguments		: Number of LED order.					   				**/
/**	Functionality	: Turnning on the specific LED at run time.				**/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES LED_enuTurnON 		(u8 Copy_u8LED_Order)
{
	ERROR_STATES error_enuState = ES_NOT_OK;
	if (Copy_u8LED_Order <  NUM_OF_LEDS)
	{
		DIO_enuSetPinValue(LED_AstrNumOfLeds[Copy_u8LED_Order].LED_u8Port ,LED_AstrNumOfLeds[Copy_u8LED_Order].LED_u8Pin, PIN_HIGH );
		error_enuState =ES_OK;
	}
	else
	{
		error_enuState = ES_OUT_OF_RANGE;
	}
	return error_enuState;
}


/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: LED_enuTurnON. 										**/
/**	Return Type		: ERROR_STATES enum.					   		   		**/
/**	Arguments		: Number of LED order.					   				**/
/**	Functionality	: Toggling the specific LED at run time.				**/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES LED_enuTurnToggle 	(u8 Copy_u8LED_Order)
{
	ERROR_STATES error_enuState = ES_NOT_OK;

	if (Copy_u8LED_Order <  NUM_OF_LEDS)
	{
		switch (LED_AstrNumOfLeds[Copy_u8LED_Order].LED_u8Port)
		{
		case PORT_A:
			PORTA^=(ONE<<LED_AstrNumOfLeds[Copy_u8LED_Order].LED_u8Pin);
				error_enuState = ES_OK;		break;
		case PORT_B:
			PORTB^=(ONE<<LED_AstrNumOfLeds[Copy_u8LED_Order].LED_u8Pin);
				error_enuState = ES_OK;		break;
		case PORT_C:
			PORTC^=(ONE<<LED_AstrNumOfLeds[Copy_u8LED_Order].LED_u8Pin);
				error_enuState = ES_OK;		break;
		case PORT_D:
			PORTD^=(ONE<<LED_AstrNumOfLeds[Copy_u8LED_Order].LED_u8Pin);
				error_enuState = ES_OK;		break;
		default:
			error_enuState = ES_NOT_SELECTED;
		}
	}
	else
	{
		error_enuState = ES_OUT_OF_RANGE;
	}
	return error_enuState;
}



/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: LED_enuTurnOFF. 										**/
/**	Return Type		: ERROR_STATES enum.					   		   		**/
/**	Arguments		: Number of LED order.					   				**/
/**	Functionality	: Turnning off the specific LED at run time.			**/
/*****************************************************************************/
/*****************************************************************************/
ERROR_STATES LED_enuTurnOFF 	(u8 Copy_u8LED_Order)
{
	ERROR_STATES error_enuState = ES_NOT_OK;
	if (Copy_u8LED_Order <  NUM_OF_LEDS)
	{
		DIO_enuSetPinValue(LED_AstrNumOfLeds[Copy_u8LED_Order].LED_u8Port ,LED_AstrNumOfLeds[Copy_u8LED_Order].LED_u8Pin, PIN_LOW );
		error_enuState =ES_OK;
	}
	else
	{
		error_enuState = ES_OUT_OF_RANGE;
	}
	return error_enuState;
}
