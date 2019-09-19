#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int size = sizeof(alphabet);
	int start = 0;

	while (start <= size)
	{
		putchar(alphabet[start]);
		if (start == size)
		{
			putchar('\n');
		}
		start++;
	}
	return (0);
}
