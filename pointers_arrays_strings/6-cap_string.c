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
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			j = s[0];
			j -= 32;
			s[0] = j;
		}

		else if (s[i - 1] == ' ' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '\t' ||
			s[i - 1] == '\0' ||
			s[i - 1] == '\n')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				j = s[i + 1];
				j -= 32;
				s[i + 1] = j;
			}
		}
	}
	return (s);
}
