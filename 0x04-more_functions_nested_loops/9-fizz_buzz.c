#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the numbers from 1 to 100
 * But for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i);
		}
		else
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz ");
			else if (i % 3 == 0)
				printf("Fizz ");
			else
				if (i == 100)
					printf("Buzz");
				else
					printf("Buzz ");
		}
	}
	putchar('\n');
	return (0);
}
