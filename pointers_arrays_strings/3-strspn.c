#include <stdio.h>
#include "main.h"

/**
 * _strspn - 1337 coding
 *
 * Description: 'This function changes a certain character into a number :
 * A and a to 4, E and e to 3, O and o to 0, T and t to 7, L and l to 1 .
 * She return the encoded string'
 *
 * @s: Pointer of character variable
 * @accept: Caractere variable
 *
 * Return: Encoded string (s)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'); i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count += 1;
			}
		}
	}
	return (count);
}
