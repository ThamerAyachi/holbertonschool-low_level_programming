#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc : integer
 * @argv : array of strings
 *
 * Description: 'prints the number of arguments passed into it.'
 *
 * Return:  1 (Success) or 0
 */
int main(int argc, char *argv[])
{
	int x, i, r = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		x = strtol(argv[i], NULL, 10);
		r = r * x;
	}

	printf("%d\n", r);

	return (0);
}
