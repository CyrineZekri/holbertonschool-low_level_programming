#include "lists.h"
/**
 *add_nodeint_end - adds a note at the end of  the list
 *@head:pointer to the head node.
 *@n: value of the newnode node
 * Return:address of the newnode element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *ptr;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head)
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}