#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry of the program
 * print_array - Prints the content of array
 * @a: var to be checked
 * @n: var to be checked
 */
void print_array(int *a, int n)
{
	int i, l;

	l = 0;

	for (i = 0; i < n; i++)
	{
	l = a[i];
	if (i < n - 1)
	{
	printf("%d, ", l);
	}
	else
{
	printf("%d", l);
}
}
	printf("\n");
}
