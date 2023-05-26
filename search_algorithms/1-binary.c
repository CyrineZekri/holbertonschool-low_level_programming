#include "search_algos.h"
/**
 * binary_search- Entry point
 *@array: array
 *@size: array size
 *@value: value
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int x, i;
	int L = 0, R = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			if (i == R)
			{
				printf("%d\n", array[i]);
				continue;
			}
			printf("%d, ", array[i]);
		}
		x = (R + L) / 2;
		if (array[x] < value)
		{
			L = x + 1;
		}
		else if (array[x] > value)
		{
			R = x - 1;
		}
		else
		{
			return (x);
		}
	}
	return (-1);
}
