#include "main.h"
/**
 * *str_concat-concatenates two strings.
 *@s1:input var
 *@s2:input var
 *Return: a string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int size1 = strlen(s1);
	unsigned int size2 = strlen(s2);
	unsigned int sum = size1 + size2;
	unsigned int i, j, increptr1, increptr2;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	str = malloc(sizeof(char) * (sum + 1));

	if (str == 0)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		*(str + i) = *(s1 + increptr1);
		increptr1++;
	}
	for (j = i; j < sum; j++)
	{

		*(str + j) = *(s2 + increptr2);
		increptr2++;
	}
	return (str);
	free(str);
}
