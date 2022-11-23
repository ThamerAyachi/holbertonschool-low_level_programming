#include "lists.h"

/**
 * add_dnodeint_end - add element in the end
 * @head: address of node list
 * @n: constant integer
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *h;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head)
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		h->next = tmp;
		tmp->prev = h;
	}
	else
		*head = tmp;

	return (tmp);
}
