#include "lists.h"

/**
 * pop_listint - remove first element
 * @head: address of node list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (*head)
	{
		i = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (i);
}
