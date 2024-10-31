#include "main.h"
/**
 * puts_half - Entry of the program
 *
 * puts_half - Prints the half of a string
 *
 * @str: Var to be checked
 */
void puts_half(char *str)
{
	int len, half_len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
{
	half_len = len / 2;
}
	else
{
	half_len = len / 2 + 1;
}
	for (i = half_len; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
