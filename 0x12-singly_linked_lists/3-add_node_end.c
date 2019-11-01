#include "lists.h"
/**
  * add_node_end - adds a new node at the end of a list_t list.
  * @head: Pointer to pointer.
  * @str: String.
  * Return: count.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *actual;
	unsigned int length;

	actual = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (length = 0; str[length] != 0; length++)
		;
	new->str = strdup(str);
	new->len = length;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (*head);
	}
	while (1)
	{
		if(actual->next == NULL)
		{
			actual->next = new;
			break;
		}
		else
			actual = actual->next;
	}
	return (*head);
}
