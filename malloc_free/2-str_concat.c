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
	int i, j;
	int increptr = 0;
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	int sum = size1 + size2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	string = malloc(sizeof(char) * sum + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		*(string + i) = *(s1 + i);
	}
	for (j = i; j < sum; j++)
	{
		*(string + j) = *(s2 + increptr);
		increptr++;
	}
	return (string);
}
