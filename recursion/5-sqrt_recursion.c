#include "main.h"
/**
 * _sqr - Entry of the program
 * _sqr - Do the sqrt of x
 * @x: Var to be checked
 * @y: Var to be checked
 * Return: y or -1
 */
int _sqr(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (_sqr(x, y + 1));
}
/**
 * _sqrt_recursion - Entry of the program
 * _sqrt_recursion - Do the sqrt of n
 * @n: Var to be checked
 * Return: -1 or _sqr
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqr(n, 1));
}
