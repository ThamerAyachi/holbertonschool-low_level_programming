#include "main.h"

/**
 * puts2 - Entry point
 *
 * @str : pointer of string
 *
 * Description: 'prints every other character of a string.'
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len += 1;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
