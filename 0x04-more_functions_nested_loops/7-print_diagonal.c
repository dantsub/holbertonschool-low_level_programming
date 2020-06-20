#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number.
 * Return: print space n times and last print \.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
		_putchar(10);
	for (i = 0; i < n; i++)
	{
		j = i;
		while (j != 0 && j < n)
		{
			_putchar(32);
			j--;
		}
		_putchar(92);
		_putchar(10);
	}
}
