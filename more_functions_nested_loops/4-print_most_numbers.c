#include "main.h"
/**
 *print_most_numbers- verifies.
 * Return: return 1 if digit or 0 if not
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
