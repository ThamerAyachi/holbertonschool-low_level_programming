#include "main.h"

/**
 * print_square - Entry point
 *
 * @size : integer
 *
 * Description: 'prints a square, followed by a new line.'
 *
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
