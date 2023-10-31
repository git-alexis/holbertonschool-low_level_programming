#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Print string with recursion
 *
 * Description: 'This function '
 *
 * @s: Pointer of character variable
 *
 * Return: String (s)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
