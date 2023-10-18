#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Letter checker
 *
 * Description: 'This function check if the variable is letter
 * and return 1 or 0 if is she or not'
 *
 * @c: Integer variable
 *
 * Return: 1 or 0 (islower or not)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
