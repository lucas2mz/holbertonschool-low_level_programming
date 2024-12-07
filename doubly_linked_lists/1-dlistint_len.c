#include "lists.h"
/**
 * dlistint_len - Prints the len of the list
 * @h: The header of the list
 * Return: The amount of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *aux = h;

	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
