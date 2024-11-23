#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Print Numbers
 * @separator: String of numbers (and coma)
 * @n: The amount of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list aux;

	number = 0;

	va_start(aux, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		number = va_arg(aux, int);
		printf("%d", number);
		printf("%c", separator[0]);
	}
	printf("\n");
}
