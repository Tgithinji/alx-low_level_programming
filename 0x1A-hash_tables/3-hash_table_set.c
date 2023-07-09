#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to update the key/value
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if successful. 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item_node;
	unsigned long int index;
	char *dup_value;

	if (!ht || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	dup_value = strdup(value);
	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = dup_value;
			return (1);
		}
	}
	item_node = malloc(sizeof(hash_node_t));
	if (item_node == NULL)
	{
		free(dup_value);
		return (0);
	}
	item_node->key = strdup(key);
	item_node->value = dup_value;
	item_node->next = ht->array[index];
	ht->array[index] = item_node;
	free(dup_value);
	return (1);
}
