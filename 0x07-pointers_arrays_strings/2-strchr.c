#include "holberton.h"
/**
  * _strchr - locates a character in a string.
  * @s: first char.
  * @c: second char.
  *
  * Return: s or null.
  */
char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] != 0)
	{
		if (s[index] == c)
			return (s + index);
		s++;
	}
	if (s[index] == c)
		return (s + index);
	else
		return (0);
}
