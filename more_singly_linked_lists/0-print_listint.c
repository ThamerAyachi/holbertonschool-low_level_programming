#include "lists.h"

/**
 * print_listint - print all int of node list
 * @h: listint_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *c;

	c = h;
	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = c->next;
		i++;
	}
	return (i);
}
