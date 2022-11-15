#include "lists.h"

/**
 * free_listint - free node list
 * @head: listint_t
 * Return: always 0
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next)
			free_listint(head->next);
		free(head);
	}
}
