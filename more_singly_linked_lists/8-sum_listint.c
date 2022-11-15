#include "lists.h"

/**
 * sum_listint - return sum
 * @head: listint_t
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	listint_t *c;
	int i = 0;

	c = head;
	while (c != NULL)
	{
		i += c->n;
		c = c->next;
	}
	return (i);
}
