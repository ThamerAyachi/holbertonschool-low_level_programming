#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * @s : pointer of string
 * @accept : pointer of string
 *
 * Description: 'searches a string for any of a set of bytes.'
 *
 * Return: unsignes integer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				return ((s + i));
		}
	}

	return (0);
}
