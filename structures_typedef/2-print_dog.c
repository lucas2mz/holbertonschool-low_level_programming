#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Entry of the program
 * @d: Structure of dog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0.0)
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
	printf("Owner: %s\n", d->owner);
	}
}