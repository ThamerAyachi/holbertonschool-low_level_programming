#include "main.h"

/**
 * _strdup - Entry point
 *
 * @str : string
 *
 * Description: 'copy of the string.'
 *
 * Return: string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p, *string;

	if (!str)
		return (NULL);

	p = str;
	while (*p++)
		i++;

	string = malloc(i + 1);
	if (!string)
		return (NULL);

	p = string;
	while (*str)
		*p++ = *str++;

	*p = 0;
	return (string);
}
