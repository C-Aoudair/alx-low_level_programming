#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key in hash table.
 * @ht: The hash table wanted to looked into.
 * @key: The key wanted to looking for.
 *
 * Return: The value associated with the element, or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
       
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	return ((ht->array[index])->value);
}
