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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == ' ' ||
			s[i - 1] == '\t' ||
			s[i - 1] == '\n' ||
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
