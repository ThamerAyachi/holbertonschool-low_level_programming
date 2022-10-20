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
	int i = 0, j;
	char *string = NULL;

	while (str[i] != '\0')
		i++;

	if (i == 0)
		return (NULL);

	string = (char *)malloc(sizeof(char) * i);

	for (j = 0; str[j] != '\0'; j++)
	{
		*(string + j) = *(str + j);
	}

	return (string);
}
