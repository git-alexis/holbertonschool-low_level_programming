#include <stdio.h>
#include "main.h"

/**
 * leet - 1337 coding
 *
 * Description: 'This function changes a certain character into a number :
 * A and a to 4, E and e to 3, O and o to 0, T and t to 7, L and l to 1 .
 * She return the encoded string'
 *
 * @s: Pointer of character variable
 *
 * Return: Encoded string (s)
 */

char *leet(char *s)
{
	int i, j;
	char *conversion = "A4E3O0T7L1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; conversion[j] != '\0'; j += 2)
		{
			if (s[i] == conversion[j] || s[i] == conversion[j] + 32)
			{
				s[i] = conversion[j + 1];
			}
		}
	}
	return (s);
}
