#include "main.h"
/**_sqrt_recursion -returns the natural square root of a number.
 *@n: input variable
 *Return the natural square root.
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

int _sqrt_recursion(int n)
{
	if (n == 0)

		return (0);

	return (verif(1, n));
}
