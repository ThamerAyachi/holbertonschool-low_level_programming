#include "main.h"

/**
 * cap_string - Entry point
 *
 * @s : string
 *
 * Description: 'to uppercase'
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i, j;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		j = s[0];
		j -= 32;
		s[0] = j;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '	')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				j = s[i + 1];
				j -= 32;
				s[i + 1] = j;
			}
		}
		else if (s[i] == '\\' && (s[i + 1] == 't' || s[i + 1] == 'n'))
		{
			if (s[i + 2] >= 'a' && s[i + 2] <= 'z')
			{
				j = s[i + 2];
				j -= 32;
				s[i + 2] = j;
			}
		}
	}

	return (s);
}
