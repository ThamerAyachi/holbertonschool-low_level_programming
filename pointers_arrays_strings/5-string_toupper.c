#include "main.h"

/**
 * string_toupper - Entry point
 *
 * @s : string
 *
 * Description: 'to uppercase'
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = s[i];
		s[i] = j - 32;
	}

	return (s);
}
