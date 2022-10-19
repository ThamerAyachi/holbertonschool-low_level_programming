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
	int n, r = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	r += n / 100;
	n %= 100;

	r += n / 50;
	n %= 50;

	r += n / 10;
	n %= 10;

	r += n / 20;
	n %= 20;

	r += n / 5;
	n %= 5;

	printf("%d\n", r + n);

	return (0);
}
