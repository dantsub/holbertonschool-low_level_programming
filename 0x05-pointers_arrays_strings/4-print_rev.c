#include "holberton.h"
/**
  * print_rev - Returns the length of a string.
  * @s: char pointer.
  * Return: length of a string.
  */
void print_rev(char *s)
{
	int count;

	while (*s != 0)
	{
		count++;
		s++;
	}
	s--;
	while (count - 1 >= 0)
	{
		_putchar(*s);
		count--;
		s--;
	}
	_putchar(10);
}
