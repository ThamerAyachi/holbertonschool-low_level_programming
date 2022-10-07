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

	for (i = 1; i <= 4000000; i++)
	{
		if (j > 4000000)
		{
			break;
		}
		x = z;
		z = j;
		if (j % 2 == 0)
		{
			printf("%d\n", j);
		}
		j = x + z;
	}

	return (0);
}
