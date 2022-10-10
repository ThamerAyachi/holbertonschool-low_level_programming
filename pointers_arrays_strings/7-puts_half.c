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

	if (len % 2 == 0)
	{
		for (i = (len / 2); i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len / 2) + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
