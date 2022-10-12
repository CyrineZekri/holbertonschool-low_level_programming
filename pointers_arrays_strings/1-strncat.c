#include "main.h"
/**
 * *_strcat - a function that concatenates two strings.
 *@dest: pointer
 *@src: pointer
 *@n: pointer
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{

    int i, j;
    int len = strlen(src);

    for (i = 0; dest[i] != '\0'; i++)
        ;
    if (n <= len)
    {
        for (j = 0; j < n; j++)
        {
            dest[i + j] = src[j];
        }
    }

    return (dest);
}
