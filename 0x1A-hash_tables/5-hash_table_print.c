#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hast table.
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	char *com = "";

	if (ht)
	{	putchar('{');
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			while (node)
			{
				printf("%s'%s': '%s'", com, node->key, node->value);
				com = ", ";
				node = node->next;
			}
		}
		puts("}");
	}
}
