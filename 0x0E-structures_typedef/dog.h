#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - new type called dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dog type has a name, age, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif /* DOG_H */
