#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - Entry point of the program
 *
 * _abs - checks if the int iss - or +
 * and returns his abs
 *
 * @i: the character to be checked
 *
 * Return: i if @i is a +, -i if @i is -
 *
 */
int _abs(int i)
{
	if (i < 0)
{
	return (-i);
}
	else
{
	return (i);
}
}
