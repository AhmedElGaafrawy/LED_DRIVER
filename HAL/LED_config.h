/*
 * LED_config.h
 *
 *  Created on	: Mar 31, 2020
 *  Version			: 1.0.1
 *  Author			: Ahmed El-Gaafarwy
 */

#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_

#define NUM_OF_LEDS		2



LED_Info LED_AstrNumOfLeds [NUM_OF_LEDS] =
{
		{	PORT_A , PIN0},
		{	PORT_A , PIN1}
};

#endif /* LED_CONFIG_H_ */
