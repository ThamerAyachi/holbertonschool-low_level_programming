#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: integer
 *
 * Description: 'prints the last digit of a number.'
 *
 * Return: integer
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = x * -1;
	}

	_putchar('0' + x);

	return (x);
}
