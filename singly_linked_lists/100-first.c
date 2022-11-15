#include "lists.h"

void firstMethod(void) __attribute__((constructor));

/**
 * firstMethod - print first
 * Return: always 0
 */
void firstMethod(void)
{
	char *t;

	t = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", t);
}
