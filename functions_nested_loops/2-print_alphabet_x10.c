#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'This function prints the alphabet in lowercase 10 times
 * with the loops for and the _putchar function.
 * She returns nothing'
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
