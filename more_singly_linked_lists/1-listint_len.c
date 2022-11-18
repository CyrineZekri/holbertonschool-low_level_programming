#include "lists.h"
/**
 *listint_len - prints list elements
 *@h:head node.
 * Return: size.
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
