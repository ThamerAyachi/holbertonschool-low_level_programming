#include "lists.h"

/**
 * add_dnodeint - add new element to node list
 * @head: address of node list
 * @n: constant integer
 * Return: dlistint
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *h;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;

	h = *head;
	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	tmp->next = h;

	if (h != NULL)
		h->prev = tmp;

	*head = tmp;

	return (*head);
}
