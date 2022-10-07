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
	double i, z, x, j;

	j = 1;
	z = 1;

	for (i = 1; i <= 50; i++)
	{
		x = z;
		z = j;
		printf("%.0f", j);
		j = x + z;
		if (i != 50)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
