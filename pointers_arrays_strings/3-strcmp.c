#include "main.h"
/**
 * _strcmp - Entry of the program
 * _strcmp - Compares Strings
 * @s1: first string
 * @s2: second string
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i])
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
