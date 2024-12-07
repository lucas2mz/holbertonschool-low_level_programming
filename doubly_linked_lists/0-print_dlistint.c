#include "lists.h"
/**
 * print_dlistint - Prints the list
 * @h: The header of the list
 * Return: The amount of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux = h;
	size_t i = 0;

	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		i++;
	}
	return (i);
}
