#include "main.h"

/**
 * reverse_array - Entry point
 *
 * @a : integer array
 * @n : integer
 *
 * Description: 'revers array'
 *
 */
void reverse_array(int *a, int n)
{
	int b[n], i;

	for (i = n - 1; i >= 0; i--)
	{
		b[n - i - 1] = a[i];
	}

	for (i = 0; i <= n; i++)
	{
		a[i] = b[i];
	}
}
