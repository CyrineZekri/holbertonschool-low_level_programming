#include "dog.h"

/**
 * *new_dog- creates a new dog.
 * @name:var input
 * @age:var input
 * @owner:var input
 * Return:new structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, len_owner;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	name_len = strlen(name);
	new_dog->name = malloc(sizeof(char) * name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);
	new_dog->age = age;
	len_owner = strlen(owner);
	new_dog->owner = malloc(sizeof(char) * len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strcpy(new_dog->owner, owner);
	return (new_dog);
	exit(0);
}
