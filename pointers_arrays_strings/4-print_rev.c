#include <stdio.h>
#include "main.h"

/**
 * print_rev - Print a reversed string
 *
 * Description: 'This function print a string in revers followed by a new line
 * and return nothing'
 *
 * @s: Address of character variable
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i, j, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length += 1;
	}

	for (j = 0; j < length; j++)
	{
		int index = length - (j + 1);

		_putchar(s[index]);
	}
	_putchar('\n');
}
