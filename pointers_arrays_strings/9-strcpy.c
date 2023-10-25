#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copy string to string
 *
 * Description: 'This function print nothing and return the copy string
 * of src in the string dest'
 *
 * @dest: Pointer of string dest
 * @src: Pointer of string src
 *
 * Return: Copy string (Dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, length = 1;

	for (i = 0; src[i] != '\0'; i++)
	{
		length += 1;
	}
	for (j = 0; j <= length; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
