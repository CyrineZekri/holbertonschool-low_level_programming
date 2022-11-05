#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct dog - new structure.
 * @name:input
 * @age:input
 * @owner:input
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/**
 * struct dog_h -new name for the type dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
