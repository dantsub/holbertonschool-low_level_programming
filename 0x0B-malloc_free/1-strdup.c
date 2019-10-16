#include <stdlib.h>
#include "holberton.h"
/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: string.
  *
  * Return: NULL or String.
  */
char *_strdup(char *str)
{
	char *pointer;
	unsigned int index, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != 0; size++)
	{
	}
	pointer = malloc(size * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	for (index = 0; index <= size; index++)
		*(pointer + index) = str[index];
	return (pointer);
}
