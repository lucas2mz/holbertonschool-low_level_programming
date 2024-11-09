#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers passed as arguments
 * @argc: The number of arguments
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
