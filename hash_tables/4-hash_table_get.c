#include "hash_tables.h"

/**
 * hash_table_get - get value by key
 * @ht: hash_table_t
 * @key: constant string
 * Return: string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	if (ht->array[index]->key != key && ht->array[index]->next != NULL)
		return (ht->array[index]->next->value);

	return (ht->array[index]->value);
}
