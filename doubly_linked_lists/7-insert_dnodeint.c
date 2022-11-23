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
	unsigned int i;

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
	for (i = 0; c != NULL; i++)
	{
		if (idx == i + 1)
		{
			tmp->next = c->next;
			tmp->prev = c->prev;
			c->prev = c->prev->prev;
			c->next = tmp;
			return (tmp);
		}
		c = c->next;
	}
	return (NULL);
}
