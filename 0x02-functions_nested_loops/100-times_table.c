#include "holberton.h"
/**
  * times_table - function that prints the n times table, starting with 0.
  * @n: times print table.
  * Return: nothing.
  */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i < n + 1; i++)
	{
		_putchar(48);
		for (j = 1; j < n + 1; j++)
		{
			k = i * j;
			_putchar(',');
			_putchar(' ');
			if (k > 99)
			{
				_putchar((k / 10) / 10 + 48);
				_putchar((k / 10) % 10 + 48);
			}
			else if (k < 100 && k > 9)
			{
				_putchar(' ');
				_putchar((k / 10) % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(k % 10 + 48);
		}
		_putchar('\n');
	}
}
