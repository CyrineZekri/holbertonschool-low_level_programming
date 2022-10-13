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

	for (i = 0; i <= len; i++)
	{

		if (s[i] == ' ' ||
			s[i] == ';' ||
			s[i] == '.' ||
			s[i] == '!' ||
			s[i] == '?' ||
			s[i] == '(' ||
			s[i] == ')' ||
			s[i] == '{' ||
			s[i] == '\t' ||
			s[i] == '\0' ||
			s[i] == '\n')
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
