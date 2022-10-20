#include <stdio.h>
#include <stdlib.h>
/**
 * main -multiplies arguments.
 * @argc: input variablegc
 * @argv: input variable
 * Return:int
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc < 3)
	{
		printf("Error \n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= (atoi(argv[i]));
		}
		printf("%d\n", result);
	}
	return (0);
}
