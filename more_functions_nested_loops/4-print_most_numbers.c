#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - List digit excluding 2 and 4
 *
 * Description: 'This function prints the list of digit excluding 2 and 4
 * and returns nothing'
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
			_putchar(num);
	}
	_putchar('\n');
}
