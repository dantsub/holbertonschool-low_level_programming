#include "lists.h"
/**
  * free_dlistint - free a dlistint_t list.
  * @head: head.
  *
  * Return: Nothing.
  */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
