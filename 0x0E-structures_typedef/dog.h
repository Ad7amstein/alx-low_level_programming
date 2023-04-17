#ifndef DOG_H
#define DOG_H
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
#endif /* DOG_H */