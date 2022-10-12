#include "main.h"

/**
 * toUpper - function
 *
 * @s : character
 *
 * Description: 'to uppercase'
 *
 * Return: character
 */
char toUpper(char s)
{
	int j = s;

	if (s >= 'a' && s <= 'z')
	{
		j -= 32;
		s = j;
	}

	return (j);
}

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
	int i;

	s[0] = toUpper(s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '{')
		{
			s[i + 1] = toUpper(s[i + 1]);
		}
		else if (s[i] == '\n' || s[i] == '\t' || s[i] == '!' || s[i] == '?')
		{
			s[i + 1] = toUpper(s[i + 1]);
		}
		else if (s[i] == ')' || s[i] == '}' || s[i] == '(' || s[i] == '"')
		{
			s[i + 1] = toUpper(s[i + 1]);
		}
	}

	return (s);
}
