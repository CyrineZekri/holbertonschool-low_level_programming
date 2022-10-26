#include "main.h"
/**
 **array_range-a function that creates an array of integers
 * @min:input variable
 * @max:input var
 * Return: an int.
 */
int *array_range(int min, int max)
{
	int *res;
	int diff, i, j;

	if (min > max)
		return (NULL);
	j = 0;
	diff = max - min;
	res = malloc((diff + 1) * sizeof(int));
	if (res == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		res[j] = i;
		j++;
	}
	return (res);
}
