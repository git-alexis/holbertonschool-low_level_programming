#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compares two integers
 *
 * Description: 'This function print nothing and return the difference
 * of two integers as an integer and always 0 to indicate successful
 * operation'
 *
 * @s1: Pointer of string
 * @s2: Pointer of string
 *
 * Return: Difference of integers (Dest) and Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
