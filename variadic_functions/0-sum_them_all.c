#include "variadic_functions.h"
/**
 *sum_them_all - returns sum of inputs
 *@n:input var
 * Return:int.
 */
int sum_them_all(const unsigned int n, ...)
{
    int sum = 0;
    int x;
    unsigned int i;

    if (n == 0)
        return (0);
    va_list args;
    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        x = va_arg(args, int);
        sum += x;
    }
    return (sum);
}
