#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	long pri, div;

	pri = 612852475143, div = 0;
	while (div < (pri / 2))
	{
		if ((pri % 2))
		{
			for (div = 3; div < (pri / 2); div += 2)
			{
				if ((pri % div) == 0)
					pri /= div;
			}
		}
		else
			pri /= 2;

	}
	printf("%ld\n", pri);
	return (0);
}
