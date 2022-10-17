#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * @x : integer
 * @y : integer
 *
 * Description: 'returns the value of x raised to the power of y.'
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
