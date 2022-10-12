#include "main.h"

/**
 * _strcmp - Entry point
 *
 * @s1 : pointer of string
 * @s2 : pointer of string
 *
 * Description: 'compares two strings.'
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
	{
		i += 1;
	}

	return (*(s1 + i) - *(s2 + i));
}
