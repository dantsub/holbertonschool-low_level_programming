#include <stdio.h>

/**
 * main - Entry point
 * Description: Print abc without e and q.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		if (i != 113 && i != 101)
			putchar(i);
	putchar('\n');
	return (0);
}
