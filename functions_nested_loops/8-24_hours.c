#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: 'This function prints all the clock times'
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		int hour_left = hour / 10;
		int hour_right = hour % 10;

		for (minute = 0; minute <= 59; minute++)
		{
			int minute_left = minute / 10;
                	int minute_right = minute % 10;

			_putchar('0' + hour_left);
			_putchar('0' + hour_right);
			_putchar(':');
			_putchar('0' + minute_left);
			_putchar('0' + minute_right);
			_putchar('\n');
		}
	}
}
