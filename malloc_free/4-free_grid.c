#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * Description: 'This function frees a 2 dimensional grid previously created
 * by alloc_grid function and returns nothing'
 *
 * @grid: Pointer integer array
 * @height: Integer variable
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL)
	{
		return;
	}

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
