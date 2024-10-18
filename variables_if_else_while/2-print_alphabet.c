#include <stdio.h>
#include <string.h>

int main(void)
{
	int a;

	a = 97;
	char alph = a;

	while (a < 123)
{
	putchar(alph);
	a = a + 1;
	alph = alph + 1;
}
	return (0);
}
