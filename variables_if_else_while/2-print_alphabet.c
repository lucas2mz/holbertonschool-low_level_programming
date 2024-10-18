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
	alph = alph + 1;
}
	putchar('\n');
	return (0);
}
