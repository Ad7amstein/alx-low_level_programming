#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - new type called dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dog type has name, and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
