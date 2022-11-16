#include "lists.h"
/**
 *add_node_end - adds new node.
 *@head:pointer to struct
 *@str :string to be copied
 * Return: Address of the new node.
 */
void free_list(list_t *head)
{
    free(head->str);
    free(head->next);
    free(head);
}