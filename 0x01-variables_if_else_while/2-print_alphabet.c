#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (i = 97; i < 123; i++)
	{
		putchar(i);
		if (i == 122)
		{
			putchar('\n');
		}
	}
	return (0);
}
