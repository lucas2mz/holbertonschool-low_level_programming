#include "main.h"
/**
 * _strlen_recursion - Entry of the program
 * _strlen_recursion - Prints the len of a string
 * @s: String to be checked
 * Return: _strlen_recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
