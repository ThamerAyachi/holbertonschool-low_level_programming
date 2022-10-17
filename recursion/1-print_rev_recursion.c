#include "main.h"

/**
 * _print_rev_recursion - Entry point
 *
 * @s : pointer of string
 *
 * Description: 'prints a string in reverse.'
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
