#include "holberton.h"
/**
 * print_number - Prints an integer.
 * @n: integer number to be printed.
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int positive = n;

	if (n < 0)
	{
		_putchar(45);
		positive = -positive;
	}

	if ((positive / 10) > 0)
		print_number(positive / 10);

	_putchar((positive % 10) + 48);
}
