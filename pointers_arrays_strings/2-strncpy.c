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

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (i = 0; src[i] && i <= n; i++)

	{
		dest[i] = src[i];
	}
	return (dest);
}
