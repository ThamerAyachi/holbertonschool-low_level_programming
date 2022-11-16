#include "main.h"

/**
 * _pow - get power of number
 * @x: unsigned integer
 * @y: unsigned integer
 * Return: unsigned integer
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);

	return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - from base 2 to base 10
 * @b: string
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
			n += _pow(2, len - 1 - i);
	}

	return (n);
}
