#include "main.h"

/**
 * print_diagonal - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
	}
}
