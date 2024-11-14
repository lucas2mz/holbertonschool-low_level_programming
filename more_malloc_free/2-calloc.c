#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Entry of the program
 * @nmemb: Var to be checked
 * @size: Var to be checked
 * Return: Null or aux
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *aux;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	aux = malloc(nmemb * size);

	if (aux == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		((unsigned char *)aux)[i] = 0;
	}
	return (aux);
}
