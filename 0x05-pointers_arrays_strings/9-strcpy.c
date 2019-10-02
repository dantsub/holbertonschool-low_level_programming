#include "holberton.h"
#include <string.h>

/**
  * _strcpy - prints.
  * @dest: char.
  * @src: char.
  * Return: pointer.
  */
char *_strcpy(char *dest, char *src)
{
	char *tmp;

	tmp = dest;

	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (tmp);
}
