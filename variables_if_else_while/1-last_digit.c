#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * This function prints a random number and his last digit
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n = -98;
	last_digit = n % 10;
	printf("last_digit = %d\n", last_digit);

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	return (0);
}
