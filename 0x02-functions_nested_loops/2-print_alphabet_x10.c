#include "holberton.h"

/**
 * print_alphabet_x10 - pritn alphabet x10.
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for(i = 0; i < 11; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
