#include "main.h"

/**
 * sqrt_check - check sqrt
 *
 * @x : integer
 * @y : integer
 *
 * Description: 'check sqrt'
 *
 * Return: integer
 */
int sqrt_check(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);

	return (sqrt_check(x + 1, y));
}

/**
 * _sqrt_recursion - Entry point
 *
 * @n : integer
 *
 * Description: 'returns the natural square root of a number.'
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_check(1, n));
}
