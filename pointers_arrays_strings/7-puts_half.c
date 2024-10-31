#include "main.h"

void puts_half(char *str)
{
	int len, half_len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	half_len = len / 2;
	if (len % 2 == 0)
	{
	for (i = half_len; i < len; i++)
	{
		_putchar(str[i]);
	}
	}
	else
	{
		_putchar(str[half_len]);
	}
	_putchar('\n');
}
