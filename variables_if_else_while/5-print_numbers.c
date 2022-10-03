#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints numbers from 0 to 9'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
