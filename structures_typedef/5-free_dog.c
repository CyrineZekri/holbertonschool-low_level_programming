#include "dog.h"
/**
 * free_dog- frees a new dog.
 * @d:var input
 * Return:void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}
}
