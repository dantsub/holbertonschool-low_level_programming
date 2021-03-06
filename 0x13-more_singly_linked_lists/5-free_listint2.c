#include "lists.h"
/**
  * free_listint2 - frees a listint_t list.
  * @head: lists.
  *
  * Return: head.
  */
void free_listint2(listint_t **head)
{
	listint_t *actual;

	if (head)
	{
		if (*head)
		{
			actual = *head;
			free_listint2(&(*(*head)).next);
			free(actual);
		}
		*head = NULL;
	}
}
