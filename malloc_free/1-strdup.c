#include "main.h"
/**
 **_strdup-creates an identical string.
 *@str:input var
 *Return: a string
 */
char *_strdup(char *str)
{
	char *string;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
	}
	string = malloc(sizeof(char) * j + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		*(string + i) = *(str + i);
	}
	return (string);
	free(string);
}
