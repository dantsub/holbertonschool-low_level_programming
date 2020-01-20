#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value.
 * @key: key (can not be an empty string).
 * @value: value associated with the key,
 * value must be duplicated, value can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *n_node;

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(key, node->key))
		{	free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	n_node = malloc(sizeof(hash_node_t));
	if (!n_node)
		return (0);
	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = ht->array[index];
	ht->array[index] = n_node;
	return (1);
}
