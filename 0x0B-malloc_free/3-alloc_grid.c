#include <stdlib.h>
#include "holberton.h"
/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  *
  * @width: width.
  * @height: height.
  * Return: 0 or NULL or 2 dimensional array.
  */
int **alloc_grid(int width, int height)
{
	char *pointer;
	int index, index1, size1, size2;

	if (width <= 0 || height <= 0)
		return (NULL);
	pointer = malloc((size1 + size2) * sizeof(char) + 1);
	if (pointer == NULL)
		return (NULL);
	return (pointer);
}
