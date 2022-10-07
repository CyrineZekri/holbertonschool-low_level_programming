#include "main.h"
/**
 *print_to_98 - prints to 98.
 *@n: -input var
 *Return: void
 */
void print_to_98(int n)
{
	int i;

	i = 0;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)

			printf("%d, ", i);
	}

	else if (n > 98)
	{
		for (i = n; i >= 98; i--)

			printf("%d\n", i);
	}
	else
		printf("%d\n", i);
}
