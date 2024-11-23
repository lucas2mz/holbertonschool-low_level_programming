#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Sum all the arguments
 * @n: Amount of arguments
 * Return: 0 or resultado
 */
int sum_them_all(const unsigned int n, ...)
{
	int resultado;
	unsigned int i;
	va_list aux;

	resultado = 0;

	va_start(aux, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		resultado += va_arg(aux, int);
	}

	va_end(aux);

	return (resultado);
}
