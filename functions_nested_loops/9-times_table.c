#include "main.h"
/**
 *print_last_digit - returns the last digit of a number.
 *@i:variable input
 *Return: last digit.
 */
void times_table(void)
{
	int i, n;
	n = 9;

	for (i = 1; i <= 10; ++i)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
	return 0;
}
