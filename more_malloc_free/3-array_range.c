#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - Entry of the program
 * @min: Var to be checked
 * @max: Var to be checked
 * Return: NULL when fails or aux in success
 */
int *array_range(int min, int max)
{
	int *aux;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	aux = malloc((max - min + 1) * sizeof(int));

	if (aux == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		aux[i - min] = i;
	}
	return (aux);
}
