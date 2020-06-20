#include "holberton.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: size.
 * Return: nothing.
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
		_putchar(10);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			k = i + j;
			if (k < size - 1)
				_putchar(32);
			else
				_putchar('#');
		}
		_putchar(10);
	}
}
