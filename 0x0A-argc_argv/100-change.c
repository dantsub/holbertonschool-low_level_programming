#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change
 * @ac: count arguments
 * @av: argument values
 * Return: 0 success 1 if wrong
 */
int main(int ac, char **av)
{
	int idx, back, lot, res, div;
	int coins[] = {25, 10, 5, 2, 1};

	if (ac != 2)
	{
		puts("Error");
		return (1);
	}

	idx = lot = res = 0;
	back  = atoi(av[1]);

	while (idx < 5 && res != back)
	{
		div = ((back - res) / coins[idx]);
		if (div > 0)
		{
			lot += div;
			res += (div * coins[idx]);
		}
		idx++;
	}
	printf("%d\n", lot);
	return (0);
}
