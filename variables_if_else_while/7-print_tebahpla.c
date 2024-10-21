#include <stdio.h>
#include <string.h>
/**
 * main - Entry point of the program
 *
 * This function prints the tebahpla
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
{
	putchar(alph);
	alph = alph - 1;
}
	putchar('\n');
	return (0);
}
