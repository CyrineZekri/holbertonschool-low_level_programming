#include "variadic_functions.h"
/**
 *sum_them_all - returns sum of inputs
 *@n:input var
 * Return:int.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int tmp;
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(list, int);
		sum += tmp;
	}
	return (sum);
}
