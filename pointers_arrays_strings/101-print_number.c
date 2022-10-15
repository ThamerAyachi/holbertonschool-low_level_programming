#include "main.h"

/**
 * print_number - Entry point
 *
 * @n : integer
 *
 * Description: 'prints an integer.'
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}

	int c = 1;
	int m = 1;

	while (c)
	{
		if (n / (m * 10) > 0)
			m = m * 10;
		else
			c = 0;
	}

	while (n >= 0)
	{
		if (m == 1)
		{
			_putchar(n % 10 + '0');
			n = -1;
		}
		else
		{
			_putchar((n / m % 10) + '0');
			m /= 10;
		}
	}
}
