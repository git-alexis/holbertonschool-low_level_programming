#include <stdio.h>
#include "main.h"

/**
 * _memcpy - 1337 coding
 *
 * Description: 'This function changes a certain character into a number :
 * A and a to 4, E and e to 3, O and o to 0, T and t to 7, L and l to 1 .
 * She return the encoded string'
 *
 * @dest: Pointer of character variable
 * @src: Caractere variable
 * @n: Unsigned integer variable
 *
 * Return: Encoded string (s)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
