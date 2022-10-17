#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * @s : pointer of string
 *
 * Description: ' prints a string.'
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
