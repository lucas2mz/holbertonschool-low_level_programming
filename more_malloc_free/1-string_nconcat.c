#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Entry of the program
 * @s1: First string
 * @s2: Second string
 * @n: Bytes
 * Return: NULL in fail or aux on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, len2, j, i;
	char *aux;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len = 0; s1[len] != '\0'; len++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	if (n >= len2)
	{
		n = len2;
	}
	aux = malloc((len + n + 1) * sizeof(char));
	if (aux == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		aux[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		aux[i + j] = s2[j];
	}
	aux[i + j] = '\0';
	return (aux);
}
