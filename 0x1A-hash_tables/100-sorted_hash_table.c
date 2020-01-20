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
		return (NULL);
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
	(void)ht;
	(void)key;
	return (NULL);
}
/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: hash table.
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	(void)ht;
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 * @ht: hash table.
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	(void)ht;
}
/**
 * shash_table_delete - deletes a sorted hash table.
 * @ht: hast table.
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	(void)ht;
}
