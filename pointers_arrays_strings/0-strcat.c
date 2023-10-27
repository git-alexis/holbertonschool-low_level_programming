#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * Description: 'This function concatenes the string in src to dest
 * and return a dest concatenated string'
 *
 * @dest: Pointer of character variable
 * @src: Pointer of character variable
 *
 * Return: Add string (Dest)
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
