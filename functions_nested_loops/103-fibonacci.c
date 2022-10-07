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
	int i, j, z, x, r;

	j = 1;
	z = 1;
	r = 0;

	for (i = 1; i <= 4000000; i++)
	{
		if (j > 4000000)
		{
			printf("%d\n", r);
			break;
		}
		x = z;
		z = j;
		if (j % 2 == 0)
		{
			r = r + j;
		}
		j = x + z;
	}

	return (0);
}
