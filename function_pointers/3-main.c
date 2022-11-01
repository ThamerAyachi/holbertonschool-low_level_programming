#include "3-calc.h"

/**
 * main - entry point for function
 * @argc: arg counter, number of args
 * @argv: array of pointers to args
 *
 * Description: calculates basic arithmetic
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char op;
	int (*myFunc)(int, int), res;

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

	myFunc = get_op_func(&op);
	if (myFunc == NULL || (argv[2][0] == '\0' || argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	res = myFunc(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
