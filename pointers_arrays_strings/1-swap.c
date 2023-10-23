#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps integers
 *
 * Description: 'This function exchange the values of two integer variables
 * by their addresses return nothing'
 *
 * @a: Address of integer variable
 * @b: Address of integer variable
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *b;
	*b = *a;
	*a = temporary;
}
