#include "main.h"
/**
 * main - Entry point of the program
 *
 * This function prints _putchar
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";
	int i = 0;

	while (str[i] != '\0')
{
	_putchar(str[i]);
	i++;
}
	_putchar('\n');
	return (0);
}
