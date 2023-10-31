#include <stdio.h>
#include "main.h"

/**
 * factorial - Print string with recursion
 *
 * Description: 'This function '
 *
 * @n: Pointer of character variable
 *
 * Return: String (s)
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
