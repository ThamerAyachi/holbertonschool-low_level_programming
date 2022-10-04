#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints all possible different combinations of three digits.'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int i;
	int j;

	for (x = 48; x <= 55; x++)
	{
		for (i = x + 1; i <= 57; i++)
		{
			for (j = i + 1; j <= 57; j++)
			{
				putchar(x);
				putchar(i);
				putchar(j);

				if (i == 56 && j == 57 && x == 55)
				{
					continue;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
