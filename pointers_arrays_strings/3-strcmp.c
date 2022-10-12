#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 *@s1: pointer
 *@s2: pointer
 *Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int len = strlen(s1);
	int len2 = strlen(s2);

	for (i = 0; i < len && i < len2; i++)
	{
		if (s1[i] != s2[i])

			return (s1[i] - s2[i]);
	}
	return (0);
}
