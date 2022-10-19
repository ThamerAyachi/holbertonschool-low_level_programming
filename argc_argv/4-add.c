#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * @argc : integer
 * @argv : array of strings
 *
 * Description: 'adds positive numbers.'
 *
 * Return:  1 (Success) or 0
 */
int main(int argc, char *argv[])
{
	int x, i, r = 1;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		x = strtol(argv[i], NULL, 10);
		r = r + x;
	}

	printf("%d\n", r);

	return (0);
}
