#include "lists.h"

/**
 * free_list - free node list
 * @head: list_t
 * Return: void
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
