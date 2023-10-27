#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Reversed integer array
 *
 * Description: 'This function revers array of integer a of size n
 * and return nothing'
 *
 * @a: Pointer of integer array
 * @n: Integer variable
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int index, mid_length;

	mid_length = n / 2;

	for (index = 0; index < mid_length; index++)
	{
		int rev_index = n - (index + 1);
		int temporary;

		temporary = a[index];
		a[index] = a[rev_index];
		a[rev_index] = temporary;
	}
}
