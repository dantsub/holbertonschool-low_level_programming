#include "holberton.h"

/**
 * main -  computes and prints the sum of all
 * the multiples of 3 or 5 below 1024 (excluded)
 * Return: Always 0.
 */
int main(void)
{
	int cnt, sum;

	for (cnt = 0; cnt < 1024; cnt++)
		if (!(cnt % 3) || !(cnt % 5))
			sum += cnt;
	printf("%d\n", sum);
	return (0);
}
