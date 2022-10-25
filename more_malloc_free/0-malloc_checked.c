#include "main.h"
/**
 * void *malloc_checked-allocates memory
 * @b:input var
 * Return:void.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (b == 0)
	{
		exit(98);
	}
	return (p);
}
