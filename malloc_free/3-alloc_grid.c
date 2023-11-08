#include <stdlib.h>

/**
 * alloc_grid - copies the contents of a string to a new string
 *
 * Description: 'This function copies the contents of a string str
 * to a new string dup_array.
 * She returns the pointer of the array or Null if str = 0 or
 * if insufficient memory was available'
 *
 * @width: Integer variable
 * @height: Integer variable
 *
 * Return: Pointer or Null (Success or str = 0/insufficient memory)
 */

int **alloc_grid(int width, int height)
{
	int **double_array;
	int ligne, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	double_array = malloc(height * sizeof(int));
	if (double_array == NULL)
	{
		return (NULL);
	}
	for (ligne = 0; ligne < height; ligne++)
	{
		double_array[ligne] = malloc(width * sizeof(int));
		if (double_array[ligne] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			double_array[i][j] = 0;
		}
	}
	return (double_array);
}

