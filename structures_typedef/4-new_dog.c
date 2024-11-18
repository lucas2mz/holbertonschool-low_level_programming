#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Entry of the program
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: NULL or aux
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, namelen, ownlen;
	dog_t *aux;

	namelen = 0;
	ownlen = 0;

	while (name[namelen] != '\0')
	{
		namelen++;
	}
	while (owner[ownlen] != '\0')
	{
		ownlen++;
	}

	aux = malloc(sizeof(dog_t));

	if (aux == NULL)
	{
		return (NULL);
	}
	aux->name = malloc(namelen + 1);
	if (aux->name == NULL)
	{
		free(aux);
		return (NULL);
	}
	for (i = 0; i <= namelen; i++)
		aux->name[i] = name[i];
	aux->owner = malloc(ownlen + 1);
	if (aux->owner == NULL)
	{
		free(aux->name);
		free(aux);
		return (NULL);
	}
	for (i = 0; i <= ownlen; i++)
		aux->owner[i] = owner[i];
	aux->age = age;
	return (aux);
}
