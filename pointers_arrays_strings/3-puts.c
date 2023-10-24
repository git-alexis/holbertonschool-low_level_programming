#include <stdio.h>
#include "main.h"

/**
 * _puts - Print a string
 *
 * Description: 'This function print a string followed by a new line
 * and return nothing'
 *
 * @str: Address of character variable
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
