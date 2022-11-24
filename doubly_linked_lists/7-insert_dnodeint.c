#include "lists.h"
/**
 *insert_dnodeint_at_index-inserts node
 *@h: head of the list.
 *@idx:index.
 *@n:value to be added0
 *  Return: int.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newnode, *ptr;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (i < idx && *h == NULL)
	{
		return (NULL);
	}
	ptr = *h;
	while (i < (idx - 1))
	{
		if (!ptr)
		{
			return (NULL);
		}
		ptr = ptr->next;
		i++;
	}
	newnode->n = n;
	newnode->next = ptr->next;
	ptr->next = newnode;
	return (newnode);
}
