#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node in the index
 * @h: pointer to the head of the list
 * @idx: index
 * @n: numer for the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *aux, *temp;

	if (h == NULL)
		return (NULL);

	aux = malloc(sizeof(dlistint_t));

	if (aux == NULL)
		return (NULL);

	aux->n = n;

	if (idx == 0)
	{
		aux->next = *h;
		aux->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = aux;
		}
		*h = aux;
		return (aux);
	}
	temp = *h;

	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	aux->next = temp->next;
	aux->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = aux;
	temp->next = aux;

	return (aux);
}
