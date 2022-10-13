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
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + 1);
	}
	if (*(s + i) == c)
		return (s + 1);

	return (0);
}
