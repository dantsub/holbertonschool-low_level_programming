#include <stdio.h>
#include "holberton.h"
/**
  * rot13 - encodes a string using rot13.
  * @a: char pointer.
  * Return: rot13.
  **/
char *rot13(char *a)
{
	int index, index2;
	char Abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; a[index] != 0; index++)
	{
		for (index2 = 0; Abc[index2] != 0; index2++)
		{
			if (a[index] == Abc[index2])
			{
				a[index] = rot13[index2];
				break;
			}
		}
	}
	return (a);
}
