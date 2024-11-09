#include <stdio.h>
/**
 * main - Prints each argument passed to the program, one per line
 * @argc: The number of arguments
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
