#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to pointer.
  * @idx: index.
  * @n: interger.
  * Return: The address of the new node, or NULL if it failed.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *before = *head;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = before;
		*head = new;
		return (new);
	}
	while (count < (idx - 1))
	{
		if (!before)
		{
			free(new);
			return (NULL);
		}
		count++;
		before = before->next;
	}
	new->next = before->next;
	before->next = new;
	return (new);
}
