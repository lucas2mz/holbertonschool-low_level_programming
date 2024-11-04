#include "main.h"
/**
 * _atoi - entry of the program
 * _atoi - atoi
 * @s: string
 * Return: aux2 or 0
 */
int _atoi(char *s)
{
	int i, len, aux, aux2;

	len = 0;
	aux = 0;
	aux2 = 0;

	while (s[len] != '\0')
{
	len++;
}
	for (i = 0; i < len; i++)
	{
	if (s[i] >= '0' && s[i] <= '9')
	{
		aux = s[i];
		aux2 = aux - '0';
	}
	else
{
	return (0);
}
	while (i == ' ')
{
	i++;
}
	if (i > 0 && s[i - 1] == '-' && s[i] >= '0' && s[i] <= '9')
{
	aux2 = -(aux - '0');
}
	else
{
	aux2 = aux - '0';
}
	return (aux2);
}
	return (0);
}
