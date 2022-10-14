#include "main.h"
/**
 * *_strbrk - searches a string for any of a set of bytes
 * @accept: the address of memory to print
 * @s: the size of the memory to print
 * Return: int.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
			if (*a++ == *s)
				return ((char *)s);
		++s;
	}

	return (0);
}
