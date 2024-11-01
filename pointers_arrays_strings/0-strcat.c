#include "main.h"
/**
 * _strcat - entry of the program
 * _strcat - kfd
 * @dest:var to be checked
 * @src:var to be checked
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	i = 0;

	while (dest[len] != '\0')
{
	len++;
}

	while (src[i] != '\0')
{
	dest[len + i] = src[i];
	i++;
}

	dest[len + i] = '\0';

	return (dest);
}
