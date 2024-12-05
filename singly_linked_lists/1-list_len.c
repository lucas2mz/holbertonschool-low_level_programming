#include "lists.h"
/**
 * list_len - Counts Lists
 * @h: The header of the list
 * Return: The len of the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *aux = h;

	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
