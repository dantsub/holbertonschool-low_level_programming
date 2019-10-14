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
	int add, count;
	
	count = 1;
	add = 0;
	
	while (count < argc)
	{
		if (!isdigit(argv[count]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[count]);
			count++;
		}
	}
	printf("%d\n",add);
	return (0);
}
