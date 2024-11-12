#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Entry of the program
 * @str: string to duplicate
 * Return: NULL if it fails or aux in success
 */
char *_strdup(char *str)
{
	int i, size;
	char *aux = "";

	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	aux = malloc(size + 1 * sizeof(char));

	if (aux == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		aux[i] = str[i];
	}
	aux[size] = '\0';

	return (aux);
}
