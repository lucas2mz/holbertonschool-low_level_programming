#include "main.h"
/**
 * print_rev - Entry of the program
 * print_rev - Print a rev of a string
 * @s: Var to be checked
 */
void print_rev(char *s)
{
	int lenght, i;
	char *c = s;

	lenght = 0;

	while (*s != '\0')
{
	lenght++;
	s++;
}
	for (i = lenght - 1; i >= 0; i--)
	{
	_putchar(*(c + i));
}
	_putchar('\n');
}
