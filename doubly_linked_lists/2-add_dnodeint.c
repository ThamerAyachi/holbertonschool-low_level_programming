#include "lists.h"

/**
 * add_dnodeint - add new element to node list
 * @head: address of node list
 * @n: constant integer
 * Return: dlistint
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;

	*head = tmp;

	return (*head);
}
