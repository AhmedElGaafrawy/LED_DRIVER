/*
 * main.c
 *
 *  Created on	: Mar 31, 2020
 *  Version			: 1.0.1
 *  Author			: Ahmed El-Gaafarwy
 */

#include "../LIBRARY/stdTypes.h"
#include "../LIBRARY/BIT_MATH.h"
#include "../LIBRARY/errorStates.h"


#include "../MCAL/DIO_int.h"

#include "../HAL/LED_int.h"

#include <util/delay.h>

int main (void)
{
	LED_enuInit();
	while (1)
	{
		LED_enuTurnToggle(FIRST_LED);
		_delay_ms(500);
	}

	return 0;
}
