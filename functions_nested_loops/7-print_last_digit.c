#include "main.h"
/**
 *print_last_digit - returns the last digit of a number.
 *@i:variable input
 *Return: last digit.
 */
int print_last_digit(int i)
{
	int j = (i % 10);

	if (j < 0)
		j = -j;
	_putchar('0' + j);
	return (j);
}
