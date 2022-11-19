#include "lists.h"
/**
 *pop_listint- pops an element
 *@head:pointer to the head node.
 * Return:an int.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *ptr;
    unsigned int i;
    ptr = head;

    while (ptr)
    {
        if (i == index)
        {

            break;
        }

        ptr = ptr->next;
        i++;
    }
    return (ptr);
}
