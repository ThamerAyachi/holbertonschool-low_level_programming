#include "main.h"

/**
 * _strncpy - Entry point
 *
 * @dest : pointer of string
 * @src : pointer of string
 * @n : integer
 *
 * Description: 'copy strings.'
 *
 * Return: pointer of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
