#include "main.h"

/**
 * print_triangle - Entry point
 *
 * @size : integer
 *
 * Description: 'prints a triangle, followed by a new line.'
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, g;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (g = 1; g <= i; g++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
