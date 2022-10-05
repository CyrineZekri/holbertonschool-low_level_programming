#include <stdio.h>
/**
 *main-prints.
 *Return:0
 */
int main(void)

{
	char i;
	for (i >= 91; i <= 122; i++)
	{
		if ((i != 'e') && (i != 'q'))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
