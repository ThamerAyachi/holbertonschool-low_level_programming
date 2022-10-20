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
	int a = 0, b = 0, c, d;
	char *s;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	s = malloc(a * sizeof(*s1) + b * sizeof(*s2) + 1);

	if (s == 0)
		return (NULL);

	for (c = 0, d = 0; c < a + b; c++)
	{
		if (c < a)
			s[c] = s1[c];
		else
			s[c] = s2[d++];
	}

	return (s);
}
