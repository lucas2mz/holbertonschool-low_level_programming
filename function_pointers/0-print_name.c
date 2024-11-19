#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Print name
 * @name: Name to print
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
