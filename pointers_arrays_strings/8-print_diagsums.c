#include "main.h"

/**
 * print_diagsums - Entry point
 *
 * @a : integer[][]
 * @size : integer
 *
 * Description: 'prints the sum of the two diagonals.'
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, p, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		r += *(a + p);
	}
	printf("%d, ", r);
	r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + (size - 1 - i);
		r += *(a + p);
	}
	printf("%d\n", r);
}
