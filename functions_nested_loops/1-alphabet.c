#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * This function prints the alphabet
 *
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
{
	_putchar(alph);
}
	_putchar('\n');	
}
