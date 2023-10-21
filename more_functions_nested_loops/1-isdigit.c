#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Digit checker
 *
 * Description: 'This function check if the variable is a digit
 * and return 1 or 0 if is she or not'
 *
 * @c: Integer variable
 *
 * Return: 1 or 0 (Is digit or not)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
