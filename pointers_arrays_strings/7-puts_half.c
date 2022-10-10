#include "main.h"

/**
 * puts_half - Entry point
 *
 * @str : pointer of string
 *
 * Description: 'prints half of a string.'
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len += 1;
	}

	for (i = (len / 2); i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
