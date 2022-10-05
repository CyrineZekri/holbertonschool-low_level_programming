#include <stdio.h>
/**
 *main-prints.
 *Return:0
 */
int main(void)

{
	int i;
	for (i = 97; i <= 122; i++)
	{
		if ((i != 'e') && (i != 'q'))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
