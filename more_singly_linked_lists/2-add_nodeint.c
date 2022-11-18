#include "lists.h"
/**
 *add_nodeint - adds a note in the list
 *@head:pointer to the head node.
 *@n: value of the new node
 * Return:address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{

		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (*head);
	}
}
