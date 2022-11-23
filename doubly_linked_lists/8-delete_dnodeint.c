#include "lists.h"

/**
 * delete_dnodeint_at_index - delete element by index
 * @head: address node list
 * @index: unsigned integer
 * Return: integer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *c_next;
	unsigned int i = 0;

	tmp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	if (index == 1)
	{
		tmp = (*head)->next;
		(*head)->next = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if (tmp->next == NULL)
			return (-1);

		i++;
		tmp = tmp->next;
		c_next = tmp->next;
	}
	tmp->next = c_next->next;
	free(c_next);
	return (1);
}
