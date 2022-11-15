#include "lists.h"

/**
 * insert_nodeint_at_index - add element
 * @head: address of node list
 * @idx: unsigned integer
 * @n: integer
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = malloc(sizeof(listint_t)), *c;
	unsigned int i;

	if (ptr == NULL || head == NULL)
		return (NULL);

	ptr->n = n;
	c = *head;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}
	for (i = 0; c != NULL; i++)
	{
		if (idx == i + 1)
		{
			ptr->next = c->next;
			c->next = ptr;
			return (ptr);
		}
		c = c->next;
	}
	return (NULL);
}
