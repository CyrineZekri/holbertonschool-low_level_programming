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
		printf("Last digit of %d", m "is %d", n " and is greater than 5");
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", m);
	}
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is 0\n", m);
	return (0);
}
