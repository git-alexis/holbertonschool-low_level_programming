#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies the contents of a string to a new string
 *
 * Description: 'This function copies the contents of a string str
 * to a new string dup_array.
 * She returns the pointer of the array or Null if str = 0 or
 * if insufficient memory was available'
 *
 * @str: Pointer of char array
 *
 * Return: Pointer or Null (Success or str = 0/insufficient memory)
 */

char *_strdup(char *str)
{
	char *dup_array;
	int index, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	dup_array = malloc((length + 1) * sizeof(char));

	if (dup_array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < length; index++)
	{
		dup_array[index] = str[index];
	}
	dup_array[index] = '\0';
	return (dup_array);
}
