#include "lists.h"
/**
 * sum_dlistint - Sum all the data in a doubly linked list.
 * @head: Pointer to the first node of the list.
 * Return: The sum of all the data in the list. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int resultado = 0;
	dlistint_t *aux = head;

	while (aux != NULL)
	{
		resultado = resultado + aux->n;
		aux = aux->next;
	}
	return (resultado);
}
