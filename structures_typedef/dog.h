#include <stdlib.h>
#include <stdio.h>
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new structure.
 * @name:input
 * @age:input
 * @owner:input
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
