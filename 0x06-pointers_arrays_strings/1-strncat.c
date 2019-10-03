#include "holberton.h"
/**
  * *_strncat - concatenates two strings.
  * @dest: dest.
  * @src: source.
  * @n: bytes.
  * Return: dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	int size, index;

	while (dest[size] != 0)
		size++;
	for (index = 0; index < n && src[index] != 0; index++)
		dest[size + index] = src[index];
	dest[size + index] = 0;
	return (dest);
}
