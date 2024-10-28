#include "main.h"
/**
 * more_numbers - Entry of the program
 *
 * more_numbers - Print x10 times
 */
void more_numbers(void)
{
	int i, x;

	x = 1;

	while (x < 11)
{
	for (i = 0; i <= 14; i++)
	{
	if (i > 9)
{
	_putchar((i / 10) + '0');
}
	_putchar((i % 10) + '0');
}
	x++;
	_putchar('\n');
}
}


