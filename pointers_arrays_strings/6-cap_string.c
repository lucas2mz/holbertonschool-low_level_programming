#include "main.h"
/**
 * cap_string - entry of the program
 * cap_string - asdjfghbdm
 * @str: string to be checked
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] >= 32 && str[i - 1] <= 34)
			{
				str[i] = str[i] - 32;
			}

			else if (str[i - 1] >= 9 && str[i - 1] <= 10)
			{
				str[i] = str[i] - 32;
			}

			else if (str[i - 1] == 44 || str[i - 1] == 46)
			{
				str[i] = str[i] - 32;
			}

			else if (str[i - 1] >= 40 && str[i - 1] <= 41)
			{
				str[i] = str[i] - 32;
			}

			else if (str[i - 1] >= 123 && str[i - 1] <= 125)
			{
				str[i] = str[i] - 32;
			}

			else if (str[i - 1] == 59)
			{
				str[i] = str[i] - 32;
			}
			else if (str[i - 1] == 2)
			{
				str[i] = str[i] - 32;
			}
		}
}
	return (str);
}
