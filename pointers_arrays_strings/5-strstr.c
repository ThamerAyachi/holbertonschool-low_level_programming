#include "main.h"

/**
 * _strstr - Entry point
 *
 * @haystack : pointer of string
 * @needle : pointer of string
 *
 * Description: 'locates a substring.'
 *
 * Return: unsignes integer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(haystack + i); i++)
	{
		for (j = 0; *(needle + j); j++)
		{
			if (*(needle + i) != *(haystack + j))
				break;
		}
		if (!(needle + j))
			break;
	}

	return (haystack + i - 1);
}
