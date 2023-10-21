#include <stdio.h>
#include "main.h"

/**
 * _isupper - Uppercase letter checker
 *
 * Description: 'This function check if the variable is in uppercase
 * and return 1 or 0 if is she or not'
 *
 * @c: Integer variable
 *
 * Return: 1 or 0 (Is upper or not)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
