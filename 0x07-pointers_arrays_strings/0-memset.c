#include "holberton.h"
/**
  * _memset - fills memory with a constant byte.
  * @s: first char.
  * @b: second char.
  * @n: third char.
  * Return: s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
