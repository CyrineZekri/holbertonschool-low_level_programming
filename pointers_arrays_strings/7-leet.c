#include "main.h"
/**
 * leet- a function that encodes a string into 1337.
 *@s: pointer input
 * Return: str *
 */
char *leet(char *s)
{
	int i, j;
	char t[5] = {'a', 'e', 'o', 't', 'l'},
		 T[5] = {'A', 'E', 'O', 'T', 'L'},
		 n[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == t[j]) || (s[i] == T[j]))
				s[i] = n[j];
		}
	}
	return (s);
}
