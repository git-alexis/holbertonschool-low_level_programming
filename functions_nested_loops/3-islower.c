#include <stdio.h>
#include "main.h"

/**
 * _islower - Lowercase letter checker
 *
 * Description: 'This function check if the variable is in lowercase
 * and return 1 or 0 if is she or not'
 *
 * @c: Integer variable
 *
 * Return: 1 or 0 (islower or not)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
