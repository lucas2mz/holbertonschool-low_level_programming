#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Entry of the program
 * @size: The size of the array
 * @c: Specific char to refil
 * Return: NULL if it fails or aux in success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *aux = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (aux == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		aux[i] = c;
	}

	return (aux);


}
