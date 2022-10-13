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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}

	return (i);
}
