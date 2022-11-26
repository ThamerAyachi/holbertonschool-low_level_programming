#include "hash_tables.h"

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
			{
				if (j != 0)
					printf(", ");
				printf("'%s':", ht->array[i]->key);
				printf(" '%s'", ht->array[i]->value);
				j++;
			}
		}

		putchar('}');
		putchar('\n');
	}
}
