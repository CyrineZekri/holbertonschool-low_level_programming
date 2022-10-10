#include "main.h"
/**
 *print_rev  - reverse string
 *@s:input pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s) - 1;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
