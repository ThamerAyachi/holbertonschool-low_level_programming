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
	int i = strlen(s);

	if (i == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);

	_print_rev_recursion(s - 1);
}
