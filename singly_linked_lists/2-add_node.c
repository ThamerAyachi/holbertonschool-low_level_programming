#include "lists.h"

/**
 * add_node - add new element to node list
 * @head: address of list_t
 * @str: string
 * Return: address head of the node list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *ptr = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr->len = len;
	ptr->str = strdup(str);
	ptr->next = *head;

	*head = ptr;

	return (*head);
}
