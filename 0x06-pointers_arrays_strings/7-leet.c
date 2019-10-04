#include <stdio.h>
#include "holberton.h"
/**
  * leet - function that encodes a string.
  * @a: char pointer.
  * Return: convert numbers.
  **/
char *leet(char *a)
{
	int index, index2;
	char letters[] = {97, 101, 111, 116, 108};
	char numbers[] = {52, 51, 48, 55, 49};

	for (index = 0; a[index] != 0; index++)
	{
		for (index2 = 0; letters[index2] != 0; index2++)
		{
			if ((a[index] == letters[index2]) || (a[index] == letters[index2] - 32))
				a[index] = numbers[index2];
		}
	}
		return (a);
}
