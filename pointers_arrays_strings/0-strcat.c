#include "main.h"

/**
 * _strcat - Entry point
 *
 * @dest : pointer of string
 * @src : pointer of string
 *
 * Description: 'concatenates two strings.'
 *
 * Return: pointer of string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i += 1;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
