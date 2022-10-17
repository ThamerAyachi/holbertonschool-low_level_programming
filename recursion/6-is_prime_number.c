#include "main.h"

/**
 * prime_check - check prime
 *
 * @x : integer (number)
 * @y : integer (counter)
 *
 * Description: 'check prime'
 *
 * Return: integer
 */
int prime_check(int x, int y)
{
	if (x == 1)
		return (0);
	if (y > x)
		return (0);
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	return (prime_check(x, y + 1));
}

/**
 * is_prime_number - Entry point
 *
 * @n : integer
 *
 * Description: ' returns 1 if the input integer is a prime number.'
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
