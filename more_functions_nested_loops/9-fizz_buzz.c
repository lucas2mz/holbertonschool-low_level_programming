#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz_test - entry of the proyect
 *
 * fizz_buzz_test - prints fizzbuzz
 *
 * @n: var to be chcked
 */
void fizz_buzz_test(int n)
{
	int i;

	for (i = n; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
{
	printf("FizzBuzz");
}
	else if (i % 3 == 0)
{
	printf("Fizz");
}
	else if (i % 5 == 0)
{
	printf("Buzz");
}
	else
{
	printf("%d", i);
}
	if (i < 100)
{
	printf(" ");
}
}
	printf("\n");
}

int main(void)
{
	int k;
	k = 1;
	fizz_buzz_test(k);
	return (0);
}
