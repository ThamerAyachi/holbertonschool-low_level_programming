#include "lists.h"

/**
 * listint_len - return number elements
 * @h: listint_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t i = 0;

	c = h;
	while (c != NULL)
	{
		c = c->next;
		i++;
	}
	return (i);
}
