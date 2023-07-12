#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * initialized to 0
 *
 * @width : number columns of the array
 * @height : number of rows
 * Return:  pointer to the array(success) NULL (failed)
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <=  0 || height <= 0)
		return (NULL);
	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}

