#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a : pointer of integer
 * @b : pointer of integer
 *
 * Description: 'swaps the values of two integers.'
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
