#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints to 98
 * @n: the first number
 *
 *
 * This function takes a random number and
 * goes to 98
 *
 */
void print_to_98(int n)
{
	int f;

	if (n <= 98)
{
	for (f = n; f <= 98; f++)
	{
	printf("%d", f);

	if (f < 98)
{
	printf(", ");
}
}
}
	else
{
	for (f = n; f >= 98; f--)
	{
	printf("%d", f);

	if (f > 98)
{
	printf(", ");
}
}
}
	printf("\n");

}
