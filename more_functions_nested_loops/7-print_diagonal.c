#include "main.h"
#include <stdio.h>
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
