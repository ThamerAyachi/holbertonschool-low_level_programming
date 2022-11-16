#include "main.h"

/**
 * get_bit - get bit
 * @n: integer
 * @index: integer
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = (n >> index) & 1;

	if (bits == 1 || bits == 0)
		return (bits);

	return (-1);
}
