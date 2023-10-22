#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Print diagonal
 *
 * Description: 'This function prints the diagonal with backslashes
 * and returns nothing'
 *
 * @n: Integer variable
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int line, espace;

		for (line = 0; line < n; line++)
		{
			for (espace = 0; espace < line; espace++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
