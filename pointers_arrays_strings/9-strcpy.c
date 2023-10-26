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
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
