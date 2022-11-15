#include "lists.h"

/**
 * free_listint2 - free node lists
 * @head: address of node list
 * Return: always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		c = *head;
		*head = (*(head))->next;
		free(c);
	}
	*head = NULL;
}
