#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Entry of the program
 * @d: mdsak
 * @name:njdc
 * @age:masd
 * @owner:ajsdsa
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
