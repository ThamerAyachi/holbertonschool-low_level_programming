#include "lists.h"

/**
 * dlistint_len - get length of node list
 * @h: constant of dlistint
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i = 0;

	tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	return (i);
}
