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
 * Return: Always 1 (Success)
 */
int main(int argc, char *argv[])
{
	int i, r = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		r = r * atoi(argv[i]);
	}

	printf("%d\n", r);

	return (1);
}