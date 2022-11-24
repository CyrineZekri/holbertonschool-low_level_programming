#include "lists.h"
/**
 *get_dnodeint_at_index-gets.
 *@head: head of the list.
 *@index:index of the node.
 *  Return:void.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	while (i < index)
	{
		if (!head)
		{
			return (NULL);
		}
		head = head->next;
		i++;
	}
	return (head);
}
