#include "lists.h"

/**
 * delete_nodeint_at_index - remove element
 * @head: address of node list
 * @index: integer
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c, *c_next;
	unsigned int i = 0;

	c = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = c->next;
		free(c);
		return (1);
	}
	if (index == 1)
	{
		c = (*head)->next;
		(*head)->next = c->next;
		free(c);
		return (1);
	}
	while (i < index - 1)
	{
		if (c->next == NULL)
			return (-1);
		c = c->next;
		c_next = c->next;
	}
	c->next = c_next->next;
	free(c_next);
	return (1);
}
