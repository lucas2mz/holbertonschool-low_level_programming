#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Entry of the program
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Array to be checked
 * @accept: Array to be checked
 * Return: S or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *a = "";

	while (*s)
	{
		a = accept;
		while (*a)
		{
		if (*s == *a)
		{
			return (s);
		}
		a++;
		}
		s++;
	}
	return (NULL);
}
