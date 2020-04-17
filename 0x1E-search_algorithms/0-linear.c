#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to point first position of array
 * @size: size of array
 * @value: value to find
 * Return: position or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, (int)array[i]);
		if (value == array[i])
			return ((int)i);
	}
	return (-1);
}
