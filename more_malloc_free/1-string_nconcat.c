#include <stdlib.h>

/**
 * _strlen - length array
 *
 * Description: 'This function calculates the length of a char array
 * and returns it'
 *
 * @array: Char array
 *
 * Return: length array
 */

unsigned int _strlen(char *array)
{
	unsigned int length = 0;

	for (; array[length] != '\0';)
	{
		length++;
	}

	return (length);
}

/**
 * string_nconcat - allocates memory
 *
 * Description: 'This function copies the contents of a string str
 * to a new string dup_array.
 * She returns the pointer of the array or Null if str = 0 or
 * if insufficient memory was available'
 *
 * @s1: Pointer of char array
 * @s2: Pointer of char array
 * @n: Usigned integer variable
 *
 * Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ncont_array;
	int length_s1, index_s1;
	unsigned int index_s2;

	if (s1 != NULL)
	{
		length_s1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		if (n > _strlen(s2))
		{
			n = _strlen(s2);
		}
	}
	else
	{
		n = 0;
	}

	ncont_array = malloc(length_s1 * sizeof(char) + n * sizeof(char) + 1);
	if (ncont_array == NULL)
	{
		return (NULL);
	}

	for (index_s1 = 0; index_s1 < length_s1; index_s1++)
	{
		ncont_array[index_s1] = s1[index_s1];
	}
	for (index_s2 = 0; index_s2 < n; index_s2++)
	{
		ncont_array[index_s1 + index_s2] = s2[index_s2];
	}
	ncont_array[index_s1 + index_s2] = '\0';

	return (ncont_array);
}
