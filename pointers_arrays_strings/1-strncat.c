#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	if (n > 0)
	{
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[len + i] = src[i];
		}
		dest[len + i] = '\0';
	}
	return (dest);
}
