#include<stdlib.h>
#include<stdio.h>
/**
 * main- Entry point
 *@ac: argument count.
 *@av: argument value.
* Description: prints opcodes in hexadecimal
* Return: 0 succes
*/
int main(int ac, char **av)
{
	int i, n;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(av[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
