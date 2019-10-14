#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - adds positive numbers.
  * @argc: int.
  * @argv: parameter type array.
  * Return: 0 or 1.
  */
int main(int argc, char *argv[])
{
	int add, count, sub_c;

	add = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		for (sub_c = 0; argv[count][sub_c] != 0; sub_c++)
		{
			if (!isdigit(argv[count][sub_c]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[count]);
	}
	printf("%d\n", add);
	return (0);
}
