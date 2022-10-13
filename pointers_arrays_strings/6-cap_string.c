#include "main.h"
/**
 * cap_string- loweres uppercase letters.
 *@s: pointer input
 * Return: str *
 */
char *cap_string(char *s)
{
	int i, j;
	int len = strlen(s);

	for (i = 1; i <= len; i++)
	{
		if (s[i] == '\n' ||
			s[i] == ';' ||
			s[i] == '.' ||
			s[i] == '!' ||
			s[i] == '?' ||
			s[i] == '(' ||
			s[i] == ')' ||
			s[i] == '{' ||
			s[i] == '\t' ||
			s[i] == '\0' ||
			s[i] == ' ')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				j = s[i];
				j -= 32;
				s[i] = j;
			}
		}
	}
	return (s);
}
