#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - return length of string.
 * @s: string to measure
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * infinite_add - add two numbers.
 * @n1: first num.
 * @n2: second num.
 * @r: buffer.
 * @size_r: size of buffer.
 * Return: buffer or NULL.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, sum, res = 0;

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	if (len1 + 1 >= size_r || len2 + 1 >= size_r)
		return (0);
	n1 += len1 - 1;
	n2 += len2 - 1;
	r[size_r] = 0;
	size_r--;
	while (*n1 && *n2)
	{	sum = (*n1 - 48) + (*n2 - 48);
		sum += res;
		r[size_r] = (sum % 10) + 48;
		res = sum / 10;
		n1--, n2--, size_r--;
	}
	while (*n1)
	{	sum = (*n1 - 48) + res;
		r[size_r] = (sum % 10) + 48;
		res = sum / 10;
		n1--, size_r--;
	}
	while (*n2)
	{	sum = (*n2 - 48) + res;
		r[size_r] = (sum % 10) + 48;
		res = sum / 10;
		n2--, size_r--;
	}
	r[size_r] = res + 48;
	return (r + size_r);
}
