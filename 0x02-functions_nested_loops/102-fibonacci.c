#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	unsigned long fibo1, fibo2, res;

	fibo1 = 0, fibo2 = 1;
	for (i = 0; i < 50; i++)
	{
		res = fibo1 + fibo2;
		printf("%lu", res);
		fibo1 = fibo2;
		fibo2 = res;
		if (i != 49)
			printf(", ");
	}
	putchar(10);
	return (0);
}
