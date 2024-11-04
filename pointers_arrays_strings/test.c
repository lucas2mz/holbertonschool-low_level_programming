#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, aux, j;

	aux = 0;
	i = 0;
	j = 0;

	while (s[i] != '\0' && accept[j] != '\0')
	{
		if (s[i] == accept[j])
		{
			aux++;
			break;
		}
	}
}
