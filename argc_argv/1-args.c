#include "main.h"

/**
 * main - Entry point
 *
 * @argc : integer
 * @argv : array of strings
 *
 * Description: 'prints the number of arguments passed into it.'
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] && i < argc)
	{
		i++;
	}

	printf("%d\n", i - 1);

	return (0);
}
