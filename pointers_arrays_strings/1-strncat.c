#include "main.h"

/**
 * _strncat - Entry point
 *
 * @dest : pointer of string
 * @src : pointer of string
 * @n : integer
 *
 * Description: 'concatenates two strings.'
 *
 * Return: pointer of string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		j += 1;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}

	return (dest);
}
