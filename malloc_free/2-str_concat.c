#include "main.h"
/**
 **str_concat-concatenates two strings.
 *@s1:input var
 *@s2:input var
 *Return: a string
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int i, j, a, b;
	int increptr = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}
	string = malloc(sizeof(char) * (i + j + 1));
	if (string == NULL)
		return (NULL);
	for (a = 0; a < i; i++)
	{
		*(string + a) = *(s1 + a);
	}
	for (b = a; b < j + i; b++)
	{
		*(string + j) = *(s2 + increptr);
		increptr++;
	}
	return (string);
	free(string);
}
