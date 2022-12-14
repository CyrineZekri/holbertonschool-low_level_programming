#include "main.h"
/**
 * *string_nconcat-concatenates two strings
 * @s1:input variable
 * @s2:input var
 * @n:input var
 * Return: a string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sum;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
	{
		n = strlen(s2);
	}
	j = 0;
	sum = malloc((len1 + n + 1) * sizeof(char));
	if (sum == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		sum[i] = s1[i];
	}
	for (i = i; i < (len1 + n); i++)
	{
		sum[i] = s2[j];
		j++;
	}
	sum[i] = '\0';
	return (sum);
	free(sum);
}
