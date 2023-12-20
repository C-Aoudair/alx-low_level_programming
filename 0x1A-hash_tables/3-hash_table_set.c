#include "hash_tables.h"


/**
 * hash_table_set - adds an element to the hash table.
 * @ht: The hash table wanted to add or update key/value to.
 * @key: The key.
 * @value: The value.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = (char *)key;
	new->value = (char *)value;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new->next = NULL;
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
