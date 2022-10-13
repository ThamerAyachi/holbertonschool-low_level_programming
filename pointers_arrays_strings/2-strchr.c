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
	unsigned int i, j, t = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (t == 0 && s[i] != c)
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				s[j] = s[j + 1];
			}
		}
		else
		{
			t = 1;
		}
	}

	if (t == 0)
		return (NULL);

	return (s);
}
