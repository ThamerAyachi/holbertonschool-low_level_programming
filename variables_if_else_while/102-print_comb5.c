#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints all possible combinations of two two-digit numbers.'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, i, j;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 56; y++)
		{
			for (i = x; i <= 57; i++)
			{
				for (j = y + 1; j <= 57; j++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(i);
					putchar(j);

					if (x == 57 && y == 56 && i == 57 && j == 57)
					{
						continue;
					}

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}