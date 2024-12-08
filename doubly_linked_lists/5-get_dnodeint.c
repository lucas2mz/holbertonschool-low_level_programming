#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the node at a specific index in a list
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node to be return
 * Return: The node at the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		aux = aux->next;

		if (aux == NULL)
		{
			return (NULL);
		}
	}
	return (aux);
}
