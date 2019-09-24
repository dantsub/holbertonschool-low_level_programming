#include <stdlib.h>
#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: interger number.
 * Return: last digit of n..
 */
int print_last_digit(int n)
{
	int m;
	m = abs(n % 10);

	_putchar(m + '0');
	return (m);
}
