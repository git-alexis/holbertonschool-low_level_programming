#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Print string with recursion
 *
 * Description: 'This function '
 *
 * @s: Pointer of character variable
 *
 * Return: String (s)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
