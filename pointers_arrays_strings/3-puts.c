#include "main.h"

/**
 * _puts - Entry point
 *
 * @str : pointer of string
 *
 * Description: 'prints a string.'
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
