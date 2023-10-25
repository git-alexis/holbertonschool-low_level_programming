#include <stdio.h>
#include "main.h"

/**
 * print_array - Half of string
 *
 * Description: 'This function print the last half of a string
 * and return nothing'
 *
 * @a: Pointer of integer variable a
 * @n: Integer variable
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i, j, length = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		length += 1;
	}
	if (length == 0)
	{
		printf("\n");
	}
	else
	{
		printf("%d", a[0]);

		for (j = 1; j < n; j++)
		{
			printf(",");
			printf(" ");
			printf("%d", a[j]);
		}
		printf("\n");
	}
}
