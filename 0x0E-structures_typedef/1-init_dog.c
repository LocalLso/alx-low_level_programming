#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable
 * @d: point to struct dog to print
 * @name: point to print
 * @age: float to print
 * @owner: pointer to print
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
