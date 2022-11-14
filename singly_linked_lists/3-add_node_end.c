#include "lists.h"

/**
 * add_node_end - add new item
 * @head: address of list_t
 * @str: constant string
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *ptr = malloc(sizeof(list_t)), *c;

	if (str == NULL || ptr == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr->len = len;
	ptr->str = strdup(str);
	ptr->next = NULL;

	if (*head)
	{
		c = *head;
		while (c->next != NULL)
			c = c->next;
		c->next = ptr;
	}
	else
		*head = ptr;

	return (ptr);
}
