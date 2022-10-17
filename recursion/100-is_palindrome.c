#include "main.h"

/**
 * len_recursion - get length of string
 *
 * @s : string
 *
 * Description: 'get length of string'
 *
 * Return: integer
 */
int len_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + len_recursion(s));
	}
	return (0);
}

/**
 * check - check
 *
 * @s : string
 * @len : integer
 * @c : integer
 *
 * Description: 'check'
 *
 * Return: integer
 */
int check(char *s, int len, int c)
{
	if (c >= len)
		return (1);
	if (s[len] == s[c])
		return (check(s, len - 1, c + 1));
	return (0);
}

/**
 * is_palindrome - Entry point
 *
 * @s : string
 *
 * Description: 'returns 1 if a string is a palindrome.'
 *
 * Return: integer
 */
int is_palindrome(char *s)
{
	return (check(s, len_recursion(s), 0));
}