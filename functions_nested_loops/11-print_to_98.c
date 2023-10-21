#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - List of numbers
 *
 * Description: 'This function prints the list of all integer numbers
 * from n to 98 and return nothing'
 *
 * @n: Integer variable
 *
 * Return: Nothing
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
