#include "main.h"
/**
 **array_range-a function that creates an array of integers
 * @min:input variable
 * @max:input var
 * Return: an int.
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i, j;

	if (min > max)
		return (NULL);
	j = 0;
	size = (max - min);
	array = malloc((size + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
