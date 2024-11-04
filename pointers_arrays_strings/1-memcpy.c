#include "main.h"
/**
 * _memcpy - Entry of the program
 * _memcpy - Copy n bytes of memory
 * @dest: Array to be checked
 * @src: Array to be checked
 * @n: Var to be checked
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
