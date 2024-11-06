#include "main.h"
/**
 * _puts_recursion - Entry of the program
 * _puts_recursion - Puts
 * @s: array to be checked
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

}
