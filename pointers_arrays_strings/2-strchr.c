#include "main.h"
#include <stdio.h>
/**
 * _strchr - Entry of the program
 * _strchr - asjfnjkdf
 * @s: Array to be checked
 * @c: var to be checked
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == '\0')
	{
	return (NULL);
	}
	return (NULL);
}
