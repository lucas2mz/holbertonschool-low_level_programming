#include "main.h"

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
