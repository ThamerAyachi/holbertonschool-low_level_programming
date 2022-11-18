#include "main.h"

/**
 * flip_bits - flip bits
 * @n: integer
 * @m: integer
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b;

	for (b = 0; n || m; n >>= 1, m >>= 1)
		if ((n & 1) != (m & 1))
			b++;

	return (b);
}
