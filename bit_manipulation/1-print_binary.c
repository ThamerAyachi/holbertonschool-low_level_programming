#include "main.h"

/**
 * print_num - print single number
 * @n: unsigned long integer
 */
void print_num(unsigned long int n)
{
	if (n <= 0)
		return;
	print_num(n / 2);
	putchar(n % 2 + '0');
}

/**
 * print_binary - from base 10 to base 2
 * @n: unsigned long integer
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	print_num(n);
}
