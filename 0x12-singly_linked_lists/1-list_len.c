#include "lists.h"
/**
  * list_len - returns the number of elements in a linked list_t list.
  * @h: struct pointer.
  * Return: count.
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			count++;
		h = h->next;
	}
	return (count);
}
