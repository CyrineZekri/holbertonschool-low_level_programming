#include "main.h"
/**
 * *_strstr - searches a string for any of a set of bytes
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 * Return: int.
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; haystack[i] == needle[0]; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }

        if (!needle[j])
        {
            return (haystack + i);
        }
        else
        {
            j = 0;
        }
    }
    return (0);
}