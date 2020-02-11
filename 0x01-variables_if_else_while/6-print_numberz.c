#include <stdio.h>

/**
 * main - Entry point
 * Description: Print from 0 to 9 whit ascii.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
