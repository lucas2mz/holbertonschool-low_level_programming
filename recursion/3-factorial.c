#include "main.h"
/**
 * factorial - entry of the program
 * factorial - mfsdkvmsv
 * @n: var to be checked
 * Return: Factorial or 1 or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
