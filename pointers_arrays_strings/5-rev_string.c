#include "main.h"
/**
 * print_rev - Entry of the program
 * print_rev - Print a rev of a string
 * @s: Var to be checked
 */
void rev_string(char *s)
{
	int lenght, i;

	lenght = 0;

	while (s[lenght] != '\0')
{
	lenght++;
}
	for (i = lenght - 1; i >= 0; i--)
	{
	_putchar(s[i]);
}
	_putchar('\n');
}
