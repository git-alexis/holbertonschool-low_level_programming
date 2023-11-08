#include <stdlib.h>

/**
 * create_array - array of chars with c first value
 *
 * Description: 'This function creates an array of chars, and initializes it
 * with a specific char. She returns the pointer of the array or Null
 * if size = 0'
 *
 * @size: Positif integer variable
 * @c: One character
 *
 * Return: Pointer or Null (Success or size = 0)
 */

char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	char_array = malloc(size * sizeof(char));
	if (char_array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		char_array[index] = c;
	}
	return (char_array);
}
