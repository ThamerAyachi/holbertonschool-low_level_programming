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
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == 0)
		return (NULL);

	return (p);
}
