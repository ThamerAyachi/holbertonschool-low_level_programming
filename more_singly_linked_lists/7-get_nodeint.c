#include "lists.h"

/**
 * get_nodeint_at_index - get element by index
 * @head: node list
 * @index: unsigned integer
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c;
	unsigned int i;

	c = head;
	for (i = 0; c != NULL; i++)
	{
		if (i == index)
			return (c);
		c = c->next;
	}
	return (NULL);
}
