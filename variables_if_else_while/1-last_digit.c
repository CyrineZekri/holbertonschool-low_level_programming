#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -prints.
 * Return:0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m < 5)
	{
		printf("%d  and is greater than 5\n", n);
	}
	else if (m == 0)
	{
		printf("%d and is 0\n", n);
	}
	else if (m < 6 && m != 0)
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
}
