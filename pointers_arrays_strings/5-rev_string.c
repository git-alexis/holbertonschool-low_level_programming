#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reversed string
 *
 * Description: 'This function revers a string and return nothing'
 *
 * @s: Address of character variable
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j, mid_length, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length += 1;
	}
	mid_length = length / 2;

	for (j = 0; j < mid_length; j++)
	{
		int index = length - (j + 1);
		int temporary;

		temporary = s[index];
		s[index] = s[j];
		s[j] = temporary;
	}
}
