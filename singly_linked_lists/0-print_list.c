#include "lists.h"
/**
 *print_list- prints list string elements.
 *@h:list
 * Return: struct.
 */
size_t print_list(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			c++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;

			c++;
		}
	}
	return (c);
}
