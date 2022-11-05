#include "3-calc.h"

/**
 * main-passes arguments
 * @argc:argument count
 * @argv:argument vector
 * Return:int.
 */
int main(int argc, char *argv[])
{
	char op;
	int (*calc_fun)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = *(argv[2]);
	if ((op == '/' || op == '%') && !atoi(argv[3]))
	{
		printf("Error\n");
		exit(100);
	}
	calc_fun = get_op_func(&op);
	if (calc_fun == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = calc_fun(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
