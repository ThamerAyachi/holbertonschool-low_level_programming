#include "lists.h"

/**
 * delete_dnodeint_at_index - delete element by index
 * @head: address node list
 * @index: unsigned integer
 * Return: integer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if (tmp->next)
			tmp->next->prev = NULL;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (-1);
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
