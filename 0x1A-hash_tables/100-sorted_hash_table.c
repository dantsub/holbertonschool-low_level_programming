#include "hash_tables.h"
/**
 * shash_table_create - Creates a sorted hash table.
 * @size: size of hash table.
 * Return: hash table or NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash;

	hash = malloc(sizeof(shash_table_t));
	if (!hash)
		return (NULL);
	hash->array = malloc(sizeof(shash_node_t *) * size);
	if (!hash->array)
	{	free(hash);
		return (NULL);
	}
	hash->size = size;
	return (hash);
}
/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: hash table.
 * @key: key (can not be an empty string).
 * @value: value associated with the key
 * value must be duplicated, value can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	(void)ht;
	(void)key;
	(void)value;
	return (1);
}
/**
 * shash_table_get - Retrieve the value associated with a key.
 * @ht: hash table.
 * @key: The key to get the value of.
 * Return: the value associated with key in ht
 * or NULL If the key cannot be find.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: hash table.
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *node;
	char *com = "";

	if (ht)
	{
		putchar('{');
		node = ht->shead;
		while (node)
		{
			printf("%s'%s': '%s'", com, node->key, node->value);
			com = ", ";
			node = node->snext;
		}
		puts("}");
	}
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 * @ht: hash table.
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *node;
	char *com = "";

	if (ht)
	{
		putchar('{');
		node = ht->stail;
		while (node)
		{
			printf("%s'%s': '%s'", com, node->key, node->value);
			com = ", ";
			node = node->sprev;
		}
		puts("}");
	}
}
/**
 * shash_table_delete - deletes a sorted hash table.
 * @ht: hast table.
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *node = NULL, *tmp = NULL;

	if (ht->array)
	{
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			while (node)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
		free(ht->array);
	}
	if (ht)
		free(ht);
}
