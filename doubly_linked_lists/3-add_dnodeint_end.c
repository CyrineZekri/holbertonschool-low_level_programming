#include "lists.h"
/**
 *add_dnodeint-adds node at beginning.
 *@head: head of the list.
 *@n:int.
 *  Return:address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newnode, *ptr;

    newnode = malloc(sizeof(dlistint_t));
    if (newnode == NULL)
    {
        return (NULL);
    }
    newnode->next = NULL;
    newnode->n = n;
    if (head == NULL)
    {
        newnode->prev = NULL;
        *head = newnode;
        return (newnode);
    }
    ptr = *head;
    while (ptr)
    {
        if (ptr->next == NULL)
        {
            ptr->next = newnode;
            newnode->prev = ptr;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    return (ptr);
}