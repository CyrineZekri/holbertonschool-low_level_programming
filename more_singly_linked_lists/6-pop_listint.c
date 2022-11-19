#include "lists.h"
/**
 *pop_listint- pops an element
 *@head:pointer to the head node.
 * Return:int.
 */
int pop_listint(listint_t **head)
{

	listint_t *ptr;
	int x;

	if (*head == NULL)
		return (0);

	ptr = *head;
	x = ptr->n;
	*head = (*(head))->next;
	free(ptr);

	return (x);
}
