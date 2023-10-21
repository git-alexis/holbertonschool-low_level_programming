#include <stdio.h>
#include "main.h"

/**
 * more_numbers - List of numbers 10 times
 *
 * Description: 'This function prints a list of integer numbers
 * from 0 to 14 ten times and return nothing'
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num2 >= 10)
			{
				_putchar('0' + num2 / 10);
			}
			_putchar('0' + num2 % 10);
		}
		_putchar('\n');
	}
}
