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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
