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

	if (ht == NULL)
		return (0);

	if (strlen(key) == 0)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		ht->array[index] = new;
	}
	else
	{
		if (strcmp(key, (ht->array[index])->key) == 0)
			(ht->array[index])->value = strdup(value);
		else
		{
			new->key = strdup(key);
			new->value = strdup(value);
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}

	return (1);
}
