#include "main.h"
/**
 * _puts_recursion -prints a string with recursion.
 *@s: input variable
 *Return: void.
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
