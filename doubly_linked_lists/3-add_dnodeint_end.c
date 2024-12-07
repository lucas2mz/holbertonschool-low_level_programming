#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: Double pointer to the head of the list
 * @n: The number to put in the new node
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux, *temp;

	aux = malloc(sizeof(dlistint_t));

	if (aux == NULL)
		return (NULL);

	aux->n = n;
	aux->next = NULL;
	aux->prev = NULL;

	if (*head == NULL)
	{
		*head = aux;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = aux;
		aux->prev = temp;
	}
	return (aux);
}
