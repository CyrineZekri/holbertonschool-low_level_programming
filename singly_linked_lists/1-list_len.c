#include "lists.h"
/**
 *list_len- prints list string elements.
 *@h:list
 * Return: struct.
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	while (h != NULL && h->next != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
