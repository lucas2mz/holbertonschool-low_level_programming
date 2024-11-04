#include "main.h"
/**
 * leet - entry of the program
 * leet - leet
 * @str: sting
 * Return: str
 */
char *leet(char *str)
{
	int i, j;

	char aux_num[] = "43071";
	char aux_letras[] = "aAeEoOtTlL";



	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
		if (aux_letras[j] == str[i])
		{
			str[i] = aux_num[j / 2];
			break;
		}
		}
	}
	return (str);
}
