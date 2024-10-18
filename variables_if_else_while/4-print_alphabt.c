#include <stdio.h>
#include <string.h>
/**
 * main - Entry point of the program
 *
 * This function prints the alphabet
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
{
	if (alph == 'e' || alph == 'q')
{
	alph = alph + 1;
}
	else
{
	putchar(alph);
	alph = alph + 1;
}
}
	putchar('\n');
	return (0);
}
