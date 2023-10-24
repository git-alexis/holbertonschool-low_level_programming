#include <stdio.h>
#include "main.h"

/**
 * puts2 - Print a string 2
 *
 * Description: 'This function print a string every two letters
 * followed by a new line and return nothing'
 *
 * @str: Address of character variable
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
