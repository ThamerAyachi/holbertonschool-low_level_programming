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

	while (*(dest + i) != '\0')
	{
		i++;
		j++;
	}

	i = 0;

	while (*(src + i) != *(src + n))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
