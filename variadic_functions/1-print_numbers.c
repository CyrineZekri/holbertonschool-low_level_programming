#include "variadic_functions.h"
/**
 *print_numbers -prints numbers.
 *@separator:var.
 *@n:input var.
 * Return:void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list liste;
	unsigned int i = 0;
	int x;

	va_start(liste, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(liste, int);
		printf("%d", x);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
