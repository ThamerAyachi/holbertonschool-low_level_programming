#include "lists.h"

/**
 * insert_dnodeint_at_index - insert by index
 * @h: address linked list
 * @idx: unsigned integer
 * @n: integer
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *c;
	unsigned int i = 0;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL || h == NULL)
		return (NULL);

	tmp->n = n;
	c = *h;
	if (idx == 0)
	{
		tmp->next = *h;
		(*h)->prev = tmp;
		*h = tmp;
		return (*h);
	}
	while (i < idx - a && c)
	{
		c = c->next;
		i++;
	}
	if (c)
	{
		if (c->next)
			c->next->prev = tmp;
		tmp->next = c->next;
		tmp->prev = c;
		c->next = tmp;
	}
	return (NULL);
}
