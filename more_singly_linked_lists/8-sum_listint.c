#include "lists.h"
/**
 *sum_listint- ums a list
 *@head:pointer to the head node.
 * Return:an int.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int i = 0;

	ptr = head;
	while (ptr != NULL)
	{
		i += ptr->n;
		ptr = ptr->next;
	}
	return (i);
}
