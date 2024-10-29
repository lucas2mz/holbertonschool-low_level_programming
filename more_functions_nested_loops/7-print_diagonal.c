#include "main.h"
/**
 * print_diagonal - entry of the proyect
 *
 * print_diagonal - prints diagonals
 *
 * @n: var to be chcked
 */
void print_diagonal(int n)
{
	int i, x;

	if (n > 0)
{
	for (i = 1; i <= n; i++)
{
	_putchar('\\');
	_putchar('\n');

	for (x = 1; x <= i; x++)
{
	if (i != n)
{
	_putchar(' ');
}
}
}
}
	else
{
	_putchar('\n');
}
}
