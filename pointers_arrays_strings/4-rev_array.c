#include "main.h"
/**
 * reverse_array - Entry of the program
 * reverse_array - Reverse an array
 * @a: var to be checked
 * @n: var to be checked
 */
void reverse_array(int *a, int n)
{
	int aux, i;

	aux = 0;

	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}
