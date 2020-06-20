#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: 0 Always
 */
int main(void)
{
	long unsigned int fibo1, fibo2, sum, total;

	fibo1 = sum = 0, fibo2 = 1;
	while (!(sum > 4000000))
	{
		sum = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = sum;
		if (!(sum % 2))
			total += sum;
	}
	printf("%lu\n", total);
	return (0);
}
