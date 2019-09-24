#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a: integer number.
 * Return: absolute number.
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}

