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
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		while ((before->next) && (count < (idx - 1)))
		{
			count++;
			before = before->next;
		}
		if ((count + 1) < idx)
			return (NULL);

		if ((count + 1) == idx && before->next == NULL)
		{
			new->next = NULL;
			before->next = new;
		}
		else
		{
			new->next = before->next;
			before->next = new;
		}
		return (new);
	}
}
