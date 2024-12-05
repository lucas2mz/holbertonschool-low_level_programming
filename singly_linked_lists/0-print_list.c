#include "lists.h"
/**
 * print_list - Print lists
 * @h: The header of the list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *aux = h;

	while (aux != NULL)
	{
		if (aux->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", aux->len, aux->str);
		}
			aux = aux->next;
			i++;
	}
	return (i);
}
