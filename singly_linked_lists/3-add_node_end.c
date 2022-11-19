#include "lists.h"
/**
 *add_node_end - adds new node.
 *@head:pointer to struct
 *@str :string to be copied
 * Return: Address of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t **ptr;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	ptr = head;

	while (*ptr)
	{
		ptr = &(*ptr)->next;
	}
	*ptr = newnode;
	return (newnode);
}
