#include "main.h"
/**
 * *_strncpy - a function that copies a strings in another.
 *@dest: pointer
 *@src: pointer
 *@n: pointer
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len = strlen(src);

	for (i = 0; dest[i] != '\0'; i++)
		;
	if (n > len)
		n = len;
	for (i = 0; i <= n; i++)

	{
		dest[i] = src[i];
	}
	return (dest);
}
