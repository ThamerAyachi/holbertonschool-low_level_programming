#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @n : integer
 *
 * Description: 'prints all natural numbers from n to 98.'
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	char c, k, w;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 99)
			{
				w = (i / 100) + '0';
				k = ((i / 10) - (i / 100) * 10) + '0';
				c = (i % 10) + '0';
				putchar(w);
				putchar(k);
				putchar(c);
			}
			else if (i > 9)
			{
				c = (i % 10) + '0';
				k = (i / 10) + '0';
				putchar(k);
				putchar(c);
			}
			else
				putchar(i + '0');

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{

			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
