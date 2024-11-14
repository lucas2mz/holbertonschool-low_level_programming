#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *malloc_checked(unsigned int b)
{
	void *aux;

	aux = malloc(b);

	if (aux == NULL)
	{
		exit(98);
	}
	return (aux);
}
