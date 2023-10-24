#include <stdio.h>
#include "main.h"

/**
 * _strlen - Length of string
 *
 * Description: 'This function calculate the length of string with
 * his address and return his length'
 *
 * @s: Address of character variable
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length += 1;
	}
	return (length);
}
