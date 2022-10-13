#include "main.h"
/**
 *string_toupper-  changes all lowercase letters of a string to uppercase.
 *@str: pointer input
 * Return: str *
 */

char *string_toupper(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i];
			j -= 32;
			str[i] = j;
		}
	}
	return (str);
}

