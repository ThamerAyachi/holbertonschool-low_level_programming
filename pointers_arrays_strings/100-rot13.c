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
	int i, j;
	char b[] = {'a', 'A'}, f[] = {'z', 'Z'};

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; j < 2; j++)
		{
			if (s[i] >= b[j] && s[i] <= f[j])
			{
				s[i] = (s[i] - b[j] + 13) % 26 + b[j];
			}
		}
	}

	return (s);
}
