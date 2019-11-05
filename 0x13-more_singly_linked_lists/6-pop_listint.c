#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t linked list.
  * @head: pointer to pointer.
  *
  * Return: the head nodes data (n).
  */
int pop_listint(listint_t **head)
{
	listint_t *actual;
	int n;

	if (*head)
	{
		n = (*head)->n;
		actual = (*head)->next;
		free(*head);
		*head = actual;
		return (n);
	}
	else
		return (0);
}
