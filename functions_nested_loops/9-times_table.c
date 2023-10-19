#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: 'This function prints all the multiplication tables from 0 to 9
 * and return nothing'
 *
 * Return: Nothing
 */

void times_table(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
	{
		int num2;

		for (num2 = 0; num2 <= 9; num2++)
		{
			int product = num1 * num2;

			if (num2 == 0)
			{
				_putchar('0');
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				int product_left = product / 10;
				int product_right = product % 10;

				_putchar(',');
				_putchar(' ');
				_putchar('0' + product_left);
				_putchar('0' + product_right);
			}
		}
		_putchar('\n');
	}
}
