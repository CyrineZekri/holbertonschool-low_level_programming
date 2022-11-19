#include "lists.h"
/**
 *delete_nodeint_at_index- deletes node at index
 *@head:pointer to the head node.
 *@index:index
 * Return: an int.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;
	unsigned int i = 1, x = 0;
	int check = 0;

	if ((head == NULL || *head == NULL) || index < x)
		return (-1);
	prev = *head;
	ptr = (*(head))->next;
	if (index == 0)
	{
		*head = (*(head))->next;
		free(prev);
		check = 1;
		return (1);
	}
	else if (index == 1)
	{
		prev->next = ptr->next;
		free(ptr);
		check = 1;
		return (1);
	}
	while (ptr)
	{
		if (i == index)
		{
			prev->next = ptr->next;
			free(ptr);
			check = 1;
			break;
		}
		ptr = ptr->next;
		prev = prev->next;
		i++;
	}
	if (check == 1)
		return (1);
	else
		return (-1);
}
