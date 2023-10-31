#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Print string with recursion
 *
 * Description: 'This function '
 *
 * @x: Pointer of character variable
 * @y: Pointer of character variable
 *
 * Return: String (s)
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
