#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: 'This function prints the alphabet in lowercase
 * with the loops for and the _putchar function. She returns nothing'
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
