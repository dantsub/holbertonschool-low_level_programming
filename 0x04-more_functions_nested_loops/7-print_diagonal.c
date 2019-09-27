#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number.
 * Return: print space n times and last print \.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar(92);
					break;
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
