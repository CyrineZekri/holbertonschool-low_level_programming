#include <stdio.h>
/**
 * main -prints arguments of the program.
 * @argc: input variablegc
 * @argv: input variable
 * Return:int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
