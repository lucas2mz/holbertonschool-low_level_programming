#include "main.h"
/**
 * print_square - entry of the proyect
 *
 * print_square - prints square
 *
 * @size: var to be chcked
 */
void print_square(int size)
{
	int x, j;

	if (size > 0)
{
	for (x = 1; x <= size; x++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
}
}
	else
{
	_putchar('\n');
}
}
