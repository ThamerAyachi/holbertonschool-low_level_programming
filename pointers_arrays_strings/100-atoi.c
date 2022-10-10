#include "main.h"

/**
 * _atoi - Entry point
 *
 * @s : pointer of string
 *
 * Description: 'convert a string to an integer.'
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, m, res, b = 0;

	m = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			m *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
	}

	res *= m;

	return (res);
}
