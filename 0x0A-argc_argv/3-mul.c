#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers.
  * @argc: argument count.
  * @argv: argument value.
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int arg1, arg2;

	if (argc > 2)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		printf("%d\n", arg1 * arg2);
		return (0);
	}
	printf("Error\n");
	return (1);
}
