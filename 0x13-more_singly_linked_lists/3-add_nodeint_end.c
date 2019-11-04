#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: node.
  * @n: constant int.
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *actual;

	actual = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		while (actual->next)
			actual = actual->next;
		actual->next = new;
	}
	return (*head);
}
