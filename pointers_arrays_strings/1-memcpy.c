#include "main.h"
/**
 * _memcpy - a function that concatenates two strings.
 *@dest: pointer
 *@src: pointer
 *@n: pointer
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}


