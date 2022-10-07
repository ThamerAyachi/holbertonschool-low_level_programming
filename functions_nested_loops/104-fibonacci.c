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
	float i, z, x, j;

	j = 1;
	z = 1;

	for (i = 1; i <= 98; i++)
	{
		x = z;
		z = j;
		printf("%.0f", j);
		j = x + z;
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
