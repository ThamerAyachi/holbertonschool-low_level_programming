#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s : pointer of string
 *
 * Description: 'returns the length of a string.'
 *
 * Return: integer
 */
int _strlen(char *s)
{
	char a[];
	char *b = &a;

	*b = *s;

	return (sizeof(a));
}
