#include "main.h"
/**
 * print_triangle - entry of the proyect
 *
 * print_triangle - prints triangles
 *
 * @size: var to be chcked
 */
void print_triangle(int size)
{
	int x, i, h;

	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	for (h = 1; h <= size; h++)
	{
		x = size - h;
	for (i = 0; i < x; i++)
	{
	_putchar(' ');
	}

	for (i = 0; i < h; i++)
	{
	_putchar('#');
	}

	_putchar('\n');
}
}
}
