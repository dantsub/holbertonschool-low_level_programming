#include "lists.h"
/**
  * add_dnodeint_end - adds a new node at the end.
  * @head: head.
  * @n: n of dlistint_t.
  * Return: the address of the new element, or NULL if it failed.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *cp_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!cp_node)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (cp_node->next)
		cp_node = cp_node->next;

	cp_node->next = new_node;
	new_node->prev = cp_node;
	return (new_node);
}
