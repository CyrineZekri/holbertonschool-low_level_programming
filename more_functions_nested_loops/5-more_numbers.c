#include "main.h"
/**
 *more_numbers - verifies.
 * Return: return 1 if digit or 0 if not
 */
void more_numbers(void)
{
	int i, j, x, y;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (i < 10)

				y = i;

			else
			{
				x = i / 10;
				y = i % 10;
				_putchar(x + '0');
			}
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
