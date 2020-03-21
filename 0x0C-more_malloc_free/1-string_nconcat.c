#include "holberton.h"
/**
  * _strlen - Returns the length of a string.
  * @s: a string.
  * Return: length of a string.
  */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != 0)
	{
		count++;
		s++;
	}

	return (count);
}
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
	unsigned int index, size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (n >= size2)
		n = size2;
	pointer = malloc((size1 + n) * sizeof(char) + 1);
	if (!pointer)
		return (NULL);
	for (index = 0; index < size1; index++)
		pointer[index] = s1[index];
	for (index = 0; index < n; index++)
		pointer[size1 + index] = s2[index];
	pointer[size1 + index] = 0;
	return (pointer);
}
