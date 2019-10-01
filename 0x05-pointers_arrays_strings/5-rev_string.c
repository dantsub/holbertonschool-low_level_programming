#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * rev_string - reverses a string..
  * @s: char pointer.
  *
  */
void rev_string(char *s)
{
	int len,index;
	char *arr;

	while (s[len] != 0)
	{
		len++;
	}
	arr = (char *) malloc(len * sizeof(char));
	for(index = 0; index <= len; index++)
	{
		arr[index] = (char) *(s + index);
	}
	for (index = 0; index <= len; index++)
	{
		*(s + index) = arr[len - index - 1];
	}
}
