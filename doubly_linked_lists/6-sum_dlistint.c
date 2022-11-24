#include "lists.h"
/**
 *sum_dlistint-sums list elements.
 *@head: head of the list.
 *  Return: int.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	ptr = head;
	while (ptr)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
