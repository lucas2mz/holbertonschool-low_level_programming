#include "main.h"
/**
 * times_table - Entry point of the program
 *
 * times_table - Prints the 9x9 multiplication table
 *
 */
void times_table(void)
{
	int i, j, resultado;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0'); /* imprime el primer 0 para la primera columna en cada fila */

		for (j = 1; j <= 9; j++) /* del 1 al 9 para multiplicar con i */
		{
			_putchar(',');
			_putchar(' ');

			resultado = i * j;

	if (resultado <= 9)
{
	_putchar(' '); /* imprime otro espacio para alinear */
	_putchar('0' + resultado); /* imprime el resultado de mutliplicaciones de una unidad */
}

	else /* entra si el resultado es mas grande q 9 (tabla ASCII) */
{
		_putchar((resultado / 10) + '0'); /* IMPRIME EL PRIMER DIGITO */
		_putchar((resultado % 10) + '0'); /* IMPRIME EL SEGUNDO DIGITO */
}
}
	_putchar('\n');
}
}

/* EJEMPLO PARA RESULTADO = 81
 * i y j = 9
 * resultado = 9 * 9 = 81
 * 81 / 10 = 8,1 (REDONDEA A 8)
 * 81 % 10 = 1
 * IMPRIME EN ORDEN Y FORMA EL 81*/
