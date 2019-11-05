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

	if (!(*head) && idx > 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*head) && idx == 0)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	while (count < idx - 1)
	{
		count++;
		if (before->next == NULL)
			return (NULL);
	}
	if (count <= idx)
	{
		new->next = before->next;
		before->next = new;
		return (new);
	}
	if ((count + 1) == idx)
	{
		new->next = NULL;
		before->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
