#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Entry of the program
 * @array: Array to be checked
 * @size: Size of array
 * @action: Pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
