#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings
 * @separator: String to be checked
 * @n: The amount of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list aux;
	char *str;

	va_start(aux, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(aux, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(aux);

	printf("\n");
}
