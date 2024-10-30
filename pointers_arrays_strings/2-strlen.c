#include "main.h"
/**
 * _strlen - Entry of the program
 *
 * _strlen - Prints the numbers of characters
 *
 * @s: var to be checked
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
