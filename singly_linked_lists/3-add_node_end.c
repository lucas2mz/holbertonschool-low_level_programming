#include "lists.h"
/**
 * add_node_end - Add a node to the end on the list
 * @head: The header of the list
 * @str: String
 * Return: Aux
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, len = 0;
	list_t *aux, *temp;

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
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	aux->len = len;
	aux->next = NULL;

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
	}
	return (aux);
}
