#include "holberton.h"
#include <stdio.h>
/**
  * _strstr - function that locates a substring.
  * @haystack: char pointer
  * @needle: char pointer.
  * Return: null or string.
  */
char *_strstr(char *haystack, char *needle)
{
	int index, index1, index2;

	for (index = 0; haystack[index] != 0; index++)
	{
		for (index2 = index, index1 = 0; needle[index1] != 0; index1++, index2++)
			if (haystack[index2] != needle[index1] || haystack[index2] == 0)
				break;
		if (needle[index1] == 0)
			return (haystack + index);
	}
	return (NULL);
}
