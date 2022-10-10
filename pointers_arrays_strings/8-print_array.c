#include "main.h"

/**
 * print_array - Entry point
 *
 * @a : pointer of array integers
 * @n : integer
 *
 * Description: 'prints numbers.'
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
