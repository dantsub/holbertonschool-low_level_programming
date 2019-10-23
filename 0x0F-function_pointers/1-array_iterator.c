#include "function_pointers.h"
/**
  * array_iterator - executes a function given as a parameter
  * on each element of an array.
  * @array: array.
  * @size: size of array.
  * @action: function.
  * Return: nothing.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array != NULL && action != NULL)
		for (index = 0; index < size; index++)
			(*action)(array[index]);
}
