#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, aux;

	aux = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				printf("Conto\n");
				aux++;
				break;
			}
			if (s[i] != accept[j])
			{
				printf("no entro\n");
				break;
			}
			if (accept[j] == '\0')
			{
				printf("nulo\n");
				break;
			}
		}
	}
	return (aux);
}
