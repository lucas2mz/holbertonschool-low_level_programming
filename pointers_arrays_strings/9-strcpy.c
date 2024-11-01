#include "main.h"
/**
 * _strcpy - Entry of the program
 * _strcpy - Copy a string
 * @dest: var to be checked
 * @src: var to be checked
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (src[len] != '\0')
{
	len++;
}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
