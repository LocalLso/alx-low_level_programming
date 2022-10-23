#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - structure containing properties of a dog
 * @name: char to print
 * @age: float to print
 * @owner: char to print
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* DOG_H_ */
