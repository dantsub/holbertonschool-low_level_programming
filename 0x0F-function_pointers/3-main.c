#include "3-calc.h"
/**
  * main - main.
  * @argc: argument count.
  * @argv: argument values.
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int (*c)(int, int);
	int a, b, d;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		c = get_op_func(argv[2]);

		if (c != NULL )
		{
			d = c(a, b);
			printf("%d\n", d);
		}
		else
		{
			printf("Error\n");
		}
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
