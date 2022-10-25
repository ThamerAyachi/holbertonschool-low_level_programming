#include "main.h"

/**
 * string_nconcat - Entry point
 *
 * @s1 : string
 * @s2 : string
 * @n : unsigned integer
 *
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int x, y;
	char *string;

	if (s1 == 0 || s2 == 0)
		return (NULL);

	while (*(s1 + i) != '\0')
		i++;

	while (*(s2 + j) != '\0')
		j++;

	if (n > j)
		n = j;

	string = malloc(i + n);

	if (string == 0)
		return (NULL);

	for (x = 0; x < i; x++)
		*(string + x) = *(s1 + x);

	for (y = 0; y < n; y++)
		*(string + x + y) = *(s2 + y);

	*(string + x + y) = '\0';

	return (string);
}
