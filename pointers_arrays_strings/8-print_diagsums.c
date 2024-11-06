#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry of the program
 * print_diagsums - Prints the sum of two matrix
 * @a: array to be checked
 * @size: var to be checked
 */
void print_diagsums(int *a, int size)
{
	int i, aux, aux2;

	aux = 0;
	aux2 = 0;

	for (i = 0; i < size; i++)
	{
		aux += *(a + i * size + i);
		aux2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, ", aux);
	printf("%d\n", aux2);
}
