#include "main.h"

/**
 * str_concat - Entry point
 *
 * @s1 : string
 * @s2 : string
 *
 * Description: 'concatenates two strings.'
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s, *S1, *S2, *a;

	S1 = s1;
	while (*S1++)
		i++;

	S2 = s2;
	while (*S2++)
		j++;

	s = malloc(i + j + 1);

	a = s;
	while (*s1)
		*a++ = *s1++;

	while (*s2)
		*a++ = *s2++;

	*a = 0;
	return (s);
}
