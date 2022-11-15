#include "lists.h"

/**
 * add_nodeint - add new element
 * @head: address of node list
 * @n: constant integer
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
