#include "holberton.h"
/**
  * _strcmp - compares two strings.
  * @s1: first string.
  * @s2: second string.
  * Return: .
  */
int _strcmp(char *s1, char *s2)
{
	int a, index;

	index = 0;
	while (s1[index] != 0)
	{
		a = s1[index] - s2[index];
		if (a != 0)
			return (a);
		index++;
	}
	return (a);
}
