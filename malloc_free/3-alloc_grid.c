#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Entry of the program
 * @width: The width of the array
 * @height: The height of the array
 * Return: NULL when fails and array on success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array == NULL)
		{
			for (j = 0; j < i; i++)
			{
				free(array[j]);
			}
		free(array);
		return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
