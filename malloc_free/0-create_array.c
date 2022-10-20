#include "main.h"

/**
 * create_array - Entry point
 *
 * @size : unsigned integer
 * @c : character
 *
 * Description: 'creates an array of chars.'
 *
 * Return: array of characters
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = NULL;

	if (size == 0)
		return (NULL);

	*p = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);
}
