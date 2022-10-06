#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: 'prints 10 times the numbers, from 0 to 14.'
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	char c, k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			c = j + '0';
			if (j > 9)
			{
				k = (j / 10) + '0';
				c = (j % 10) + '0';
				_putchar(k);
			}
			_putchar(c);
		}
		_putchar('\n');
	}
}
