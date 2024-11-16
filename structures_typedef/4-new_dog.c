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
	dog_t *aux = malloc(sizeof(dog_t));

	if (aux == NULL)
	{
		free(aux);
		return (NULL);
	}

	aux->name = name;
	aux->age = age;
	aux->owner = owner;

	return (aux);
}
