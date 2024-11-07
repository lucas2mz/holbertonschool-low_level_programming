#include "main.h"
/**
 * _pow_recursion - Entry of the program
 * _pow_recursion - ndsjklsd
 * @x: var to be checked
 * @y: var to be checked
 * Return: 1 or -1 or the function
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
