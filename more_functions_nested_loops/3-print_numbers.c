#include "main.h"
/**
 *print_numbers - prints.
 * Return: return 1 if digit or 0 if not
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
