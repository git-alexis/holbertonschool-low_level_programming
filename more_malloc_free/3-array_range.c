#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *
 * Description: 'This function creates an array of integers from an integer min
 * to an integer max. She returns the pointer of the array or Null if min > max
 * or if insufficient memory was available'
 *
 * @min: Integer variable
 * @max: Integer variable
 *
 * Return: Pointer or Null (Success or min > max/insufficient memory)
 */

int *array_range(int min, int max)
{
	int *int_array;
	int index, diff = max - min;

	if (min > max)
	{
		return (NULL);
	}

	int_array = malloc((diff + 1) * sizeof(int));
	if (int_array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < diff; index++)
	{
		int_array[index] = min + index;
	}
	int_array[index] = max;

	return (int_array);
}
