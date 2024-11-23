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
	va_list aux;

	va_start(aux, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(aux, int));
	
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(aux);

	printf("\n");
}
