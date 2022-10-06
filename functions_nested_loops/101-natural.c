#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print numbers'
 *
 * Return: integer
 */
int main(void)
{
	int i;
	int x = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			x = x + i;
		}
	}
	printf("%d\n", x);

	return (0);
}
