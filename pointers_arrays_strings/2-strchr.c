#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @c: the address of memory to print
 * @s: the size of the memory to print
 * Return: string.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int test = 0;
	int len = strlen(s);

	while (i <= len)
	{
		if (s[i] == c)
		{
			s = s + i;
			test = 1;
			break;
		}
		else
		{
			i++;
		}
	}
	if (test == 0)

		return (NULL);

	return (s);
}
