#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Last digit of number
 *
 * Description: 'This function return the last digit of an integer'
 *
 * @n: Integer variable
 *
 * Return: Integer (%10)
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n *= -1;
	_putchar('0' + n);
	return (n);
}
