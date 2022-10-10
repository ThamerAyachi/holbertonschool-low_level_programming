#include "main.h"

/**
 * _strcpy - Entry point
 *
 * @dest : pointer of string
 * @src : pointer of string
 *
 * Description: 'copy string.'
 *
 * Return: pointer of string
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
	{
		len += 1;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
