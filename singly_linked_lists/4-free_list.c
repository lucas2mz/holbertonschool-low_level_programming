#include "lists.h"
/**
 * free_list - Free the list
 * @head: Header of the list
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		
		if (aux->str)
			free(aux->str);

		free(aux);
	}
}
