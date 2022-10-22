#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a structure
 * @d: pointer pointing to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");
	printf("Name:%s\n", d->name);
	/*if (d->age == NULL)
		printf("Age: (nil)");*/
	printf("Age:%.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	printf("Owner:%s\n", d->owner);
}
