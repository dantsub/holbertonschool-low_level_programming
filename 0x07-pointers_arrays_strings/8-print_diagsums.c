#include <stdio.h>
#include "holberton.h"
/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix
  * of intengers.
  * @a: int pointer.
  * @size: size.
  *
  */
void print_diagsums(int *a, int size)
{
	int index, index1;
	int first = 0;
	int second = 0;

	for (index = size - 1; index < (size * size) - 1; index += size - 1)
	{
		second += a[index];
	}
	for (index1 = 0; index1 < (size * size); index1 += size + 1)
	{
		first += a[index1];
	}
	printf("%d, %d\n", first, second);
}
