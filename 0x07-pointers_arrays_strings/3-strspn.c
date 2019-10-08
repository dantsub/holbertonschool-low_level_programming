#include "holberton.h"
/**
  * _strspn - gets the length of a prefix substring.
  * @s: first char.
  * @accept: second char.
  *
  * Return: count.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, index2, count;

	count = 0;
	for (index = 0; s[index] != 0; index++)
	{
		if (s[index] == ' ')
		{
			break;
		}
		else
			for (index2 = 0; accept[index2] != 0; index2++)
				if (s[index] == accept[index2])
					count++;
	}
	return (count);
}
