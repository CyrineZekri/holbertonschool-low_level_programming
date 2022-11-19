#include "lists.h"
/**
 *insert_nodeint_at_index- inserts node at index
 *@head:pointer to the head node.
 *@idx:index
 *@n:value
 * Return:struct.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *ptr, *newnode;
	unsigned int i = 0;

	if (i < idx && *head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	ptr = *head;

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
