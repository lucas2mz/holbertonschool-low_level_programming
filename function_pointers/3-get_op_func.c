#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - Entry of the program
 * @s: Operator
 * Return: (ops[i].f) or NULL
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int i;

	i = 0;

	while (ops[i].op && s && s[1] == '\0' && s[0] != '\0')
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
