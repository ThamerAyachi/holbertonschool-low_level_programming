#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: ' prints the alphabet, in lowercase, followed by a new line.'
 *
 * Return: Always void (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
