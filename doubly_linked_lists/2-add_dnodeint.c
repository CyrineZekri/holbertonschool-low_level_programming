#include "lists.h"
/**
 *add_dnodeint-adds node at beginning.
 *@h: head of the list.
 * Return:address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newnode;

    newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (newnode == NULL)
    {
        return (NULL);
    }
    /**
    if (head == NULL)
    {
        newnode->n = n;
        newnode->prev = NULL;
        newnode->next = NULL;
        newnode = *head;
    }
*/
    while (*head)
    {
        newnode->n = n;
        newnode->prev = NULL;
        newnode->next = *head;
        *head = newnode;
        (*head)->prev = newnode;
    }
    return (*head);
}
