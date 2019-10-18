#include "holberton.h"
#include <stdlib.h>
/**
  * array_range - creates an array of integers.
  * @min: value min.
  * @max: value max.
  * Return: array.
  */
int *array_range(int min, int max)
{
	int index, space, *pointer;

	space = (max - min);
	if (min > max)
		return (NULL);
	pointer = malloc((space + 1) * sizeof(*pointer));
	if (pointer == 0)
		return (NULL);
	for (index = 0; index < (space + 1); index++, min++)
		pointer[index] = min;
	return (pointer);
}
