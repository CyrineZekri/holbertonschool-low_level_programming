#include "main.h"
/**
 * *_strncat - a function that concatenates two strings.
 *@dest: pointer
 *@src: pointer
 *@n: pointer
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(src);
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	if (n > len)
		n = len;
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
