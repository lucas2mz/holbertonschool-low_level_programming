#include "main.h"
#include <stddef.h>
/**
 * _strstr - Entry of the program
 * _strstr - locates a substring.
 * @haystack: 1st string
 * @needle: 2nd string
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *aux = "";
	char *aux2 = "";

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		aux = needle;
		aux2 = haystack;

		while (*aux2 != '\0' && *aux != '\0' && *aux2 == *aux)
		{
		aux2++;
		aux++;
		}
		if (*aux == '\0')
		{
		return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
