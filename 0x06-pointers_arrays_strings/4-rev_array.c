#include "holberton.h"
/**
  * reverse_array - reverses the content of an array of integers.
  * @a: integer array.
  * @n: size array.
  *
  */
void reverse_array(int *a, int n)
{
	int index, temp, i;
	
	i = n - 1;
	for (index = 0; index < i; index++, i--)
	{
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
}
