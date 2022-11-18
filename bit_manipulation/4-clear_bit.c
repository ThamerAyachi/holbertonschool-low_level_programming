#include "main.h"

/**
 * clear_bit - clear bit to 0
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: (1) or (-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	if (*n & (1 << index))
		*n ^= (1 << index);
	return (1);
}
