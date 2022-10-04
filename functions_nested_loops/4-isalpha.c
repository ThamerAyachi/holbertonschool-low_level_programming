#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: integer
 *
 * Description: 'checks for alphabetic character.'
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	char ch = c;
	int res = isalpha(ch);

	if (res == 0)
	{
		return (0);
	}

	return (1);
}
