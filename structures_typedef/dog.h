#include <stdlib.h>
#ifndef HEADERFILE_H
#define HEADERFILE_H
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
#endif
