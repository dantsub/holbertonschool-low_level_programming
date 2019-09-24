#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * @c: interger parammeter.
 *
 * Return: 0 or 1.
 */
int _islower(int c)
{
	if (c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
