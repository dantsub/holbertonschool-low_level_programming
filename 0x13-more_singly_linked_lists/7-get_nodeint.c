#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list.
  * @head: pointer struct.
  * @index: index.
  * Return: the nth node of a listint_t linked list.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *actual;

	if (head)
	{
		if (index != 0)
		{
			actual = get_nodeint_at_index(head->next, index - 1);
			return (actual);
		}
		return (head);
	}
	return (NULL);
}
