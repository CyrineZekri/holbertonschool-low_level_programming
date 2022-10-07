#include "main.h"
/**
 *print_line - verifies.
 * Return: return 1 if digit or 0 if not
 */
void print_line(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(" ");
		}
		_putchar(92);
	}
