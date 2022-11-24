#include "lists.h"
/**
 *add_dnodeint-adds node at beginning.
 *@head: head of the list.
 *@n:int.
 *  Return:address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *ptr;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	ptr = *head;

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = (*head);
	if (ptr != NULL)
	{

		(*(head))->prev = newnode;
	}
	*head = newnode;

	return (*head);
}
