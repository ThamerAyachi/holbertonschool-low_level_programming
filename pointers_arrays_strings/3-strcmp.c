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
	int i, j = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		j += (s1[i] - s2[i]);
	}

	return (j);
}
