#include <stdio.h>
#include "holberton.h"
/**
  * cap_string - function that capitalizes all words of a string.
  * @a:char pointer
  *
  * Return: string.
  **/
char *cap_string(char *a)
{
	int index, index2;
	char code[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (a[0] > 96 && a[0] < 123)
		a[0] = a[0] - 32;
	for (index = 0; a[index] != 0; index++)
	{
		for (index2 = 0; code[index2] != 0; index2++)
		{
			if (a[index] == code[index2])
			{
				if (a[index + 1] > 96 && a[index + 1] < 123)
					a[index + 1] = a[index + 1] - 32;
			}
		}
	}
	return (a);
}
