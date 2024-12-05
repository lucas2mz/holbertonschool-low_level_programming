#include "lists.h"
/**
 * add_node - Add node to the list
 * @head: The header of the list
 * @str: The string to add
 * Return: The address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *aux;

	if (str == NULL)
		return (NULL);

	aux = malloc(sizeof(list_t));

	if (aux == NULL)
		return (NULL);

	aux->str = strdup(str);

	if (aux->str == NULL)
	{
		free(aux);
		return (NULL);
	}

	aux->len = strlen(str);
	aux->next = *head;

	*head = aux;

	return (aux);
}
