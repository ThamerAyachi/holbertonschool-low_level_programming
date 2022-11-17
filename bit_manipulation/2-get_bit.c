#include "main.h"

/**
 * get_bit - get bit
 * @n: integer
 * @index: integer
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = ((n >> index) & 1);
	if (index > 100)
		return (-1);
	return (i);
}
