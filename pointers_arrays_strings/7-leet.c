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
	char aux_num[5], aux_letras[10]

	aux_num[5] = {'4', '3', '0', '7', '1'}
	aux_letras[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};



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
