#include "main.h"

/**
 * rot13 - Entry point
 *
 * @s : pointer of string
 *
 * Description: 'encodes a string using rot13.'
 *
 * Return: string
 */
char *rot13(char *s)
{
	int i, j, b[] = {65, 97}, f[] = {90, 122};

	for (i = 0; s[i] != '\0'; i++)
	{
		int a = s[i];

		for (j = 0; j < 2; j++)
		{
			if (a >= b[i] && a <= f[i])
			{
				s[i] = (s[i] - b[i] + 13) % 26 + b[i];
			}
		}
	}

	return (s);
}
