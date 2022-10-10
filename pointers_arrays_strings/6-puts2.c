#include "main.h"
/**
 *puts2 -  prints every other character of a string,
 *@str:input pointer
 * Return: void.
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i <= len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
