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
		s = string_toupper(s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '{')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s = string_toupper(s[0]);
		}
		else if (s[i] == '\n' || s[i] == '\t' || s[i] == '!' || s[i] == '?')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s = string_toupper(s[0]);
		}
		else if (s[i] == ')' || s[i] == '}' || s[i] == '(' || s[i] == '"')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s = string_toupper(s[0]);
		}
	}

	return (s);
}
