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

	for (i = 0; dest[i] != '\0' && i < n; i++)
	{

		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '0';
	}

	return (dest);
}
