#include "main.h"

/**
 * malloc_checked - Entry point
 *
 * @b : unsigned integer
 *
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
