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
	int i = 0, j = 0, x = 0, y = 0;

	while (s1[i] != '\0')
	{
		x += *s1;
		*s1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		y += *s2;
		*s2++;
		j++;
	}

	return (x - y);
}
