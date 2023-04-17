#include "dog.h"
/**
 * *new_dog - function that creates a new dog.
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t*
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cp_name, *cp_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cp_name = malloc(strlen(name) + 1);
	if (cp_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(cp_name, name);
	cp_owner = malloc(strlen(owner) + 1);
	if (cp_owner == NULL)
	{
		free(new_dog);
		free(cp_name);
		return (NULL);
	}
	strcpy(cp_owner, owner);
	new_dog->name = cp_name;
	new_dog->age = age;
	new_dog->owner = cp_owner;
	return (new_dog);
}
