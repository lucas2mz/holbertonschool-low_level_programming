#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Entry of the program
 * @grid: Array to be checked
 * @height: The height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
