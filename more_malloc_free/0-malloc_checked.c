#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * Description: 'This function copies the contents of a string str
 * to a new string dup_array.
 * She returns the pointer of the array or Null if str = 0 or
 * if insufficient memory was available'
 *
 * @b: Usigned integer variable
 *
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
	int *allocates_memory;

	allocates_memory = malloc(b);
	if (allocates_memory == NULL)
	{
		exit(98);
	}

	return (allocates_memory);
}
