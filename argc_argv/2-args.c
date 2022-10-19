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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
