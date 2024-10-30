#include "main.h"
/**
 * swap_int - Entry of the program
 * swap_int - Swap integers
 * @a: var to be checked
 * @b: var to be checked
 */
void swap_int(int *a, int *b)
{
	int *x, *k;

	*x = *a;
	*b = *x;

	*k = *b;
	*b = *k;
}
