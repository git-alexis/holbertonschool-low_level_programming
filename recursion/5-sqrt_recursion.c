#include <stdio.h>
#include "main.h"

/**
 * _calcul_sqrt - Print string with recursion
 *
 * Description: 'This function '
 *
 * @n: Pointer of character variable
 * @m: Pointer of character variable
 *
 * Return: String (s)
 */

int _calcul_sqrt(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	return (_calcul_sqrt(n, m + 1));
}

/**
 * _sqrt_recursion - Print string with recursion
 *
 * Description: 'This function '
 *
 * @n: Pointer of character variable
 *
 * Return: String (s)
 */

int _sqrt_recursion(int n)
{
	return (_calcul_sqrt(n, 0));
}
