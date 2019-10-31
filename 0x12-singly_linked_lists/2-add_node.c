#include "lists.h"
/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: Pointer to pointer.
  * @str: String.
  * Return: count.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (length = 0; str[length] != 0; length++)
		;
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;

	return (new);
}
