#include "main.h"
/**
 * _puts - Entry of the program
 * _puts - Print strings
 * @str: Var to be checked
 */
void _puts(char *str)
{
	int l;

	l = 0;

	while (*str != '\0')
{
	_putchar(*str);
	str++;
	l++;
}
	_putchar('\n');
}
