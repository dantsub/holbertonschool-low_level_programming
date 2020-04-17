#include "search_algos.h"
/**
 * binary_search - search binary
 * @array: pointer to point first position of array
 * @size: size of array.
 * @value: value find.
 * Return: position.
 */
int binary_search(int *array, size_t size, int value)
{
	int first, last, mid;

	if (!array)
		return (-1);

	first = 0, last = (int)size - 1;

	while (first <= last)
	{
		print_array(array, first, last);
		mid = (first + last) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return (-1);
}
/**
 * print_array - print array.
 * @array: array to print.
 * @first: first position.
 * @last: last position.
 * Return: nothing.
 */
void print_array(int *array, int first, int last)
{
	char *com = "";

	printf("Searching in array: ");
	while (first <= last)
	{
		printf("%s", com);
		printf("%d", array[first++]);
		com = ", ";
	}
	printf("\n");
}
