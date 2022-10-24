#include "main.h"
/**
 **_strdup-creates an identical string.
 *@str:input var
 *Return: a string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int size1 = strlen(s1);
	unsigned int size2 = strlen(s2);
	unsigned int sum = size1 + size2;
	unsigned int i, j;
	int increptr;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	str = malloc(sizeof(char) * sum + 1);

	if (str == 0)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		*(str + i) = *(s1 + j);
		j++;
	}
	for (j = i; j < sum + 1; j++)
	{

		*(str + j) = *(s2 + increptr);
		increptr++;
	}
	return (str);
}
