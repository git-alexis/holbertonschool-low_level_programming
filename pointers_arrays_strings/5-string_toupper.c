#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Lowercase to uppercase
 *
 * Description: 'This function changes the lowercase of a string to uppercase
 * return the uppercase string'
 *
 * @s: Pointer of character variable
 *
 * Return: String (s)
 */

char *string_toupper(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - 32;
		}
	}
	return (s);
}
