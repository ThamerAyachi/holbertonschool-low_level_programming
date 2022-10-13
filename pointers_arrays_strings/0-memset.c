#include "main.h"

/**
 * _memset - Entry point
 *
 * @s : pointer of string
 * @b : character
 * @n : unsigned integer
 *
 * Description: 'fills memory with a constant byte.'
 *
 * Return: pointer of string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *start = s;

	for (i = 0; i < n; i++)
		*s++ = b;

	return (start);
}
