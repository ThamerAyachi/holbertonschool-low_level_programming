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
	int i, j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	if (j == 1)
		return (dest);

	for (i = 0; i < n; i++)
	{
		if (i < j)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
