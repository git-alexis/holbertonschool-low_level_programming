#include <stdlib.h>

/**
 * _calloc - length array
 *
 * Description: 'This function calculates the length of a char array
 * and returns it'
 *
 * @nmemb: Unsigned integer variable
 * @size: Unsigned integer variable
 *
 * Return: Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	int total_size, index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	pointer = malloc(total_size);
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < total_size; index++)
	{
		pointer[index] = 0;
	}
	pointer[index] = 0;

	return (pointer);
}
