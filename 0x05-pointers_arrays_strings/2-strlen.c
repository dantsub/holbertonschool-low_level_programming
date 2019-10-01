#include "holberton.h"
/**
  * _strlen - Returns the length of a string.
  * @s: char pointer.
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
