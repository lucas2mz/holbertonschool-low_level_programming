#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Entry of the program
 * @s1: First string
 * @s2: Second string
 * Return: NULL in fail or aux on success
 */
char *str_concat(char *s1, char *s2)
{
	int len, len2, j, i;
	char *aux = "";

	len = 0;
	len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	aux = malloc((len + len + 1) * sizeof(char));
	if (aux == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		aux[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		aux[i] = s2[j];
		i++;
		j++;
	}
	aux[i] = '\0';
	return (aux);
}
