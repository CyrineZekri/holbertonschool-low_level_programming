#include "dog.h"

/**
 * print_dog - prints structure.
 *@d:pointer to struct
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	(d->name) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	(d->owner) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
