#include "lists.h"

/**
 * get_dnodeint_at_index - get element by index
 * @head: dlistint_t
 * @index: unsigned integer
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}

	return (NULL);
}
