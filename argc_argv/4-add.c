#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
		}
		sum += atoi(argv[i]);
	}
		if (argc > 1)
		{
		printf("%d\n", sum);
		} 
		else
		{
		printf("0\n");
		}
	return (0);
}
