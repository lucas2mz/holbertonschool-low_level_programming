#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Entry of the program
 * @array: The array to be checked
 * @size: The size of the array
 * @cmp: Compares elements of the array
 * Return: -1 if its fails or i on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
