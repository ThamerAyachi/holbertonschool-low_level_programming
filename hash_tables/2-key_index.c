#include "hash_tables.h"

/**
 * key_index - get index of key
 * @key: constant string
 * @size: unsigned long integer
 * Return: unsigned long integer
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
