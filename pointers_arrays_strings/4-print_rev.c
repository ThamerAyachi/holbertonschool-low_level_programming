#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s : pointer of string
 *
 * Description: 'reverse string and print it.'
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}

	if (i != 0)
	{
		while (i > 0)
		{
			i -= 1;
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
