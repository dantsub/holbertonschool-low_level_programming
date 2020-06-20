#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	unsigned long fibo1 = 0, fibo2 = 1, sum, mid1, mid2;
	unsigned long fibo1_a, fibo1_b, fibo2_a, fibo2_b;

	for (i = 0; i < 91; i++)
	{
		sum = fibo1 + fibo2;
		printf("%lu, ", sum);
		fibo1 = fibo2;
		fibo2 = sum;
	}

	fibo1_a = fibo1 / 10000000000;
	fibo2_a = fibo2 / 10000000000;
	fibo1_b = fibo1 % 10000000000;
	fibo2_b = fibo2 % 10000000000;

	while (i < 98)
	{
		mid1 = fibo1_a + fibo2_a;
		mid2 = fibo1_b + fibo2_b;
		if (mid2 > 10000000000)
		{
			mid1 += 1;
			mid2 %= 10000000000;
		}

		printf("%lu%lu", mid1, mid2);
		if (i != 97)
			printf(", ");
		fibo1_a = fibo2_a;
		fibo1_b = fibo2_b;
		fibo2_a = mid1;
		fibo2_b = mid2;
		i++;
	}
	putchar(10);
	return (0);
}
