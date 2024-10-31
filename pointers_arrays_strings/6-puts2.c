#include "main.h"
/**
 * puts2 - Entry of the program
 * puts2 - Print a rev of a array
 * @str: Var to be checked
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
