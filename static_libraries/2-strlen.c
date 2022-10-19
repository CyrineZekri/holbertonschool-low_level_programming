#include "main.h"
/**
 * _strlen - swaps pointers values.
 *@s: pointer
 * Return: void
 */
int _strlen(char *s)
{
    int i;
    int l = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        l = l + 1;
    }

    return (l);
}
