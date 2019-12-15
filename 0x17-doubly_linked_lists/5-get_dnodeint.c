#include "lists.h"
/**
  * get_dnodeint_at_index - returns the nth node.
  * @head: head.
  * @index: index of node.
  * Return: The nth node of a dlistint_t linked list or NULL.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (index == 0 || !head)
	{
		if (!head)
		{	printf("entro a la primera condición\n");
			return (NULL);
		}
		return (head);
	}
	for (count = 0; count < index; count++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
