#include "variadic_functions.h"
/**
 *print_strings -prints strings.
 *@separator:var.
 *@n:input var.
 * Return:void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list liste;
	unsigned int i;
	char *x;

	va_start(liste, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(liste, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
