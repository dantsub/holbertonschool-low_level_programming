#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: interger parameter.
 * Return: numbers.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	printf("\n");
}
