#include <stdio.h>
#include "main.h"

/**
 * cap_string - First letter lowercase to uppercase
 *
 * Description: 'This function changes the first lowercase letter
 * of words of a string to uppercase return the uppercase string'
 *
 * @s: Pointer of character variable
 *
 * Return: String (s)
 */

char *cap_string(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			if (s[index - 1] < 'A' || s[index - 1] > 'Z')
			{
				if (s[index - 1] < 'a' || s[index - 1] > 'z')
				{
					s[index] = s[index] - 32;
				}
			}
		}
	}
	return (s);
}
