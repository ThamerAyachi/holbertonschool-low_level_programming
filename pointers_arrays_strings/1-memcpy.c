#include "main.h"

/**
 * _memcpy - Entry point
 *
 * @dest : pointer of string
 * @src : pointer of string
 * @n : unsigned integer
 *
 * Description: 'copies memory area.'
 *
 * Return: pointer to pointer of string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *source = dest;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (source);
}
