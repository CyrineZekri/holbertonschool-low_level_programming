#include "lists.h"
/**
 *pop_listint- pops an element
 *@head:pointer to the head node.
 * Return:an int.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;

    if (!head)
    {
        return (NULL);
    }
    while (i < index)
    {
        if (!head)
        {
            return (NULL);
        }
        head = head->next;
        i++;
    }
    return (head);
}
