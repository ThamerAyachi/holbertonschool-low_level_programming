#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s : pointer of string
 *
 * Description: 'returns the length of a string.'
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, temp;

	temp = 0;
	while (s[temp] != '\0')
	{
		temp += 1;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
