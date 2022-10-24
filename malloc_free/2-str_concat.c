#include "main.h"
/**
 * *str_concat-concatenates two strings.
 *@s1:input var
 *@s2:input var
 *Return: a string
 */
char *str_concat(char *s1, char *s2)
{
	char *str = NULL;
	unsigned int i, j, a = 0, b = 0;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (str == 0)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		*(str + i) = *(s1 + a);
		a++;
	}
	for (j = i; j < (strlen(s1) + strlen(s2)); j++)
	{

		*(str + j) = *(s2 + b);
		b++;
	}
	return (str);
	free(str);
}
