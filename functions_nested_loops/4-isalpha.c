#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point of the program
 *
 * _isalpha - checks if the character is a letter
 *
 * @c: the character to be checked
 *
 * Return: 1 if @c is a letter, lowercase or upper, 0 otherwise
 *
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else if (c >= 65 && c <= 90)
{
	return (1);
}
	else
{
	return (0);
}
}
