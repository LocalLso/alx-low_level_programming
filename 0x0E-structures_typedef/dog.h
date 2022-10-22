#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - structure containing properties of a dog
 * @name: char to print
 * @age: float to print
 * @owner: char to print
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* DOG_H_ */
