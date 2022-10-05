#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: 'prints every minute of the day of Jack Bauer.'
 *
 * Return: void
 */
void jack_bauer(void)
{
	int x, y, i, j;

	for (x = 48; x <= 50; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (i = 48; i <= 53; i++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (x == 50 && y > 51)
					{
						continue;
					}

					_putchar(x);
					_putchar(y);
					_putchar(':');
					_putchar(i);
					_putchar(j);
					_putchar('\n');
				}
			}
		}
	}
}
