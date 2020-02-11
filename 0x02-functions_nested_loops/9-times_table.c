#include "holberton.h"
/**
  * times_table - function that prints the 9 times table
  * Return: nothing.
  */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (j == 0)
				_putchar(k + 48);
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
			}
			else if (k > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + 48);
				_putchar(k % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
