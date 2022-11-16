#include "lists.h"
/**
 *free_list -frees a list.
 *@head:pointer to struct
 * Return:void.
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head->next);
	free(head);
}
