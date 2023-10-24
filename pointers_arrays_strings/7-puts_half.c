#include <stdio.h>
#include "main.h"

/**
 * puts_half - Half of string
 *
 * Description: 'This function print the last half of a string
 * and return nothing'
 *
 * @str: Pointer of character variable
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, j, mid_length, length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length += 1;
	}
	if (length % 2 == 1)
	{
		mid_length = (length - 1) / 2;
	}
	else
	{
		mid_length = length / 2;
	}
	for (j = mid_length; j < length; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
