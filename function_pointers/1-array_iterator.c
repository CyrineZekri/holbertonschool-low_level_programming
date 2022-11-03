#include "function_pointers.h"

/**
 * array_iterator -prints an integer
 * @array:input var
 * @size:input var
 * @action: function pinter
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array != NULL) && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
