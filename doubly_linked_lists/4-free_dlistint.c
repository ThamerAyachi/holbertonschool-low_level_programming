#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: linked list
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_dlistint(head->next);
		free(head);
	}
}
