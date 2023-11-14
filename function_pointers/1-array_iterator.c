#include <stdlib.h>

/**
 * array_iterator - Print each element of an array
 *
 * Description: 'This function displays by executing a function given as
 * a parameter on each element of an array. She return nothing'
 *
 * @array: Integer array
 * @size: size_t variable
 * @action: action funtion pointer
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array != NULL && action != NULL)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
