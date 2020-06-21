#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
*/
int main(void)
{
	int c, lot;

	lot = 2772;
	srand(time(NULL));
	while (lot > 122)
	{
		c = (rand() % 128) + 1;
		putchar(c);
		lot -= c;
	}
	putchar(lot);
	return (0);
}
