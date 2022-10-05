#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: 'prints the 9 times table, starting with 0.'
 *
 * Return: void
 */
void times_table(void)
{
	int y, i, j;
	char c, k;

	j = 0;
	for (y = 0; y <= 9; y++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i * j > 9)
			{
				c = ((i * j) % 10) + '0';
				k = ((i * j) / 10) + '0';
				_putchar(' ');
				_putchar(k);
				_putchar(c);
				if (i == 9)
				{
					continue;
				}
				_putchar(',');

				continue;
			}
			c = (i * j) + '0';
			if (i != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}

			_putchar(c);
			if (i == 9)
				continue;
			_putchar(',');
		}
		_putchar('\n');
		j = j + 1;
	}
}
