#include <stdio.h>
#include "main.h"

/**
 * print_sign - Letter checker
 *
 * Description: 'This function check if the variable is letter
 * and return 1 or 0 if is she or not'
 *
 * @n: Integer variable
 *
 * Return: 1, 0 or -1 (>0, ==0 or <0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
