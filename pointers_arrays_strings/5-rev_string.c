#include "main.h"
/**
 * print_rev - Entry of the program
 * print_rev - Print a rev of a string
 * @s: Var to be checked
 */
void rev_string(char *s)
{
	int lenght, i;
	char rev[100];

	lenght = 0;

	while (s[lenght] != '\0')
{
	lenght++;
}
	for (i = 0; i < lenght; i++)
	{
	rev[i] = s[lenght - 1 - i];
}
	rev[lenght] = '\0';
	for (i = 0; i < lenght; i++)
	{
	s[i] = rev[i];
	}
	s[lenght] = '\0';
	_putchar('\n');
}
