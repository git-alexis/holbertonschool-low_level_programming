#include <stdio.h>
#include "main.h"

/**
 * _abs - Absolute value of integer
 *
 * Description: 'This function return the absolute value of an integer'
 *
 * @n: Integer variable
 *
 * Return: | | (absolute value)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);
}
