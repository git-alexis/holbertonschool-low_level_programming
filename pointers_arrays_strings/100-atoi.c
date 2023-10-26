#include <stdio.h>
#include "main.h"

/**
 * _atoi - Print a string
 *
 * Description: 'This function print a string every two letters
 * followed by a new line and return nothing'
 *
 * @s: Address of character variable
 *
 * Return: Integer
 */

int _atoi(char *s)
{
	int length = 0;

	for (; (s[length] < '0' || s[length] > '9') && s[length] != '\0';)
	{
		length++;
	}
	if (length == 0 || s[length] == '\0')
	{
		return (0);
	}
	else
	{
		int index = 0;
		int sign = 1;
		int result = 0;

		for (; s[index] < '0' || s[index] > '9'; index++)
		{
			if (s[index] == '-')
			{
				sign = -1 * sign;
			}
		}
		for (; s[index] >= '0' && s[index] <= '9'; index++)
		{
			result = 10 * result + (s[index] - '0');
		}
		return(sign * result);
	}
}
