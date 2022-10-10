#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s : pointer of string
 *
 * Description: 'returns the length of a string.'
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a = a + 1;
	}

	return (a);
}
