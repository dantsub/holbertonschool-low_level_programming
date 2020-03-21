#include "holberton.h"
/**
  * _calloc - allocates memory for an array, using malloc.
  * @nmemb: numbers of elements.
  * @size: size of elements.
  * Return: array.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == 0)
		return (NULL);
	for (index = 0; index < (nmemb * size); index++)
		pointer[index] = 0;
	return (pointer);
}
