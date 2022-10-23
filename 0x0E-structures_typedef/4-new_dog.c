#include <stdlib.h>
#include "dog.h"

/**
 * len - retunrs len
 * @s: pointer to print
 * len - counts the lenght of the string
 *
 * Return: count
 */

int len(char *s)
{
	unsigned int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * new_dog - creates a new struct variable
 * @name: pointer to print
 * @age: to print
 * @owner: pointer to print
 *
 * Return: Struct variable created
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int cname_len, cowner_len, i;
	char *cname = name;
	char *cowner = owner;

	cname_len = len(name);
	cowner_len = len(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	cname = malloc(sizeof(char) * (cname_len + 1));
	if (cname == NULL)
	{
		free(cname);
		free(dog);
		return (NULL);
	}
	cowner = malloc(sizeof(char) * (cowner_len + 1));
	if (cowner == NULL)
	{
		free(cowner);
		free(cname);
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		cname[i] = name[i];
	}
	cname[i] = '\0';
	dog->name = cname;
	dog->age = age;
	for (i = 0; owner[i] != '\0'; i++)
	{
		cowner[i] = owner[i];
	}
	cowner[i] = '\0';
	dog->owner = cowner;
	return (dog);
}
