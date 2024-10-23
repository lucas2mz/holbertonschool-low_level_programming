#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point of the program
 *
 * _islower - checks if the character is a lowercase letter
 *
 * @c: the character to be checked
 *
 * Return: 1 if @c is a lowercase letter, 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else
	return (0);
}
