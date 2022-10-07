#include "main.h"
/**
 * print_triangle- prints triangle
 * @size: input var
 *Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j, d;

	if (size = 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 1; i <= size; i++)
		{
			d = size - i;
			for (j = 1; j <= size; j++)
			{
				if (j <= d)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
