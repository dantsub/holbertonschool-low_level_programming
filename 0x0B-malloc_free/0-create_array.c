#include <stdlib.h>
#include "holberton.h"
/**
  * create_array - creates an array of chars, and initializes
  * it with a specific char.
  * @size: lenght.
  * @c: array.
  * Return: NULL or array.
  */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int index;

	pointer = malloc(size * sizeof(c));
	if (size == 0 || pointer == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		*(pointer + index) = c;
	return (pointer);
}
