#include "main.h"
/**
 **_strdup-creates an identical string.
 *@str:input var
 *Return: a string
 */
char *_strdup(char *str)
{
	char *string;
	int size = strlen(str);
	int i;

	if (str == NULL)
		return (NULL);
	string = malloc(sizeof(char) * size + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		*(string + i) = *(str + i);
	}
	return (string);
}