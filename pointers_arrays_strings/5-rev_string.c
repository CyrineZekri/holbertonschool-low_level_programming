#include "main.h"
/**
 *rev_string - reverse s
 *@s:input pointer
 * Return: void.
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s) - 1;
	char tmp;

	for (i = 0; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
		printf("%s", s);
	}
	printf("\n");
}
