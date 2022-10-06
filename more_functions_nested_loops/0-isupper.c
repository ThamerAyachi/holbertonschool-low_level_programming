#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c : integer
 *
 * Description: 'checks for uppercase character.'
 *
 * Return: integer
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	return (0);
}
