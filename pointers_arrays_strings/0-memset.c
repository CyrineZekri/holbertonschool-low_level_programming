#include "main.h"
/**
 * cap_string- loweres uppercase letters.
 *@s: pointer input
 * Return: str *
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return (s);
}
