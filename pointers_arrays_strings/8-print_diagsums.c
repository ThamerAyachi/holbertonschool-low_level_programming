#include "main.h"

/**
 * print_diagsums - Entry point
 *
 * @a : integer[][]
 * @size : integer
 *
 * Description: 'prints the sum of the two diagonals of a square matrix of integers.'
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, c = 0;

	for (i = 0; i < size; i++)
	{
		c += a[i][i];
	}

	printf("%d", c);
	c = 0;

	for (; i >= 0; i--)
	{
		c += a[i][i];
	}
	printf("%d", c);
}
