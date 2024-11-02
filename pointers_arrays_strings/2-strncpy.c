#include "main.h"
/**
 * _strncpy - Entry of the program
 * _strncpy - Copy a string
 * @dest: var to be checked
 * @src: var to be checked
 * @n: var to be checked
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
