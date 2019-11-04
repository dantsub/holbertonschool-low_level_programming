#include "lists.h"
/**
  * sum_listint - returns the number of elements in a linked listint_t list.
  * @head: constant struct.
  *
  * Return: number of nodes.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
