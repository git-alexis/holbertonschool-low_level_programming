#include <stdlib.h>

/**
 * int_index - Searches an integer
 *
 * Description: 'This function searches for an integer by executing a function
 * given as a parameter on each element of an array. She return his first index
 * or -1'
 *
 * @array: Integer array
 * @size: Size array
 * @cmp: cmp function pointer
 *
 * Return: Index or -1 (found or size <= 0/array or cmp = Null/not found)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if ((size > 0) && (array != NULL) && (cmp != NULL))
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
			{
				return (index);
			}
		}
	}
	return (-1);
}
