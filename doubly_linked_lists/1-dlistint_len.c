#include "lists.h"
/**
 *dlistint_len-calculates length of list.
 *@h: head of the list.
 * Return:count.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current;

	current = h;
	while (current != NULL)
	{

		count++;
		current = current->next;
	}
	return (count);
}
