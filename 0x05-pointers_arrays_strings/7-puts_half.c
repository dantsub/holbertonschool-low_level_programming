#include "holberton.h"
/**
  * puts_half - prints half of a string, followed by a new line.
  * @str: char pointer.
  *
  */
void puts_half(char *str)
{
	int i, pos;

	i = 0;
	while ((*(str + i)) != 0)
		++i;
	if (i % 2 != 0)
		pos = (i / 2) + 1;
	else
		pos = i / 2;
	while ((*(str + pos)) != 0)
	{
		_putchar((*(str + pos)));
		pos++;
	}
	_putchar(10);
}
