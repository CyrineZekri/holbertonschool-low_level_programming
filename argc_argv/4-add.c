#include <stdio.h>
#include <stdlib.h>
/**
 * main -adds arguments.
 * @argc: input variablegc
 * @argv: input variable
 * Return:int
 */
int main(int argc, char *argv[])
{
	int i, j;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");

					return (1);
				}
			}
			result = result + (atoi(argv[i]));
		}
		printf("%d\n", result);
	}
	return (0);
}
