#include "main.h"
/**
 *_isupper - prints .
 * @c: - input var
 * Return: return 1 if upper or 0 if lower
 */
int _isupper(int c)
{
    if (c > 64 && c < 91)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}