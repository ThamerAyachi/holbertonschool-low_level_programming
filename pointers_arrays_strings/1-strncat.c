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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i += 1;
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
