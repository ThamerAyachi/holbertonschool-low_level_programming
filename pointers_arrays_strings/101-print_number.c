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
	int c = 1, m = 1;
	int num = n;

	if (num < 0)
	{
		num = num * (-1);
		_putchar('-');
	}

	while (c)
	{
		if (num / (m * 10) > 0)
			m = m * 10;
		else
			c = 0;
	}

	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
		}
	}
}
