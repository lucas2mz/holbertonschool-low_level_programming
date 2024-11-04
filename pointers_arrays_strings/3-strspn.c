#include "main.h"
#include <stdio.h>
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
