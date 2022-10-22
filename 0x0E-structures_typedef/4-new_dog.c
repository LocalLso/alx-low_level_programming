#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new struct variable
 * @name: pointer to print
 * @age: to print
 * @owner: pointer to print
 *
 * Return: Struct variable
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	char *cname = name;
	char *cowner = owner;

	if (dog == NULL)
		return (NULL);
	dog->name = cname;
	dog->age = age;
	dog->owner = cowner;
	return (dog);
}
