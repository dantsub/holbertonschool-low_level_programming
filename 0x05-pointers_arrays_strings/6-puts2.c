#include "holberton.h"
/**
  * puts2 -  prints a string..
  * @str: char pointer.
  *
  */
void puts2(char *str)
{
	while (*str != 0)
	{	_putchar(*str);
		str+= 2;
	}
	_putchar(10);
}
