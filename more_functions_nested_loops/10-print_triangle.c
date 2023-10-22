#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Print hash square
 *
 * Description: 'This function prints the square with hash and returns nothing'
 *
 * @size: Integer variable containing the size of the square
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int line, space, hash;

		for (line = 0; line < size; line++)
		{
			for (space = size - 1; space > line; space--)
			{
				_putchar(' ');
			}
			for (hash = -1; hash < line; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
