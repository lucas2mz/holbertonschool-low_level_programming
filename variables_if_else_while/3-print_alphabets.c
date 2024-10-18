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
	putchar(alph);
	alph++;
}

	alph = 'A';

	while (alph <= 'Z')
{
	putchar(alph);
	alph++;
}
	putchar('\n');
	return (0);
}
