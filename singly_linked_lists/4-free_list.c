#include "lists.h"

/**
 * free_list - free node list
 * @head: list_t
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
