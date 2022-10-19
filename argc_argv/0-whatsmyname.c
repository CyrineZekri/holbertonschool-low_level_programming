#include <stdio.h>
/**
 * main -prints name of the program.
 * @argc: input variablegc
 * @argv: input variable
 * Return:int
 */
int main(int argc, char *argv[])
{
	if (argc != 0)
		printf("%s\n", argv[0]);
	return (0);
}
