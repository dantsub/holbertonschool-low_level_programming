#include "holberton.h"
/**
  * *_strcat - concatenates two strings.
  * @dest: dest.
  * @src: source.
  * Return: dest.
  */
char *_strcat(char *dest, char *src)
{
	int size, index;

	size = 0;
	while (dest[size] != 0)
		size++;
	for (index = 0; src[index] != 0; index++)
		dest[size + index] = src[index];
	dest[size + index] = 0;
	return (dest);
}
