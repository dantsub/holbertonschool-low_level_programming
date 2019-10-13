#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers.
  * @argc: int.
  * @argv: parameter type array.
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
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
