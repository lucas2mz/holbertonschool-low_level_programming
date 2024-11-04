#include "main.h"
/**
 * _strspn - Entry of the program
 * _strspn - asjfnjkdf
 * @s: Array to be checked
 * @accept: var to be checked
 * Return: aux
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, aux;
	int ent;

	aux = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		ent = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ent = 1;
				break;
			}
		}

	if (ent)
	{
		aux++;
	}
	else
	{
		break;
	}
	}

	return (aux);
}
