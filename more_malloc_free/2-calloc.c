#include "main.h"

/**
 * _calloc - Entry point
 *
 * @nmemb : unsigned integer
 * @size : unsigned integer
 *
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == 0)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = '\0';

	return (p);
}
