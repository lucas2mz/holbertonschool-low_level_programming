#include "main.h"
/**
 * print_line - Entry of the program
 *
 * print_line - Prints n lines
 *
 * @n: the var to be checked
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
{
	_putchar('\n');
}
	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
