#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Concatenates two strings with n char
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

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != '\0' && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
