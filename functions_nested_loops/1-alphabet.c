#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: ' prints the alphabet, in lowercase, followed by a new line.'
 *
 * Return: Always void (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	return (void);
}
