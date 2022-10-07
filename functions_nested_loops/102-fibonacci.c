#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print numbers'
 *
 * Return: void
 */
int main(void)
{
	int i, j, z, x;

	j = 1;
	z = 1;

	for (i = 1; i <= 50; i++)
	{
		x = z;
		z = j;
		printf("%d", j);
		putchar(',');
		putchar('\n');
		j = x + z;
	}
	return (0);
}