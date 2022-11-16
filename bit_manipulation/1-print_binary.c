#include "main.h"

/**
 * print_binary - from base 10 to base 2
 * @n: unsigned long integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int v = n;

	if (v > 1)
		print_binary(v >> 1);

	putchar((v & 1) + '0');
}
