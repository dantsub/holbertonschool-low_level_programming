#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Validate if the last number is grather tan 5
 *		less than 6 and not 0 or is 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10; /* get last number of n */

	if (last != 0)
	{
		if (last > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else
		printf("Last digit of %d is %d and is 0\n", n, last);
	return (0);
}
