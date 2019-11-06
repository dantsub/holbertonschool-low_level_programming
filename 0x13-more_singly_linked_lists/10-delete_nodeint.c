#include "lists.h"
/**
  * delete_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to pointer.
  * @index: index.
  *
  * Return: The address of the new node, or NULL if it failed.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *before = *head;
	unsigned int count = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = before->next;
		free(before);
		return (1);
	}
	while (before && count < (index - 1))
	{
		before = before->next;
		count++;
	}
	if (!before || !before->next)
		return (-1);
	new = before->next->next;
	free(before->next);
	before->next = new;
	return (1);
}
