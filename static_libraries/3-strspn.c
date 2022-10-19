#include "main.h"
/**
 * *_strspn - locates a character in a string
 * @accept: the address of memory to print
 * @s: the size of the memory to print
 * Return: int.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    int count = 0;
    unsigned int len1 = strlen(accept) + 1;
    unsigned int len2 = strlen(s) + 1;

    for (i = 0; i <= len1; i++)
    {
        for (j = 0; j < len2; j++)
        {

            if (accept[i] == s[j])
            {
                count = count + 1;
                break;
            }

            else if (j == len2 && accept[i] != s[j])
            {
                break;
            }
            else
            {
                continue;
                j++;
            }
        }
    }
    return (count);
}
