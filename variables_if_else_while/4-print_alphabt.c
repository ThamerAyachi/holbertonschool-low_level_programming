#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints the alphabet in lowercase expect e ans q'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}

		putchar(i);
	}
	putchar('\n');

	return (0);
}
