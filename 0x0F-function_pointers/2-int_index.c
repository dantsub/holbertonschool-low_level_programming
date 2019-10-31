#include "function_pointers.h"
/**
  * int_index - searches for an integer.
  * @array: array.
  * @size: size of array.
  * @cmp: function.
  * Return: number.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
	}
	return (-1);
}
