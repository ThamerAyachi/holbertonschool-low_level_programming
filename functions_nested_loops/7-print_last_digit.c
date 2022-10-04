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
	_putchar('0' + (n % 10));

	return (n % 10);
}
