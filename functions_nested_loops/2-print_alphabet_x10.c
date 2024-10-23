#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point of the program
 *
 * This function prints the alphabet
 *
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	char alph;
	int i;

	i = 0;

	while (i <= 9)
{
	for (alph = 'a'; alph <= 'z'; alph++)
{
	_putchar(alph);
}
	_putchar('\n');
	i++;
}
}
