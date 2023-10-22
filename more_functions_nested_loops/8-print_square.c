#include <stdio.h>
#include "main.h"

/**
 * print_square - Print hash square
 *
 * Description: 'This function prints the square with hash and returns nothing'
 *
 * @size: Integer variable containing the size of the square
 *
 * Return: Nothing
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int line, hash;

		for (line = 1; line <= size; line++)
		{
			for (hash = 1; hash <= size; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
