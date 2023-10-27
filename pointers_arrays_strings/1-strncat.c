#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings with n char
 *
 * Description: 'This function concatenes n char of the string in src to dest
 * and return a dest concatenated string'
 *
 * @dest: Pointer of character variable
 * @src: Pointer of character variable
 * @n: Integer variable
 *
 * Return: Add string (Dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
