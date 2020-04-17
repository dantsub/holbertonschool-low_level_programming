#include "search_algos.h"
/**
 * 
 * 
 * 
 * 
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%lu]\n", i, array[i]);
		if (value == array[i])
			return ((int)i);
	}
	return (-1);
}
