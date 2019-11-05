#include "lists.h"
/**
  * free_listint2 - frees a listint_t list.
  * @head: lists.
  *
  * Return: head.
  */
void free_listint2(listint_t **head)
{
	listint_t *actual = *head;

	if (actual && *head)
	{
		free_listint2(&actual->next);
		free(actual->next);
		free(actual);
		*head = NULL;
	}
	else
		*head = NULL;
}
