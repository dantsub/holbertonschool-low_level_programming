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
	int **pointer;
	int index, index1;

	if (width <= 0 || height <= 0 || (width == 1 && height == 1))
		return (NULL);
	pointer = malloc(height * sizeof(*pointer));
	if (pointer == NULL)
		return (NULL);
	for (index = 0; index < height; index++)
	{
		pointer[index] = malloc(width * sizeof(int));
		if (pointer[index] == NULL)
		{
			for (index--; index > -1; index--)
				free(pointer[index]);
			free(pointer);
			return (NULL);
		}
		for (index1 = 0; index1 < width; index1++)
			pointer[index][index1] = 0;
	}
	return (pointer);
}
