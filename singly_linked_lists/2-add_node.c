#include "lists.h"
/**
 *add_node - adds new node.
 *@head:pointer to struct
 *@str :string to be copied
 * Return: Address of the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
