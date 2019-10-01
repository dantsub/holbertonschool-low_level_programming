#include "holberton.h"
/**
  * puts2 -  prints a string..
  * @str: char pointer.
  *
  */
void puts2(char *str)
{
	while (*str != 0)
	{	if (*str % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar(10);
}
