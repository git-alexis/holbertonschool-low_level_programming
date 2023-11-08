#include <stdlib.h>

/**
 * str_concat - copies the contents of a string to a new string
 *
 * Description: 'This function copies the contents of a string str
 * to a new string dup_array.
 * She returns the pointer of the array or Null if str = 0 or
 * if insufficient memory was available'
 *
 * @s1: Pointer of char array
 * @s2: Pointer of char array
 *
 * Return: Pointer or Null (Success or str = 0/insufficient memory)
 */

char *str_concat(char *s1, char *s2)
{
	char *cont_array;
	int length_s1 = 0, length_s2 = 0;
	int index_s1, index_s2;

	if (s1 != NULL)
	{
		for (length_s1 = 0; s1[length_s1] != '\0';)
		{
			length_s1++;
		}
	}
	if (s2 != NULL)
	{
		for (length_s2 = 0; s2[length_s2] != '\0';)
		{
			length_s2++;
		}
	}

	cont_array = malloc(length_s1 * sizeof(char) + length_s2 * sizeof(char) + 1);
	if (cont_array == NULL)
	{
		return (NULL);
	}

	for (index_s1 = 0; index_s1 < length_s1; index_s1++)
	{
		cont_array[index_s1] = s1[index_s1];
	}
	for (index_s2 = 0; index_s2 < length_s2; index_s2++)
	{
		cont_array[index_s1 + index_s2] = s2[index_s2];
	}
	cont_array[index_s1 + index_s2] = '\0';

	return (cont_array);
}
