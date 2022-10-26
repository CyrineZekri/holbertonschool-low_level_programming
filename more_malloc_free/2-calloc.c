#include "main.h"
/**
 * *_calloc-allocates memory
 * @nmemb:input var
 * @size:input var
 * Return:void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *sm;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	sm = (char *)malloc(nmemb * size);
	if (!sm)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		sm[i] = 0;
	}
	return (sm);
}
