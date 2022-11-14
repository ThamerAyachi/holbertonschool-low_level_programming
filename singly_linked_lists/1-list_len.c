#include "lists.h"

/**
 * list_len - print len of list
 * @h: list_t
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
