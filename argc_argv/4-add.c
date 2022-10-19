#include "main.h"
#include <stdlib.h>

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
	int i, r = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		r += atoi(argv[i]);
	}

	printf("%d\n", r);

	return (0);
}
