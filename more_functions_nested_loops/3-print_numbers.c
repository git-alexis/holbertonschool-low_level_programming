#include <stdio.h>
#include "main.h"

/**
 * print_numbers - List digit
 *
 * Description: 'This function prints the list of digit and returns nothing'
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);
	_putchar('\n');
}
