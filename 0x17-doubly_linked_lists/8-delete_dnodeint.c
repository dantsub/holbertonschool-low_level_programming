#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes the node at index.
  * @head: head.
  * @index: index of node to delete.
  * Return: 1 if it success or -1 if it fail.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cp = *head, *prev, *next;
	unsigned int count;

	if (!(*head))
		return (-1);
	if (index == 0)
	{	*head = cp->next;
		free(cp);
		return (0);
	}
	for (count = 0; count < index - 1; count++)
		cp = cp->next;
	if (!cp || !cp->next)
		return (-1);
	next = cp->next->next;
	prev = cp->next->prev;
	free(cp->next);
	cp->next = next;
	cp->next->prev = prev;
	return (1);
}
