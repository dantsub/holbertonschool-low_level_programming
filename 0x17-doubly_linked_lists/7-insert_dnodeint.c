#include "lists.h"
/**
  *
  *
  *
  *
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node, *cp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!cp && idx > 0)
	{	free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		if (!cp)
			new_node->next = NULL;
		else
		{	new_node->next = cp;
			cp->prev = new_node;
		}
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	for (count = 0; count < idx; count++)
	{
		if (!cp && count != idx)
		{	free(new_node);
			return (NULL);
		}
		cp = cp->next;
	}
	new_node->next = cp->next;
	new_node->prev = cp;
	cp->next = new_node;
	return (new_node);
}
