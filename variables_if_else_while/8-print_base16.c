#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints letters and numbers
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';
	int num = 0;

	while (num < 10)
{
	putchar(num + '0');
	num++;
}
	while (alph <= 'f')
{
	putchar(alph);
	alph++;
}
	putchar('\n');
	return (0);
}
