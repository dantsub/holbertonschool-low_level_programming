#include "lists.h"
/**
  * print_list - prints all the elements of a list_t list.
  * @h: struct pointer.
  * Return: count.
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}
