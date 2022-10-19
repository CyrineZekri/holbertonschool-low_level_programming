#include "main.h"
/**
 *_isdigit - verifies.
 * @c: - input var
 * Return: return 1 if digit or 0 if not
 */
int _isdigit(int c)
{
    if (c >= 48 && c <= 57)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}