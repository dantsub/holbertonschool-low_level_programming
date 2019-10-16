#include <stdlib.h>
#include "holberton.h"
/**
  * argstostr - concatenates all the arguments of your program.
  *
  * @ac: numbers argunments?
  * @av: pointer of pointer.
  * Return: NULL or String concatenate.
  */
char *argstostr(int ac, char **av)
{
	int str, index, index1, count;
	char *pointer;

	count = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (index = 0; index < ac; index++)
	{
		index1 = 0;
		while (av[index][index1] != 0)
			index1++;
		count = count + index1;
	}
	index1 = 0;
	pointer = malloc(sizeof(char) * (ac + count + 1));
	if (pointer == NULL)
		return (NULL);
	for (index = 0; index < ac; index++)
	{
		str = 0;
		while (av[index][str] != 0)
		{
			pointer[index1] = av[index][str];
			str++;
			index1++;
		}
		pointer[index1] = '\n';
		index1++;
	}
	pointer[index1] = 0;
	return (pointer);
}
