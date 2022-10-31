#include "dog.h"
/**
 * init_dog - initializes a structure
 *@d: pointer
 *@name:input var
 *@age:input var
 *@owner:input var
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
