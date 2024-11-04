#include "main.h"
/**
 * _memset - Entry of the program
 * _memset - change the bytes
 * @s: array to be checked
 * @b:var to be checked
 * @n: var to be checked
 * Return: S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
