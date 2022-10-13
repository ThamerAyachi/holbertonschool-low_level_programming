#include "main.h"

/**
 * _strchr - Entry point
 *
 * @s : pointer of string
 * @c : character
 *
 * Description: 'locates a character in a string.'
 *
 * Return: pointer of string
 */
char *_strchr(char *s, char c)
{
	unsigned int i, j = 0, t = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (t == 0 && s[i] == c)
		{
			t = 1;
			s[i] = NULL;
		}

		else if (t == 1)
			j++;
	}

	if (j == 0)
		return (NULL);

	return (f);
}
