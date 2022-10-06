#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c : integer
 *
 * Description: 'that checks for a digit (0 through 9).'
 *
 * Return: integer
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
	{
		return (1);
	}
	return (0);
}
