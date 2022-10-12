#include "main.h"

/**
 * leet - Entry point
 *
 * @s : string
 *
 * Description: 'encodes a string into 1337.'
 *
 * Return: string
 */
char *leet(char *s)
{
	char c[5] = {'a', 'e', 'o', 't', 'l'};
	char C[5] = {'A', 'E', 'O', 'T', 'L'};
	int l[5] = {4, 3, 0, 7, 1};

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == c[j] || s[i] == C[j])
				s[i] = l[j] + '0';
		}
	}

	return (s);
}
