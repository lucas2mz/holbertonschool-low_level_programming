#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_last_digit - Entry point of the program
 *
 * print_last_digit - return the last digit of an int
 *
 * @d: the character to be checked
 *
 * Return: ld
 *
 */
int print_last_digit(int d)
{
	int ld;

	ld = d % 10;

	char last = ld + '0';
	write(1, %last, 1);
	return (ld);
}
