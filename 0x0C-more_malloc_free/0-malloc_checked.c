#include "holberton.h"
/**
  * malloc_checked - allocates memory using malloc.
  * @b: bytes.
  *
  * Return: 98 or allocate memory.
  */
void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
