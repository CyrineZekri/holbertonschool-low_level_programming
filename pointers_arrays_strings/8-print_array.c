#include "main.h"
/**
 *print_array- prints n elements of an array of integers.
 *@a: pointer input
 *@n: pointer input
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("%d, ", *a);
		a++;
	}
	putchar('\n');
}
