#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: input var
 * @size: input var
 * @cmp: input var
 * Return: int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
