#include "main.h"
/**
 * times_table - Entry point of the program
 *
 * times_table - return the tables
 *
 */
void times_table(void)
{
	int i, j, resultado;

	for (i = 0; i < 10; i++)
	{
		_putchar('0'); /* primera linea de 0 */

		for (j = 0; j < 10; j++) /* imprime las , y los espacios mientras sube j*/
		{
			_putchar(',');
			_putchar(' ');

			resultado = i * j;

	if (resultado <= 9)
{
	_putchar('0' + resultado); /* imprime las multiplicaciones entre 
					numeros <= a 9 */
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
