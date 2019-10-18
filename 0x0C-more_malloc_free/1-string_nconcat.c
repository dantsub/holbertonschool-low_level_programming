#include "holberton.h"
#include <stdlib.h>
/**
  * string_nconcat - .
  * @s1: First String.
  * @s2: Second String.
  * @n: size.
  * Return: Concatenate String.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= size2)
		n = size2;
	pointer = malloc((size1 + n) * sizeof(char) + 1);
	if (pointer == NULL)
		return (NULL);
	for (index = 0; index < size1; index++)
		pointer[index] = s1[index];
	for (index1 = 0; index1 < n; index1++)
		pointer[size1 + index1] = s2[index1];
	return (pointer);
}
