#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: integer
 *
 * Description: 'checks for lowercase character.'
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	char ch = c;
	int res = islower(ch);

	if (res == 0)
	{
		return (0);
	}

	return (1);
}
