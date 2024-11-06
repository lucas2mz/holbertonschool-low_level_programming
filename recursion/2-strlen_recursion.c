#include "main.h"

int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s != '\0')
	{
		n++;
		_strlen_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
	return (n);
}
