#include "3-calc.h"
/**
  * main - main.
  * @ac: argument count.
  * @av: argument values.
  * Return: 0.
  */
int main(int ac, char **av)
{
	int (*op_func)(int, int);
	int num1, num2, result;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	op_func = get_op_func(av[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}
