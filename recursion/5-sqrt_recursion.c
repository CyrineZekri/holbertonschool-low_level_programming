#include "main.h"
/**
 * verif - returns  the square root of a number.
 *@x: input variable
 *@y: input variable
 *Return: int.
 */
int verif(int x, int y)
{
	if (x * x > y)
	{

		return (-1);
	}
	else if (x * x == y)
	{

		return (x);
	}
	else
	{
		return (verif(x + 1, y));
	}
}

/**
 * _sqrt_recursion - returns  the natural square root of a number.
 *@n: input variable
 *Return:int.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)

		return (0);

	return (verif(1, n));
}
