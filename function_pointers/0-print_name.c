#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a function name.
 * @name: name of the person
 *@f:function pointer
 * Return:void.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((f != NULL) && (name != NULL))
	{
		f(name);
	}
}
