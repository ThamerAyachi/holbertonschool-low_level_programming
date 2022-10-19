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
	int i, j, r = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 'z' && argv[i][j] > 'a')
			{
				printf("Error\n");
				return (1);
			}
		}
		r += atoi(argv[i]);
	}

	printf("%d\n", r);

	return (0);
}
