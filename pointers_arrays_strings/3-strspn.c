#include "main.h"

/**
 * _strspn - Entry point
 *
 * @s : pointer of string
 * @accept : pointer of string
 *
 * Description: 'gets the length of a prefix substring.'
 *
 * Return: unsignes integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, x = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
				x++;
		}
	}

	return (x);
}
