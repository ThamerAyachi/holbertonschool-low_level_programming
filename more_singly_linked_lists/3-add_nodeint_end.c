#include "lists.h"

/**
 * add_nodeint_end - add new element
 * @head: address of node list
 * @n: constant integer
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t)), *c;

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	c = *head;
	if (*head)
	{
		while (c->next != NULL)
			c = c->next;
		c->next = ptr;
	}
	else
		*head = ptr;

	return (ptr);
}
