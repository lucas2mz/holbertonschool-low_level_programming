#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Pointer to the pointer of the head of the list
 * @n: The number to store in the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux;

	aux = malloc(sizeof(dlistint_t));

	if (aux == NULL)
		return (NULL);

	aux->n = n;
	aux->prev = NULL;
	aux->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = aux;
	}
	*head = aux;

	return (aux);
}
