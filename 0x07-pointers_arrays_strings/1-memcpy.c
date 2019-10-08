#include "holberton.h"
/**
  * _memcpy - fills memory with a constant byte.
  * @dest: first char.
  * @src: second char.
  * @n: unsigned int.
  * Return: s or null.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];
	return (dest);
}
