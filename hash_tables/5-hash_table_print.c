#include "hash_tables.h"

/**
 * print_ele - print one element
 * @hn: hash_node_t
 * @j: integer
 */
void print_ele(hash_node_t *hn, unsigned long int j)
{
	if (j != 0)
		printf(", ");
	printf("'%s':", hn->key);
	printf(" '%s'", hn->value);
	if (hn->next)
		print_ele(hn->next, j++);
}

/**
 * hash_table_print - print hash table
 * @ht: hash_table_t
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;

	if (ht != NULL)
	{
		putchar('{');

		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
				print_ele(ht->array[i], j++);
		}

		putchar('}');
		putchar('\n');
	}
}
