#include "main.h"
/**
 * string_toupper - entry of the program
 * string_toupper - Change an lowercase to uppercase
 * @a: string to be checked
 * Return: string with uppercase
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
