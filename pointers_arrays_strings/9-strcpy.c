#include "main.h"
/**
 *char *_strcpy-  copies the string pointed to by src, including the terminating null byte.
 *@dest: pointer input
 *@src: pointer input
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	return (dest);
}
