#include <stdio.h>
#include "main.h"

/**
 * print_line - Print line
 *
 * Description: 'This function prints the line with underscore
 * and returns nothing'
 *
 * @n: Integer variable
 *
 * Return: Nothing
 */

void print_line(int n)
{
	if (n >= 1)
	{
		int rep;

		for (rep = 1; rep <= n; rep++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
