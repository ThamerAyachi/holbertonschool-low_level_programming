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
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	_putchar('\n');
}
