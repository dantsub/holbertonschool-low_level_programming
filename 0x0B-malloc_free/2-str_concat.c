#include "holberton.h"
/**
  * str_concat - concatenates two strings.
  *
  * @s1: First String.
  * @s2: Second String.
  * Return: NULL or String concatenate.
  */
char *str_concat(char *s1, char *s2)
{
	char *pointer;
	unsigned int index, index1, size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != 0; size1++)
	{
	}
	for (size2 = 0; s2[size2] != 0; size2++)
	{
	}
	pointer = malloc((size1 + size2) * sizeof(char) + 1);
	if (pointer == NULL)
		return (NULL);
	for (index = 0; index < size1; index++)
		pointer[index] = s1[index];
	for (index1 = 0; index1 < size2; index1++)
		pointer[size1 + index1] = s2[index1];
	return (pointer);
}
