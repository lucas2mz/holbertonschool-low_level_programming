#include "main.h"
/**
 * print_line - Entry of the program
 *
 * print_line - Prints n lines
 *
 * @n: the var to be checked
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
{
	_putchar('\n');
	return; /*fdsjljsf*/
}
	for (i = 0; i < n; i++)
	{
	_putchar('\\');
	}
	_putchar('\n');
}
