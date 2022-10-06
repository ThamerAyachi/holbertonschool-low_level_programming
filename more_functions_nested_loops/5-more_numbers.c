#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: 'prints 10 times the numbers, from 0 to 14.'
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	char c[] = "1234567891011121314";

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= (sizeof(c) / sizeof(c[0])) - 2; j++)
		{
			_putchar(c[j]);
		}
		_putchar('\n');
	}
}
