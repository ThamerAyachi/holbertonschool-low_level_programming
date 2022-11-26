#include "hash_tables.h"

/**
 * hash_table_set - set element
 * @ht: hash_table_t
 * @key: constant string
 * @value: constant string
 * Return: integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (0);

	tmp->key = strdup((char *)key);
	tmp->value = strdup((char *)value);
	tmp->next = NULL;

	if (ht->array[index] != NULL)
	{
		if (tmp->key == ht->array[index]->key)
		{
			ht->array[index] = tmp;
			return (1);
		}

		tmp->next = ht->array[index];
		ht->array[index] = tmp;
		return (1);
	}

	ht->array[index] = tmp;
	return (1);
}
