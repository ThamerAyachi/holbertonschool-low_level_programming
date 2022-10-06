#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n : integer
 *
 * Description: 'prints the n times table, starting with 0.'
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n < 15)
	{

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j != 0)
				{
					putchar(',');
					if (j * i < 100)
					{
						putchar(' ');
						if (j * i < 10)
							putchar(' ');
					}
					putchar(' ');
				}
				printf("%d", i * j);
			}
			putchar('\n');
		}
	}
}
