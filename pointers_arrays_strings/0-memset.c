#include <stdio.h>
#include "main.h"

/**
 * _memset - 1337 coding
 *
 * Description: 'This function changes a certain character into a number :
 * A and a to 4, E and e to 3, O and o to 0, T and t to 7, L and l to 1 .
 * She return the encoded string'
 *
 * @s: Pointer of character variable
 * @b: Caractere variable
 * @n: Unsigned integer variable
 *
 * Return: Encoded string (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
