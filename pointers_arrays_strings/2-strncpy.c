#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copy strings with n char
 *
 * Description: 'This function copy n char of the string in src to dest
 * and return a dest copy string'
 *
 * @dest: Pointer of character variable
 * @src: Pointer of character variable
 * @n: Integer variable
 *
 * Return: Copy string (Dest)
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
