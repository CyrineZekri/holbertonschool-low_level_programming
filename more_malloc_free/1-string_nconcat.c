#include "main.h"
/**
 * *string_nconcat-concatenates two strings
 * @s1:input var
 * @s2:input var
 * @n:input var
 * Return:string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sum;
	unsigned int len1, len2, i, j;

	len1 = strlen(s1);
	len2 = strlen(s2);
	j = 0;
	if (n > len2)
	{
		n = len2;
	}
	sum = malloc((len1 + n + 1) * sizeof(char));
	if (sum == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
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
